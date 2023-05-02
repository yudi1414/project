#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

main()
{

menu:
    int indata, periode, umur;
    long int total1, total2,total3,total4,total5,total6,total7,total8,total9;
    long int total1_obat,total2_obat,total3_obat,total4_obat,total5_obat, tobi1,tobi2,tobi3,tobi4,tobi5, to_biaya, bi_kamar, bi_obat, bi_dokter;
    char pil, pilih, kamar, booking,booking1, booking2, booking3, nama[50], alamat[250], tlp[15], mail[50], npk[50],tekan;
    char rawat, booking4, booking5, booking6, booking7, booking8, np[50],gender, cek, dopil, perawat, kmr, dokter, bidok, lanjut;

menu1:
    system("cls");
 cout<<endl;
    cout<<"||=========================================================||"<<endl;
    cout<<"|                       FINAL PROJECT                       |"<<endl;
    cout<<"||=========================================================||"<<endl;
    cout<<"|  APLIKASI RAWAT INAP                                      |"<<endl;
    cout<<"|  •    Jenis penyakit (5)                               |"<<endl;
    cout<<"|  •    Dokter (5)                                       |"<<endl;
    cout<<"|  •    Jenis kamar (VIP, kelas 1, kelas 2, kelas 3)     |"<<endl;
    cout<<"|  •    Lama waktu rawat inap                            |"<<endl;
    cout<<"|  •    Data pasien                                      |"<<endl;
    cout<<"|  •    Biaya dokter, kamar, obat                        |"<<endl;
    cout<<"|  •    Data obat (5 penyakit)                           |"<<endl;
    cout<<"||=========================================================||"<<endl<<endl;
    cout<<"Tekan Y untuk melanjukan : ";
    cin>>lanjut;
    if (lanjut=='y'||lanjut=='Y')
    {
     goto menu2;
    }
    else
    {
     cout<<endl<<endl<<endl<<endl;
  cout<<"                             TERIMA KASIH"<<endl;
 }
menu2:
 system("cls");
        cout<<endl;
  cout<<" ==================================================================================== "<<endl;
        cout<<"|                            RUMAH SAKIT PREMIER INDONESIA                           |"<<endl;
        cout<<"|                Jl.Air Sagu 2 No.21 Ulujami-Pesanggrahan, Jakarta Selatan           |"<<endl;
        cout<<"|                  email: RSPI@jakselprov.go.id   Website: www.rspi.com              |"<<endl;
        cout<<" ------------------------------------------------------------------------------------ "<<endl<<endl;
        cout<<"  Syarat untuk mendapatkan pelayanan perawatan inap di Rumah Sakit Premier Indonesia,"<<endl;
        cout<<"  Anda harus mengisi semua form berikut secara berurut (wajib). Terima kasih."<<endl<<endl;
  cout<<"  1. Jenis Kamar"<<endl;
  cout<<"  2. Jenis Perawatan, Obat dan Dokter"<<endl<<endl;
  cout<<"  Lakukan Pengisian Form Mulai dari [1-2]= ";
  cin>>indata;
  cout<<endl;
  switch (indata)
  {

jenis_kamar:
   case 1:
    system("cls");
    cout<<endl;
    cout<<" ================================================================"<<endl;
                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                 "<<endl;
                cout<<" ================================================================"<<endl;
    cout<<" _______________________________________________________________ "<<endl;
                cout<<" | No.|"<<"   Jenis Kamar                                           |"<<endl;
                cout<<" |______________________________________________________________|"<<endl;
                cout<<" | 1  |   VIP                                                   |"<<endl;
                cout<<" | 2  |   Kelas I                                               |"<<endl;
                cout<<" | 3  |   Kelas II                                              |"<<endl;
                cout<<" | 4  |   Kelas III                                             |"<<endl;
                cout<<" |____|_________________________________________________________|"<<endl<<endl;
             cout<<" Pilihan Anda[1/2/3/4]= ";
             cin>>kamar;
             cout<<endl;

            if (kamar == '1')
            {
             system("cls");
             cout<<endl;
                cout<<"                               VIP"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"  Fasilitas Kamar"<<endl<<endl;
                cout<<"  1. Air Conditioner                      11. Meja"<<endl;
                cout<<"  2. 1 Bed                                12. Smart TV 72''"<<endl;
                cout<<"  3. 1 Kamar mandi (air panas & dingin)   13. Sofabed"<<endl;
                cout<<"  4. Bedside cabinet                      14. Kulkas"<<endl;
                cout<<"  5. Kursi tunggu                         15. Bed penunggu"<<endl;
                cout<<"  6. Overbed table                        16. Telepon"<<endl;
                cout<<"  7. Meja TV                              17. Ruang keluarga"<<endl;
                cout<<"  8. Almari pakaian                       18. 1 Set meja makan"<<endl;
                cout<<"  9. Refigrator                           19. Kitchen set"<<endl;
                cout<<"  10. Dispencer                           20. Mini bar"<<endl<<endl;

                cout<<"  Tarif Kamar per malam Rp. 3.500.000,-"<<endl;
                cout<<"  Pesan sekarang (y/n): ";
                cin>>booking;
                cout<<endl;

                if (booking == 'y'||booking=='Y')
                {
                 system("cls");
                    cout<<"  Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<"  Nama Pemesan Kamar   :";
                    cin>>npk;
                    cout<<"  Periode (malam)      :";
                    cin>>periode;
                    cout<<"  No. telepon          :";
                    cin>>tlp;
                    cout<<"  Email                :";
                    cin>>mail;
                    cout<<"  Alamat               :";
                    cin>>alamat;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
                    cout<<"  Data Pemesan Kamar Perawatan"<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
                    cout<<"  | Nama Pemesan Kamar    || "<<npk<<"      "     <<endl;
                    cout<<"  | Periode (malam)       || "<<periode<<" malam "<<endl;
                    cout<<"  | No. Telepon           || "<<tlp<<"\n";
                    cout<<"  | Email                 || "<<mail<<"     "     <<endl;
                    cout<<"  | Alamat                || "<<alamat<<"  "      <<endl;
     total1=(periode*3500000);
                    cout<<"  | Biaya Kamar per malam || Rp 3500000,-"        <<endl;
                    cout<<"  | Total Biaya Kamar     || Rp "<<total1<<",-                *sesuai periode"<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<"  Pilih Jenis Perawatan (y/n): ";
                    cin>>pilih;
                    cout<<endl;

                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
            else if (kamar == '2')
            {
             system("cls");
             cout<<endl;
                cout<<"                             KAMAR I"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"  Fasilitas Kamar"<<endl<<endl;
                cout<<"  1. Air Conditioner                      11. Meja"<<endl;
                cout<<"  2. 1 Bed                                12. Smart TV 72''"<<endl;
                cout<<"  3. 1 Kamar mandi (air panas & dingin)   13. Sofabed"<<endl;
                cout<<"  4. Bedside cabinet                      14. Kulkas"<<endl;
                cout<<"  5. Kursi tunggu                         15. Bed penunggu"<<endl;
                cout<<"  6. Overbed table "<<endl;
                cout<<"  7. Meja TV "<<endl;
                cout<<"  8. Almari pakaian"<<endl;
                cout<<"  9. Refigrator "<<endl;
                cout<<"  10. Dispencer"<<endl<<endl;

                cout<<"  Tarif Kamar per malam Rp. 2.500.000,-"<<endl;
                cout<<"  Pesan sekarang (y/n): ";
                cin>>booking1;
                cout<<endl;

                if (booking1 == 'y'||booking1=='Y')
                {
                 system("cls");
                    cout<<"  Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<"  Nama Pemesan Kamar   :";
                    cin>>npk;
                    cout<<"  Periode (malam)      :";
                    cin>>periode;
                    cout<<"  No. telepon          :";
                    cin>>tlp;
                    cout<<"  Email                :";
                    cin>>mail;
                    cout<<"  Alamat               :";
                    cin>>alamat;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
                    cout<<"  Data Pemesan Kamar Perawatan"<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
                    cout<<"  | Nama Pemesan Kamar    || "<<npk<<"      "     <<endl;
                    cout<<"  | Periode (malam)       || "<<periode<<" malam "<<endl;
                    cout<<"  | No. Telepon           || "<<tlp<<"\n";
                    cout<<"  | Email                 || "<<mail<<"     "     <<endl;
                    cout<<"  | Alamat                || "<<alamat<<"  "      <<endl;
     total2=(periode*2500000);
                    cout<<"  | Biaya Kamar per malam || Rp 2500000,-"        <<endl;
                    cout<<"  | Total Biaya Kamar     || Rp "<<total2<<",-                *sesuai periode"<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<"  Pilih Jenis Perawatan (y/n): ";
                    cin>>pilih;
                    cout<<endl;

                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
            else if (kamar == '3')
            {
             system("cls");
             cout<<endl;
                cout<<"                            KELAS II"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<" Fasilitas Kamar"<<endl<<endl;
                cout<<" 1. Air Conditioner"<<endl;
                cout<<" 2. 1 Bed"<<endl;
                cout<<" 3. 1 Kamar mandi (air panas & dingin)"<<endl;
                cout<<" 4. 1 Set sofa"<<endl;
                cout<<" 5. Bedside cabinet"<<endl;
                cout<<" 6. bed penunggu"<<endl;
                cout<<" 7. Kursi tunggu"<<endl;
                cout<<" 8. Meja"<<endl;
                cout<<" 9. Lemari kecil"<<endl;
                cout<<" 10. TV 21'' "<<endl<<endl;

                cout<<" Tarif Kamar per malam Rp. 1.300.000,-"<<endl;
                cout<<" Pesan sekarang (y/n): ";
                cin>>booking2;
                cout<<endl;

                if (booking2 == 'y'||booking2=='Y')
                {
                 system("cls");
                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pemesan Kamar   :";
                    cin>>npk;
                    cout<<" Periode (malam)      :";
                    cin>>periode;
                    cout<<" No. telepon          :";
                    cin>>tlp;
                    cout<<" Email                :";
                    cin>>mail;
                    cout<<" Alamat               :";
                    cin>>alamat;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<"  Data Pemesan Kamar Perawatan"<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
                    cout<<"  | Nama Pemesan Kamar    || "<<npk<<"      "     <<endl;
                    cout<<"  | Periode (malam)       || "<<periode<<" malam "<<endl;
                    cout<<"  | No. Telepon           || "<<tlp<<"\n";
                    cout<<"  | Email                 || "<<mail<<"     "     <<endl;
                    cout<<"  | Alamat                || "<<alamat<<"  "      <<endl;
                    total3=(periode*1300000);
                    cout<<"  | Biaya Kamar per malam || Rp 1300000,-"        <<endl;
                    cout<<"  | Total Biaya Kamar     || Rp "<<total3<<",-                *sesuai periode"<<endl;
                    cout<<"  -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<"  Pilih Jenis Perawatan (y/n): ";
                    cin>>pilih;

                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
            else
            {
             system("cls");
             cout<<endl;
                cout<<"                            KELAS III"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<" Fasilitas Kamar"<<endl<<endl;
                cout<<" 1. Air Conditioner"<<endl;
                cout<<" 2. 1 Bed"<<endl;
                cout<<" 3. 1 Kamar mandi (air panas & dingin)"<<endl;
                cout<<" 4. Bedside cabinet"<<endl;
                cout<<" 5. Kursi tunggu"<<endl;
                cout<<" 6. Lemari kecil"<<endl<<endl;

                cout<<" Tarif Kamar per malam Rp. 800.000,-"<<endl;
                cout<<" Pesan sekarang (y/n): ";
                cin>>booking3;
                cout<<endl;

                if (booking3 == 'y'||booking3=='Y')
                {
                 system("cls");
                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pemesan Kamar   :";
                    cin>>npk;
                    cout<<" Periode (malam)      :";
                    cin>>periode;
                    cout<<" No. telepon          :";
                    cin>>tlp;
                    cout<<" Email                :";
                    cin>>mail;
                    cout<<" Alamat               :";
                    cin>>alamat;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pemesan Kamar Perawatan"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pemesan Kamar    || "<<npk<<"      "     <<endl;
                    cout<<" | Periode (malam)       || "<<periode<<" malam "<<endl;
                    cout<<" | No. Telepon           || "<<tlp<<"\n";
                    cout<<" | Email                 || "<<mail<<"     "     <<endl;
                    cout<<" | Alamat                || "<<alamat<<"  "      <<endl;
     total4=(periode*800000);
                    cout<<" | Biaya Kamar per malam || Rp 800000,-"        <<endl;
                    cout<<" | Total Biaya Kamar     || Rp "<<total4<<",-                *sesuai periode"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<" Pilih Jenis Perawatan (y/n): ";
                    cin>>pilih;

                    if (pilih == 'y'||pilih=='Y')
                    {
                        goto menu2;
                    }
                    else
                    {
                        goto menu1;
                    }
                }
                else
                {
                    goto jenis_kamar;
                }
            }
   break;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pasien"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pasien                        || "<<np<<"      "     <<endl;
                    cout<<" | Umur                               || "<<umur<<" Tahun"<<endl;
                    cout<<" | Gender [L/P]                       || ";
                    if (gender == 'l'||gender=='L')
                    {
                        cout<<"Laki-laki"<<endl;
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        cout<<"Perempuan"<<endl;
                    }
jenis_perawatan:
  case 2:
   system("cls");
   cout<<endl;
            cout<<" ==============================================================="<<endl;
            cout<<"                  RUMAH SAKIT PREMIER INDONESIA                 "<<endl;
            cout<<" ==============================================================="<<endl;
   cout<<" ___________________________________________________________"<<endl;
            cout<<" | No.|"<<"   Pelayanan medis Spesialistik                      |"<<endl;
            cout<<" |__________________________________________________________|"<<endl;
            cout<<" | 1  |   Pelayanan Spesialis penyakit dalam                |"<<endl;
            cout<<" | 2  |   Pelayanan spesialis Penyakit kulit dan kelamin    |"<<endl;
            cout<<" | 3  |   Pelayanan spesialis THT                           |"<<endl;
            cout<<" | 4  |   Pelayanan spesialis bedah                         |"<<endl;
            cout<<" | 5  |   Pelayanan spesialis mata                          |"<<endl;
            cout<<" |____|_____________________________________________________|"<<endl<<endl;
            cout<<"Pelayanan yang Anda Butuhkan [1/2/3/4/5]= ";
            cin>>rawat;
            cout<<endl;

            if (rawat == '1')
            {
             system("cls");
                cout<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
       cout<<" Pelayanan Spesialis Penyakit Dalam"<<endl<<endl;
                cout<<" |#############|    Prof.dr.Djoko Widodo,Sp.PD-KPTI"<<endl;
                cout<<" |             |    Spesialis:"<<endl;
                cout<<" |             |    Penyakit dalam"<<endl;
                cout<<" |    PHOTO    |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |#############|"<<endl<<endl;
                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
                cout<<" Rp. 3.500.000- (belum termasuk biaya obat dan kamar)"<<endl;
                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 1.300.000"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl<<endl;
    cout<<" Pesan sekarang (y/n): ";
                cin>>booking4;
                cout<<endl;
                if (booking4 == 'y'||booking4=='Y')
                {
                 system("cls");
     cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pasien            : ";
                    cin>>np;
                    cout<<" Umur                   : ";
                    cin>>umur;
                    cout<<" Gender [L/P]           : ";
                    cin>>gender;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pasien"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pasien                   || "<<np<<"      "     <<endl;
                    cout<<" | Umur                          || "<<umur<<" Tahun"<<endl;
                    cout<<" | Gender [L/P]                  || "<<gender;
                    if (gender == 'l'||gender=='L')
                    {
                        cout<<"Laki-laki"<<endl;
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        cout<<"Perempuan"<<endl;
                    }
                    total1_obat=(periode*1300000);
     total5=(periode*3500000);
     tobi1=(total1_obat+total5);
                    cout<<" | Biaya Dokter                  || Rp 3500000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Biaya Obat                    || Rp 1300000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Total Biaya Perawatan Pasien  || Rp "<<tobi1<<",-             *sesuai periode perawatan"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<" Cek Pemesanan(y/n)   : ";
                    cin>>cek;
                    cout<<endl;
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else if (rawat == '2')
            {
             system("cls");
                cout<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<" Pelayanan Spesialis Penyakit Kulit dan Kelamin"<<endl<<endl;
                cout<<" |#############|    dr.Rinadewi Astriningrum, Sp.KK"<<endl;
                cout<<" |             |    Spesialis:"<<endl;
                cout<<" |             |    Penyakit Kulit dan Kelamin"<<endl;
                cout<<" |    PHOTO    |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |#############|"<<endl<<endl;
                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
                cout<<" Rp. 3.300.000- (belum termasuk biaya obat dan kamar)"<<endl;
                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 1.000.000"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl<<endl;
                cout<<" Pesan sekarang (y/n): ";
                cin>>booking5;
                cout<<endl;
                if (booking5 == 'y'||booking5=='Y')
                {
                    system("cls");
                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pasien                 : ";
                    cin>>np;
                    cout<<" Umur                        : ";
                    cin>>umur;
                    cout<<" Gender [L/P]                : ";
                    cin>>gender;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pasien"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pasien                   || "<<np<<"      "     <<endl;
                    cout<<" | Umur                          || "<<umur<<" Tahun"<<endl;
                    cout<<" | Gender [L/P]                  || ";
                    if (gender == 'l'||gender=='L')
                    {
                        cout<<"Laki-laki"<<endl;
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        cout<<"Perempuan"<<endl;
                    }
                    total2_obat=(periode*1000000);
        total6=(periode*3300000);
        tobi2=(total2_obat+total6);
        cout<<" | Biaya Dokter                  || Rp 3300000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Biaya Obat                    || Rp 1000000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Total Biaya Perawatan Pasien  || Rp "<<tobi2<<",-             *sesuai periode perawatan"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<" Cek Pemesanan(y/n)   : ";
                    cin>>cek;
                    cout<<endl;
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else if (rawat == '3')
            {
             system("cls");
                cout<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<" Pelayanan Spesialis THT"<<endl<<endl;
                cout<<" |#############|    dr.Ira Agustine Mutiara,Sp.THT-KL"<<endl;
                cout<<" |             |    Spesialis:"<<endl;
                cout<<" |             |    Penyakit THT"<<endl;
                cout<<" |    PHOTO    |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |#############|"<<endl<<endl;
                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
                cout<<" Rp. 2.700.000- (belum termasuk biaya obat dan kamar)"<<endl;
                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 900.000"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl<<endl;
                cout<<" Pesan sekarang (y/n): ";
                cin>>booking6;
                cout<<endl;
                if (booking6 == 'y'||booking6=='Y')
                {
                    system("cls");
                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pasien                    : ";
                    cin>>np;
                    cout<<" Umur                           : ";
                    cin>>umur;
                    cout<<" Gender [L/P]                   : ";
                    cin>>gender;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pasien"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pasien                        || "<<np<<"      "     <<endl;
                    cout<<" | Umur                               || "<<umur<<" Tahun"<<endl;
                    cout<<" | Gender [L/P]                       || ";
                    if (gender == 'l'||gender=='L')
                    {
                        cout<<"Laki-laki"<<endl;
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        cout<<"Perempuan"<<endl;
                    }
                    total3_obat=(periode*900000);
        total7=(periode*2700000);
        tobi3=(total3_obat+total7);
        cout<<" | Biaya Dokter                      || Rp 2700000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Biaya Obat                        || Rp 900000,-                  *per 1x perawatan"<<endl;
                    cout<<" | Total Biaya Perawatan Pasien      || Rp "<<tobi3<<",-             *sesuai periode perawatan"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<" Cek Pemesanan(y/n)   : ";
                    cin>>cek;
                    cout<<endl;
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else if (rawat == '4')
            {
             system("cls");
                cout<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<" Pelayanan Spesialis Bedah Umum"<<endl<<endl;
                cout<<" |#############|    dr.H Agoes Sarnanto I, SpB"<<endl;
                cout<<" |             |    Spesialis:"<<endl;
                cout<<" |             |    Bedah Umum"<<endl;
                cout<<" |    PHOTO    |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |#############|"<<endl<<endl;
                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
                cout<<" Rp. 2.800.000- (belum termasuk biaya obat dan kamar)"<<endl;
                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 1.200.000"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl<<endl;
                cout<<" Pesan sekarang (y/n): ";
                cin>>booking7;
                cout<<endl;
                if (booking7 == 'y'||booking7=='Y')
                {
                    system("cls");
                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pasien                    : ";
                    cin>>np;
                    cout<<" Umur                           : ";
                    cin>>umur;
                    cout<<" Gender [L/P]                   : ";
                    cin>>gender;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pasien"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pasien                        || "<<np<<"      "     <<endl;
                    cout<<" | Umur                               || "<<umur<<" Tahun"<<endl;
                    cout<<" | Gender [L/P]                       || ";
                    if (gender == 'l'||gender=='L')
                    {
                        cout<<"Laki-laki"<<endl;
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        cout<<"Perempuan"<<endl;
                    }
                    total4_obat=(periode*1200000);
     total8=(periode*2800000);
     tobi4=(total4_obat+total8);
     cout<<" | Biaya Dokter                       || Rp 2800000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Biaya Obat                         || Rp 1200000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Total Biaya Perawatan Pasien       || Rp "<<tobi4<<",-             *sesuai periode perawatan"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<" Cek Pemesanan(y/n)   : ";
                    cin>>cek;
                    cout<<endl;
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

            else
            {
             system("cls");
                cout<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
                cout<<" ---------------------------------------------------------------"<<endl;
                cout<<" Pelayanan Spesialis Mata"<<endl<<endl;
                cout<<" |#############|    dr.Fauziah Madona, Sp.M"<<endl;
                cout<<" |             |    Spesialis:"<<endl;
                cout<<" |             |    Mata"<<endl;
                cout<<" |    PHOTO    |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |             |"<<endl;
                cout<<" |#############|"<<endl<<endl;
                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
                cout<<" Rp. 1.500.000- (belum termasuk biaya obat dan kamar)"<<endl;
                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 500.000"<<endl;
                cout<<" ---------------------------------------------------------------"<<endl<<endl;
                cout<<" Pesan sekarang (y/n): ";
                cin>>booking8;
                cout<<endl;
                if (booking8 == 'y'||booking8=='Y')
                {
                    system("cls");
                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
                    cout<<" Nama Pasien                    : ";
                    cin>>np;
                    cout<<" Umur                           : ";
                    cin>>umur;
                    cout<<" Gender [L/P]                   : ";
                    cin>>gender;
                    cout<<endl;
                    system("cls");
                    cout<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" Data Pasien"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl;
                    cout<<" | Nama Pasien                        || "<<np<<"      "     <<endl;
                    cout<<" | Umur                               || "<<umur<<" Tahun"<<endl;
                    cout<<" | Gender [L/P]                       || ";
                    if (gender == 'l'||gender=='L')
                    {
                        cout<<"Laki-laki"<<endl;
                    }
                    else if (gender =='p'||gender=='P')
                    {
                        cout<<"Perempuan"<<endl;
                    }
                    total5_obat=(periode*500000);
     total9=(periode*1500000);
     tobi5=(total5_obat+total9);
     cout<<" | Biaya Dokter                       || Rp 1500000,-                 *per 1x perawatan"<<endl;
                    cout<<" | Biaya Obat                         || Rp 500000,-                  *per 1x perawatan"<<endl;
                    cout<<" | Total Biaya Perawatan Pasien       || Rp "<<tobi5<<",-             *sesuai periode perawatan"<<endl;
                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
                    cout<<" Simpan dan Cek Pemesanan(y/n)        : ";
                    cin>>cek;
                    cout<<endl;
                }
                else
                {
                    goto jenis_perawatan;
                }
            }

  default:
            cout<<"  Maaf, Permintaan Anda Tidak Tersedia"<<endl<<endl;
  break;
 }

        if (cek == 'y'||cek=='Y')
        {
        system("cls");
        cout<<endl;
        cout<<"*====================================================================================*"<<endl;
        cout<<"|                            RUMAH SAKIT PREMIER INDONESIA                           |"<<endl;
        cout<<"|                Jl.Air Sagu 2 No.21 Ulujami-Pesanggrahan, Jakarta Selatan           |"<<endl;
        cout<<"|                  email: RSPI@jakselprov.go.id   Website: www.rspi.com              |"<<endl;
        cout<<"|------------------------------------------------------------------------------------|"<<endl;
        cout<<"                               SURAT KETERANGAN PERAWATAN                            "<<endl;
        cout<<endl;
        cout<<"  Rincian Pemesanan"<<endl;
        cout<<"  -----------------"<<endl;
        cout<<"  Nama Pemesan kamar       : "<<npk<<endl;
        cout<<"  Jenis kamar yang Dipesan : ";
        if (kamar == '1')
            {
                cout<<"VIP"<<endl;
            }
        else if (kamar =='2')
            {
                cout<<"Kelas I"<<endl;
            }
        else if (kamar =='2')
            {
                cout<<"Kelas II"<<endl;
            }
        else
         {
             cout<<"Kelas III"<<endl;
         }
        cout<<"  No.Telepon               : "<<tlp<<endl;
        cout<<"  Email                    : "<<mail<<endl;
        cout<<"  Alamat                   : "<<alamat<<endl;
        cout<<endl;
        cout<<"  Identitas Pasien"<<endl;
        cout<<"  ----------------"<<endl;
        cout<<"  Nama Pasien              : "<<np<<endl;
        cout<<"  Umur                     : "<<umur<<" Tahun"<<endl;
        cout<<"  Gender                   : ";
        if (gender == 'l')
            {
                cout<<"Laki-laki"<<endl;
            }
        else
            {
                cout<<"Perempuan"<<endl;
            }
        cout<<"  Periode (malam)          : "<<periode<<" Malam"<<endl;
        cout<<"  Jenis Perawatan          : ";
        if (rawat == '1')
            {
                cout<<"Pelayanan Spesialis penyakit dalam"<<endl;
                cout<<"  Dokter                   : Prof.dr.Djoko Widodo,Sp.PD-KPTI"<<endl;
                cout<<"  Obat                     : - Statin"<<endl;
                cout<<"                             - Nitrats"<<endl;
                cout<<"                             - Bicorandil"<<endl;
                cout<<"                             - Ranolazine"<<endl;
                cout<<"                             - Ivabradine"<<endl;       
   }
        else if (rawat =='2')
            {
                cout<<"Pelayanan spesialis Penyakit kulit dan kelamin"<<endl;
                cout<<"  Dokter                   : dr.Rinadewi Astriningrum, Sp.KK"<<endl;
                cout<<"  Obat                       - Miconazole"<<endl;
                cout<<"                             - Scabimite"<<endl;
                cout<<"                             - Elocon"<<endl;
            }
        else if(rawat =='3')
         {
             cout<<"Pelayanan spesialis THT"<<endl;
             cout<<"  Dokter                   : dr.Ira Agustine Mutiara,Sp.THT-KL"<<endl;
             cout<<"  Obat                     : - Tarivid Otic"<<endl;
                cout<<"                             - Erlamycetin"<<endl;
                cout<<"                             - Otopain"<<endl;
                cout<<"                             - Colme"<<endl;
         }
        else if(rawat =='4')
         {
             cout<<"Pelayanan spesialis bedah"<<endl;
             cout<<"  Dokter                   : dr.Ira Agustine Mutiara,Sp.THT-KL"<<endl;
             cout<<"  Obat                     : - QnJelly Gamat"<<endl;
                cout<<"                             - Nebacetin oint"<<endl;
                cout<<"                             - Nebacetin Powder"<<endl;
         }
  else if(rawat =='5')
         {
             cout<<"Pelayanan spesialis mata"<<endl;
             cout<<"  Dokter                   : dr.Fauziah Madona, Sp.M"<<endl;
             cout<<"  Obat                     : - Tetrahydrozoline HC"<<endl;
                cout<<"                             - Benzalkonium Chloride"<<endl;
                cout<<"                             - Rohto"<<endl;
         }
        cout<<endl;
        cout<<"  Rincian Biaya "<<endl;
        cout<<"  -------------"<<endl;
        cout<<"  Biaya Kamar              : Rp ";
            if (kamar == '1')
                {
                    bi_kamar=total1;
                    cout<<total1<<endl;
                }
            else if (kamar =='2')
                {
                    bi_kamar=total2;
                    cout<<total2<<endl;
                }
            else if (kamar =='3')
                {
                    bi_kamar=total3;
                    cout<<total3<<endl;
                }
            else if(kamar=='4')
                {
                    bi_kamar=total4;
                    cout<<total4<<endl;
                }
        cout<<"  Biaya Dokter             : Rp ";
        if (rawat == '1')
                {
                    bi_dokter=total5;
                    cout<<total5<<endl;
                }
            else if (rawat =='2')
                {
                    bi_dokter=total6;
                    cout<<total6<<endl;
                }
            else if (rawat =='3')
                {
                    bi_dokter=total7;
                    cout<<total7<<endl;
                }
            else if(rawat=='4')
                {
                    bi_dokter=total8;
                    cout<<total8<<endl;
                }
            else if(rawat=='5')
                {
                    bi_dokter=total9;
                    cout<<total9<<endl;
                }
        cout<<"  Biaya Obat               : Rp ";
        if (rawat == '1')
                {
                    bi_obat=total1_obat;
                    cout<<total1_obat<<endl;
                }
            else if (rawat =='2')
                {
                    bi_obat=total2_obat;
                    cout<<total2_obat<<endl;
                }
            else if (rawat =='3')
                {
                    bi_obat=total3_obat;
                    cout<<total3_obat<<endl;
                }
            else if(rawat=='4')
                {
                    bi_obat=total4_obat;
                    cout<<total4_obat<<endl;
                }
            else if(rawat=='5')
                {
                    bi_obat=total5_obat;
                    cout<<total5_obat<<endl;
                }
        cout<<endl<<endl;
        to_biaya=(bi_kamar+bi_obat+bi_dokter);
        cout<<" Total Biaya               : Rp "<<to_biaya<<endl;
        }
    else if (cek == 'n'||cek=='N')
        {
            cout<<" Permintaan anda belum bisa di proses"<<endl;
        }
    cout<<"===================================================================================="<<endl<<endl;
    cout<<"Kembali ke menu utama [Y/N]= ";
    cin>>pil;

    if (pil == 'y'||pil=='Y')
    {
        goto menu;
    }
    else if(pil=='n'||pil=='N')
    {
        cout<<endl<<endl<<endl<<endl;
  cout<<"                             TERIMA KASIH"<<endl;
    }

    return 0;
}
