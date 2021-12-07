const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor

void setup()
{
Serial.begin(9600); // Starting Serial Terminal
}

void loop()
{
long duration, inches, cm; 
pinMode(pingPin, OUTPUT); //mendefinisikan output yaitu pingPin
//digitalWrite memberikan nilai HIGH atau LOW pada pin digital
digitalWrite(pingPin, LOW); //mengatur agar pingPin tidak menyala
delayMicroseconds(2); //menjeda program dalam jumlah waktu 2 microseconds
digitalWrite(pingPin, HIGH);//mengatur agar pingPin menyala
delayMicroseconds(10);//menjeda program dalam jumlah waktu 10 microseconds
digitalWrite(pingPin, LOW); //mengatur agar pingPin tidak menyala

pinMode(echoPin, INPUT);//mendefinisikan input yaitu echoPin
duration = pulseIn(echoPin, HIGH); //membuat variabel duration, pulseIn untuk menunggu nilai dari LOW ke HIGH
inches = microsecondsToInches(duration); //membuat variabel inches, yang menampung nilai dari microsecondsToInches
cm = microsecondsToCentimeters(duration);//membuat variabel cm, yang menampung nilai dari microsecondsToCentimeters

Serial.print(inches); //mencetak nilai dari variabel inches yang telah didefinisikan
Serial.print("in, ");
Serial.print(cm);//mencetak nilai dari variabel cm yang telah didefinisikan
Serial.print("cm");
Serial.println();

delay(100); //menjeda program dalam waktu 100 milisecond
}

long microsecondsToInches(long microseconds)
{
return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}
