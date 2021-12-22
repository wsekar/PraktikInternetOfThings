char serialData;
int pinA = 10; //definisi pin di pin 10
int pinB = 11;//definisi pin di pin 11
int pinC = 12;//definisi pin di pin 12
int pinD = 13;//definisi pin di pin 13
int analogPin = A0;//definisi analogpin di pin A0
int sensorVal;

void setup(){
  pinMode (pinA, OUTPUT); //pinA sebagai output
  pinMode (pinB, OUTPUT);//pinB sebagai output
  pinMode (pinC, OUTPUT);//pinC sebagai output
  pinMode (pinD, OUTPUT);//pinD sebagai output
  Serial.begin (9600);
}

void loop(){
  sensorVal = analogRead (analogPin); //membaca sensor dari analogPin
  Serial.println(sensorVal); //print sensorVal
  delay(1000); //delay 1000 s

  for(int i=0; i<4; i++)
    if(Serial.available() >0){
    serialData = Serial.read(); //membaca serialData
      if (serialData == 'A') digitalWrite (pinA, HIGH); //jika serial data == A, maka pinA menyala
      if (serialData == 'B') digitalWrite (pinA, LOW); //jika serial data == B, maka pinA mati
      if (serialData == 'C') digitalWrite (pinB, HIGH); //jika serial data == C, maka pinB menyala
      if (serialData == 'D') digitalWrite (pinB, LOW); //jika serial data == D, maka pinB mati
      if (serialData == 'E') digitalWrite (pinC, HIGH); //jika serial data == E, maka pinC menyala
      if (serialData == 'F') digitalWrite (pinC, LOW); //jika serial data == F, maka pinC mati
      if (serialData == 'G') digitalWrite (pinD, HIGH); //jika serial data == G, maka pinD menyala
      if (serialData == 'H') digitalWrite (pinD, LOW); //jika serial data == H, maka pinD mati
  }
}
