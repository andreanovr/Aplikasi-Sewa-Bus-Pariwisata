#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;
void garis1 ();
void garis3 ();
void garis4 ();
void judul ();
void mainmenu();
void menutama ();
void fasilitas();
void perjanjian();
void sk();
int choice;
bool cinfail;
int confirmation;
string username, password;
void writetofile(string username){
    ofstream writefile;
    string file = username+".txt";
    writefile.open(file.c_str());
    writefile << password;
    writefile.close();
    mainmenu();
}
void login(){
    system("cls");
    system("color 71");
    string q1, q2;
    judul();
    cout << "       Username : ";
    cin >> q1;
    cout << "       Password : ";
    cin >> q2;
    if (q1==username , q2==password) {
        Sleep(3000);
        menutama();
    } else
    {
        cout << "       Maaf data yang anda input salah, silahkan coba lagi." << endl;
        Sleep(3000);
        return login();
    }
    }
void registerpassword(){
    system("color 71");
    cout << "\n       Masukkan Password      : ";
    cin >> password;
        cin.clear();
        cin.ignore(10000,'\n');
        writetofile(username);
        exit(1);
    }
void registerme(){
    system("cls");
    system("color 71");
    judul();
    cout << "       Masukkan Username Anda : ";
    getline(cin, username);
    cout << "\n       Username -  \""<< username << "\"\n       Confirm? \n\       [1] Yes\n       [2] No" << endl;
    cout << "           Input : ";
    cin >> confirmation;
    if (confirmation == 1){
        registerpassword();
    }
    else; {
        cout << "       Maaf Data yang Anda Masukan Salah, Mohon Coba lagi!" << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        registerme();
    }}
void exit(){
    exit(0);}
void mainmenu(){
    system("color 71");
    system("cls");
    judul();
    cout << "           Hi, Apakah anda ingin Masuk atau Daftar?\n        [1] Masuk\n        [2] Daftar\n        [3] Keluar" <<endl;
    cout << "           Input : ";
    cin >> choice; do{
    cinfail = cin.fail();
    cin.clear();
    cin.ignore(10000,'\n');

    }while(cinfail == true);{
        switch(choice){
            case 1:
                login();
                break;

            case 2:
                registerme();
                break;

            case 3:
                exit();}}}
