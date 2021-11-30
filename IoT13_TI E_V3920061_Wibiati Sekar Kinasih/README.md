# PENJELASAN

Pada Praktikum ini melakukan praktik untuk menghubungkan arduino dengan web server.

Alur:
1. Menambahkan library EtherCard pada arduino
2. Menggunakan IP yang telah dibuat pada script static byte gwip -> IP ini digunakan untuk mengatur alamat IP pada komputer, sedangkan static byte myip digunakan untuk membuka server di web browser
3. Compile script, kemudian buka file proteus dan memasukkan file hex ke dalam arduino
4. Mengatur IP gateway di modul ENC2860 agar arduino dapat terhubung ke web server
5. Mengetikkan IP web server pada kolom pencarian web.
6. Hasilnya adalah muncul nama, nim, tanggal lahir, dan email yang telah dibuat pada script program arduino
