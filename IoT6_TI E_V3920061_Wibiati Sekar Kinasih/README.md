Penjelasan Alur Program :

Motion detector digunakan untuk mendeteksi adanya gerakan. Saat motion detector mendeteksi adanya gerakan maka window dan garage akan terbuka serta lamp menyala. Namun, jika motion detector tidak mendeteksi adanya gerakan maka window dan garage akan tertutup serta lamp akan mati.

Konfigurasi :

IoT server dapat dimonitor oleh laptop melalui remote server dengan IP 192.168.0.10 dengan username wibisk dan password 1601. IP ini dikonfigurasikan pada setiap home device pada bagian remote server sehingga home device dapat dimonitor melalui laptop. Agar koneksi IoT ini menjadi wireless maka mengganti I/O config network adapternya menjadi PT-IOT-NM-1W-AC. Pada server bagian AAA menambahkan setting untuk network configuration yang berisikan client name, secret, client ip, dan servertype. Selain itu juga melakukan setting pada user setup, di mana ini membuat username dan password untuk setiap home device. Pada wireless router melakukan konfigurasi network name(ssid) dengan nama Home dan juga wireless security. Wireless security ini menggunakan WPA2 Enterprise dengan tipe enkripsi AES. Selain itu juga memasukkan radius server yaitu 192.168.0.10 dan share secret yaitu wib123.