main()
{
    mainmenu();
}
void menutama(){
    system("cls");
    system("color 71");
    string a, b, c, d, e, x2, hg;
    judul();
        cout << "                   -- Entry Data Pelanggan --" << endl;
        cout << "           NIK           : ";
        cin >> a;
        cout << "           Nama          : ";
        cin >> b;
        cout << "           Alamat        : ";
        cin >> c;
        cout << "           No. Telp      : ";
        cin >> d;
        cout << "           Umur          : ";
        cin >> e;
        cout << "           Lokasi Tujuan : ";
        cin >> x2;
        cout << "           Lokasi Jemput : ";
        cin >> hg;
        cout << "\n" << endl;
   {
   int kode;
    Data:
    system("cls");
    judul() ;
        cout << "\n                   MENU UTAMA" << endl;
        cout << "                   1. Daftar Bus Pariwisata dan Fasilitas" << endl;
        cout << "                   2. Transaksi Sewa Bus Pariwisata" << endl;
        cout << "                   3. Syarat dan Ketentuan" << endl;
        cout << "                   4. Keluar\n" << endl;
        cout << "           Masukkan Pilihan Anda : ";
        cin >> kode;
        cout << "\n\n" << endl;
    switch (kode)
    {
    case 1 :
    system("cls");
    judul();
    fasilitas();
    Sleep(15000);
    goto Data;
    case 2 :
        system("cls");
        char ulang;
        do
        {
       int x,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p1234,z1234,sp,d1;
       judul();
       cout << "                                      **NOTA PEMESANAN BUS**     " << endl;
       cout << "                                     ------------------------    " << endl;
       cout << "\n                                    -- Entry Data Pelanggan --\n" << endl;
       cout << "Nama Pelanggan     : " << b << endl;
       cout << "NIK                : " << a << endl;
       cout << "Umur               : " << e << endl;
       cout << "Alamat             : " << c << endl;
       cout << "Nomor Telepon      : " << d << endl;
       cout << "\n                                  -- Entry Data Penyewaan Bus --\n" << endl;
       cout << "\nLokasi Tujuan      : " << x2 << endl;
       cout << "Lokasi Penjemputan : " << hg << endl;
       cout << "Lama Penyewaan Bus : ";
       cin >> x;
       cout<<"\n";
       garis1();
       cout << "No. #         Jenis Bus         #    Kapasitas    #      Tipe      #     Harga Sewa / Hari    #   Jumlah  "<<endl;
       cout << "=======================================================================================================" << endl;
       cout << "(1) #     Scania K410IB DD      #     50 Seat     #     Premium    #       Rp.25.000.000      #     "; cin >> z1; p1=z1*25000000*x;cout << "  " <<endl;
       garis3();
       cout << "(2) #          MAN R37          #     50 Seat     #     Standard   #       Rp.20.000.000      #     "; cin >> z2; p2=z2*20000000*x;cout << "  " <<endl;
       garis3();
       cout << "(3) #       Volvo B11R DD       #     47 Seat     #     Premium    #       Rp.23.000.000      #     "; cin >> z3; p3=z3*23000000*x;cout << "  " <<endl;
       garis3();
       cout << "(4) #   Scania Jetbus HD 110    #     47 Seat     #     Standard   #       Rp.17.000.000      #     "; cin >> z4; p4=z4*17000000*x;cout << "  " <<endl;
       garis3();
       cout << "(5) #   Mercedes Benz OH13 DD   #     43 Seat     #     Premium    #       Rp.20.000.000      #     "; cin >> z5; p5=z5*20000000*x;cout << "  " <<endl;
       garis3();
       cout << "(6) #        Scania A881L       #     43 Seat     #     Standard   #       Rp.15.000.000      #     "; cin >> z6; p6=z6*15000000*x;cout << "  " <<endl;
       garis3();
       cout << "(7) #  Mercedes Benz RF 25422   #     31 Seat     #     Premium    #       Rp.15.000.000      #     "; cin >> z7; p7=z7*15000000*x;cout << "  " <<endl;
       garis3();
       cout << "(8) #        Hino RM 380        #     31 Seat     #     Standard   #       Rp.13.000.000      #     "; cin >> z8; p8=z8*13000000*x;cout << "  " <<endl;
       garis3();
       cout << "(9) #       Scania Z1 SHD       #     25 Seat     #     Premium    #       Rp.13.000.000      #     "; cin >> z9; p9=z9*13000000*x;cout << "  " <<endl;
       garis3();
       cout << "(10) #        Volvo HD110        #     25 Seat     #     Standard   #       Rp.10.000.000      #     "; cin >> z10; p10=z10*10000000*x;cout << "  " <<endl;
       garis3();
       cout << "\n\n\n" << endl;
       judul();
       cout << "                                     **Surat Perjanjian Sewa**     " << endl;
       cout << "                                    ---------------------------    " << endl;
       z1234=z1+z2+z3+z4+z5+z6+z7+z8+z9+z10;
       p1234=p1+p2+p3+p4+p5+p6+p7+p8+p9+p10;
       d1=p1234-0.4*p1234;
       sp=p1234-d1;
       cout << "\nYang Bertanda tangan di bawah ini :" << endl;
       cout << "    1. Nama        : Andreanov Ridhovan" << endl;
       cout << "       NIK         : 09880319089292" << endl;
       cout << "       Umur        : 30 Tahun" << endl;
       cout << "       Alamat      : Jalan Kemang Raya No.14 Kota Makassar" << endl;
       cout << "       No. Telepon : 0813000123223" << endl;
       cout << "Dalam hal ini bertindak sebagai PIHAK PERTAMA (Pemilik CV A'Team Bus n Travel).\n" << endl;
       cout << "    2. Nama        : " << b << endl;
       cout << "       NIK         : " << a << endl;
       cout << "       Umur        : " << e << endl;
       cout << "       Alamat      : " << c << endl;
       cout << "       No. Telepon : " << d << endl;
       cout << "Dalam hal ini bertindak sebagai PIHAK KEDUA (Penyewa Bus).\n" << endl;
       cout << "Kedua belah Pihak dengan ini menerangkan bahwa PIHAK PERTAMA selaku pemilik CV A'Team Bus n Travel" << endl;
       cout << "telah setuju untuk menyewakan bus pariwisata dengan rincian pembayaran berikut :" << endl;
       cout << "    Jumlah Bus       : " << z1234 << endl;
       cout << "    Total Biaya Sewa : Rp. " << p1234 << endl;
       cout << "    Down Payment     : Rp. " << d1 << endl;
       cout << "    Sisa Pelunasan   : Rp. " << sp << endl;
       cout << "\nDemikian surat perjanjian ini dibuat dengan sebenar - benarnya. Penyalahgunaan terhadap" << endl;
       cout << "perjanjian ini akan dikenakan sanksi pidana.\n\n" << endl;
       cout << "            PIHAK PERTAMA                                            PIHAK KEDUA\n\n" << endl;
       cout << "              (Pemilik)                                               (Penyewa)" << endl;
       Sleep(15000);
       system("cls");
       judul();
       cout << "                                  **TRANSAKSI ANDA TELAH SELESAI**     " << endl;
       cout << "                                 ----------------------------------    \n\n" << endl;
       cout << "                                      Ingin Input Kembali [Y/T] : " << endl;
       cin>>ulang;
       } while ((ulang=='y') || (ulang=='Y'));
       garis1();
       cout<<"                              Terima kasih telah menggunakan layanan kami. " <<endl;
       garis1();
       Sleep(3000);
       return mainmenu();
       getch();
       break;
    case 3 :
        system("cls");
        judul();
        sk();
        Sleep(15000);
        goto Data;
    case 4 :
        return mainmenu();
    }
}
}
void garis1 ()
{
    cout << "=======================================================================================================" << endl;
}
void garis3 ()
{
    cout << "-------------------------------------------------------------------------------------------------------" <<endl;
}
void garis4 ()
{
    cout << "========================================" << endl;
}
void fasilitas()
{
       cout << "                                     DAFTAR BUS PARIWISATA" << endl;
       garis1 ();
       cout << "  #         Jenis Bus         #     Kapasitas    #       Tipe       #     Harga Sewa / Hari    #"<<endl;
       garis3 ();
       cout << "  #       Scania K410IB       #      50 Seat     #      Premium     #       Rp.25.000.000,-    #"<<endl;
       cout << "  #       Double Decker       #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #          MAN R37          #      50 Seat     #      Standard    #       Rp.20.000.000,-    #"<<endl;
       cout << "  #                           #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #        Volvo B11R         #      47 Seat     #      Premium     #       Rp.23.000.000,-    #"<<endl;
       cout << "  #       Double Decker       #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #    Scania Jetbus HD 110   #      47 Seat     #      Standard    #       Rp.17.000.000,-    #"<<endl;
       cout << "  #                           #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #       Mercedes Benz       #      43 Seat     #      Premium     #       Rp.20.000.000,-    #"<<endl;
       cout << "  #     OH13 Double Decker    #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #       Scania A881L        #      43 Seat     #      Standard    #       Rp.15.000.000,-    #"<<endl;
       cout << "  #                           #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #       Mercedes Benz       #      31 Seat     #      Premium     #       Rp.15.000.000,-    #"<<endl;
       cout << "  #          RF 25422         #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #        Hino RM 380        #      31 Seat     #      Standard    #       Rp.13.000.000,-    #"<<endl;
       cout << "  #                           #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #       Scania Z1 SHD       #      25 Seat     #      Premium     #       Rp.13.000.000,-    #"<<endl;
       cout << "  #                           #                  #                  #                          #"<<endl;
       garis3 ();
       cout << "  #        Volvo HD110        #      25 Seat     #      Standard    #       Rp.10.000.000,-    #"<<endl;
       cout << "  #                           #                  #                  #                          #"<<endl;
       garis1 ();
       cout << "\n                                         FASILITAS                                                    " << endl;
       cout << "1. Tipe Premium" << endl;
       cout << "    #Seat 43 / 47 / 50" << endl;
       cout << "        -LED TV         -Coolbox        -Dispenser Air      -Toilet     -Smoking Room       " << endl;
       cout << "        -Charger HP     -Audio System   -Reclining Seat     -Full AC    -Pemadam Kebakaran  " << endl;
       cout << "        -LCD Passenger  -Bantal         -Pintu Darurat      -Wifi       -Palu Pemecah Kaca  " << endl;
       cout << "        -CCTV           -Seatbelt       -Selimut            -Snack      -Bagasi Atas & Bawah" << endl;
       cout << "    #Seat 25 / 31" << endl;
       cout << "        -LED TV         -Coolbox        -Snack              -CCTV       -Smoking Room       " << endl;
       cout << "        -Charger HP     -Audio System   -Reclining Seat     -Full AC    -Pemadam Kebakaran  " << endl;
       cout << "        -LCD Passenger  -Bantal         -Pintu Darurat      -Wifi       -Palu Pemecah Kaca  " << endl;
       cout << "        -Seatbelt       -Selimut        -Bagasi Atas & Bawah" << endl;
       cout << "\n2. Tipe Standard" << endl;
       cout << "    #Seat 43 / 47 / 50" << endl;
       cout << "        -Charger HP     -Audio System   -Full AC            -Wifi       -Pemadam Kebakaran  " << endl;
       cout << "        -Bantal         -Pintu Darurat  -LED TV             -Snack      -Palu Pemecah Kaca  " << endl;
       cout << "        -CCTV           -Seatbelt       -Bagasi Bawah" << endl;
       cout << "    #Seat 25 / 31" << endl;
       cout << "        -Charger HP     -Audio System   -Full AC            -Wifi       -Pemadam Kebakaran  " << endl;
       cout << "        -Bantal         -Pintu Darurat  -LED TV             -Snack      -Palu Pemecah Kaca  " << endl;
       cout << "        -CCTV           -Seatbelt       -Bagasi Bawah" << endl;
}
void sk()
{
        cout << "                                   SYARAT DAN KETENTUAN" << endl;
        cout << "\n                                       PEMESANAN" << endl;
        cout << "   1. Pemesanan dapat dilakukan melalui Aplikasi A'Team Bus N Travel dan kantor A'Team Bus N Travel" << endl;
        cout << "   2. Pemesanan dapat dilakukan 6 bulan s.d 1 minggu sebelum jadwal perjalanan." << endl;
        cout << "   3. Harga sewa bus sudah termasuk upah sopir, tol dan bensin. (ex: tip, makan, dan penginapan sopir)." << endl;
        cout << "   4. Pastikan Anda telah mengisi data dengan benar." << endl;
        cout << "   5. Surat Perjanjian Sewa harap dicetak 4 rangkap dan ditandatangani diatas materai 6000. Selanjutnya" << endl;
        cout << "      diserahkan ke kantor A'Team Bus N Travel dengan dilengkapi Fotokopi KTP dan Bukti Pembayaran." << endl;
        cout << "   6. Pihak A'Team Bus N Travel akan menghubungi pelanggan pada H-1 untuk memastikan perjalanan." << endl;
        cout << "\n                                       PEMBAYARAN" << endl;
        cout << "   1. Pembayaran dilakukan via transfer ke rekening yang telah ditentukan." << endl;
        cout << "   2. Batas melakukan transfer yaitu 1x24 jam setelah transaksi telah selesai." << endl;
        cout << "   3. Jika sudah lebih dari batas waktu pembayaran makan harap melakukan reservasi ulang." << endl;
        cout << "   4. Pembayaran Down Payment (DP) dilakukan setelah melakukan reservasi(1x24 jam)." << endl;
        cout << "   5. Sisa pelunasan harap dibayarkan H-3 sebelum jadwal perjalanan." << endl;
        cout << "\n                                       PEMBATALAN" << endl;
        cout << "   1. Pembatalan dapat dilakukan dengan menghubungi kantor A'Team Bus N Travel maksimal H-1 sebelum" << endl;
        cout << "      jadwal perjalanan." << endl;
        cout << "   2. Pengembalian uang dilakukan  selambat - lambatnya 7 hari kerja dengan dipotong biaya administrasi" << endl;
        cout << "      sebesar 10% dari harga keseluruhan." << endl;
        cout << "   3. pengembalian uang dilakukan via transfer ke rekening pelanggan." << endl;
}
void judul()
{
    garis1();
    cout << "                                     CV A'TEAM BUS N TRAVEL"                                             << endl;
    cout << "                                 Jalan Mawar No.89 Kota Makassar"                                        << endl;
    cout << "       Telp / Fax: (021)18501134 , Instagram : A'Team Bus N Travel , a'teambusntravel@gmail.com        " << endl;
    cout << "                              Menyewakan Berbagai Jenis Bus Pariwisata"                                  << endl;
    garis1 ();
    cout << "\n" << endl;
}
