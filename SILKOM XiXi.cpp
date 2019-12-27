#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <sstream>
#include <time.h>

using namespace std;

class SilkomXiXi {
    char pUsername[64];
    char pPassword[128];
    char pNamaLengkap[64];
    long pAccountIndex;
    char ltran[100][100];

    public:
    void mainHeader(int tipeHeader);
    void mainRegister();
    void mainLogin();
    void menuRentHouse(long);
    void checkRentHouse(long, int);
    void userMenu(long);
    void userDetails(long);
};

void SilkomXiXi::mainHeader(int tipeHeader) {
    switch(tipeHeader) {
        case 1:
            cout << "======================================================================================================================" << endl;
            cout << "                                                                                                                      " << endl;
            cout << "    O~~ ~~   O~~ O~~       O~~   O~~      O~~~~      O~~       O~~                O~~      O~~     O~~      O~~       " << endl;
            cout << "  O~~    O~~ O~~ O~~       O~~  O~~     O~~    O~~   O~ O~~   O~~~                 O~~   O~~    O~  O~~   O~~    O~   " << endl;
            cout << "   O~~       O~~ O~~       O~~ O~~    O~~        O~~ O~~ O~~ O O~~                  O~~ O~~          O~~ O~~          " << endl;
            cout << "     O~~     O~~ O~~       O~ O~      O~~        O~~ O~~  O~~  O~~     O~~~~~         O~~      O~~     O~~      O~~   " << endl;
            cout << "        O~~  O~~ O~~       O~~  O~~   O~~        O~~ O~~   O~  O~~                  O~~ O~~    O~~   O~~ O~~    O~~   " << endl;
            cout << "  O~~    O~~ O~~ O~~       O~~   O~~    O~~     O~~  O~~       O~~                 O~~   O~~   O~~  O~~   O~~   O~~   " << endl;
            cout << "    O~~ ~~   O~~ O~~~~~~~~ O~~     O~~    O~~~~      O~~       O~~                O~~      O~~ O~~ O~~      O~~ O~~   " << endl;
            cout << "                                                                                                                      " << endl;
            cout << "======================================================================================================================" << endl;
            break;
        case 2:
            cout << "======================================================================================================================" << endl;
            cout << "                                                                                                                      " << endl;
            cout << "    O~~ ~~   O~~ O~~       O~~   O~~      O~~~~      O~~       O~~                O~~      O~~     O~~      O~~       " << endl;
            cout << "  O~~    O~~ O~~ O~~       O~~  O~~     O~~    O~~   O~ O~~   O~~~                 O~~   O~~    O~  O~~   O~~    O~   " << endl;
            cout << "   O~~       O~~ O~~       O~~ O~~    O~~        O~~ O~~ O~~ O O~~                  O~~ O~~          O~~ O~~          " << endl;
            cout << "     O~~     O~~ O~~       O~ O~      O~~        O~~ O~~  O~~  O~~     O~~~~~         O~~      O~~     O~~      O~~   " << endl;
            cout << "        O~~  O~~ O~~       O~~  O~~   O~~        O~~ O~~   O~  O~~                  O~~ O~~    O~~   O~~ O~~    O~~   " << endl;
            cout << "  O~~    O~~ O~~ O~~       O~~   O~~    O~~     O~~  O~~       O~~                 O~~   O~~   O~~  O~~   O~~   O~~   " << endl;
            cout << "    O~~ ~~   O~~ O~~~~~~~~ O~~     O~~    O~~~~      O~~       O~~                O~~      O~~ O~~ O~~      O~~ O~~   " << endl;
            cout << "                                                                                                                      " << endl;
            cout << "======================================================================================================================" << endl;
            cout << "==                                     Selamat Datang di Aplikasi SILKOM - XiXi                                     ==" << endl;
            cout << "==        Aplikasi ini digunakan untuk melakukan penyewaan rumah di area Universitas Singaperbangsa Karawang        ==" << endl;
            cout << "== Sebelum melakukan penyewaan rumah, User dimohon untuk melakukan registrasi dan login di Aplikasi terlebih dahulu ==" << endl;
            cout << "======================================================================================================================" << endl;
            break;
        default:
            cout << "======================================================================================================================" << endl;
            cout << "                                                                                                                      " << endl;
            cout << "    O~~ ~~   O~~ O~~       O~~   O~~      O~~~~      O~~       O~~                O~~      O~~     O~~      O~~       " << endl;
            cout << "  O~~    O~~ O~~ O~~       O~~  O~~     O~~    O~~   O~ O~~   O~~~                 O~~   O~~    O~  O~~   O~~    O~   " << endl;
            cout << "   O~~       O~~ O~~       O~~ O~~    O~~        O~~ O~~ O~~ O O~~                  O~~ O~~          O~~ O~~          " << endl;
            cout << "     O~~     O~~ O~~       O~ O~      O~~        O~~ O~~  O~~  O~~     O~~~~~         O~~      O~~     O~~      O~~   " << endl;
            cout << "        O~~  O~~ O~~       O~~  O~~   O~~        O~~ O~~   O~  O~~                  O~~ O~~    O~~   O~~ O~~    O~~   " << endl;
            cout << "  O~~    O~~ O~~ O~~       O~~   O~~    O~~     O~~  O~~       O~~                 O~~   O~~   O~~  O~~   O~~   O~~   " << endl;
            cout << "    O~~ ~~   O~~ O~~~~~~~~ O~~     O~~    O~~~~      O~~       O~~                O~~      O~~ O~~ O~~      O~~ O~~   " << endl;
            cout << "                                                                                                                      " << endl;
            cout << "======================================================================================================================" << endl;
            break;
    }
}

void SilkomXiXi::mainRegister() {
    REGISTER:
    char username[64], email[64], namaLengkap[64];
    char tempPassword;
    long Account;
    int i = 0; int checkUserUsername = false;

    system("cls");
    mainHeader(1);

    cout << "[1] Registrasi Akun SILKOM - XiXi" << endl;
    cout << "============================" << endl;
    cout << "Nama Lengkap\t: "; fflush(stdin); gets(namaLengkap);
    cout << "Username\t: "; fflush(stdin); gets(username);
    cout << "Password\t: ";

    for(i=0;;) { // infinite loop
        tempPassword = getch();
        if((tempPassword >= 'a' && tempPassword <= 'z') || (tempPassword >= 'A' && tempPassword <= 'Z') || (tempPassword >= '0' && tempPassword <= '9')) {
            pPassword[i] = tempPassword;
            ++i;
            cout << "*";
        }

        if(tempPassword == '\b' && i >= 1) {
            cout << "\b \b";
            --i;
        }

        if(tempPassword == '\r') {
            pPassword[i] = '\0';
            break;
        }
    }

    if(i <= 5) {
        cout << "\n============================" << endl;
        cout << "Register gagal! Minimal Password adalah 6 digit." << endl;
        cout << "Tekan sembarang tombol untuk kembali ke Menu Register." << endl;
        cout << "============================" << endl;
        getch();
        system("cls");
        mainHeader(1);
        goto REGISTER;
    }

    ifstream checkUname;
    checkUname.open("SilkomXiXi.dat", ios::binary);
    checkUname.seekg(0);
    while(checkUname.read((char *)this, sizeof(SilkomXiXi))) {
        int x, z;
        for(x=0, z=0; username[x] != '\0' || pUsername[z] != '\0'; ++x, ++z) {
            if(pUsername[z] != username[x]) {
                checkUserUsername = 0;
                break;
            } else checkUserUsername = 1;
        }

        if(checkUserUsername == 1 ) {
            break;
        }
    }

    checkUname.close();
    if(!checkUserUsername) {
        ifstream temp;
        temp.open("SilkomXiXi.dat", ios::binary);

        ResetAccountIndex:
        temp.seekg(0);
        Account = rand() % 11999 + 1000000;

        int f = 0;
        while(temp.read((char *)this, sizeof(SilkomXiXi))) {
            if(Account == pAccountIndex) {
                f = 1;
                break;
            }
        } if(f == 1) {
            goto ResetAccountIndex;
        }
        temp.close();

        ofstream file;
        file.open("SilkomXiXi.dat", ios::binary|ios::app);
        strcpy(pUsername, username);
        strcpy(pNamaLengkap, namaLengkap);
        pAccountIndex = Account;

        for(i=0;i<100;++i)
            ltran[i][0]='\0';

        file.write((char *)this, sizeof(SilkomXiXi));
        file.close();
        cout << "\n============================" << endl;
        cout << "Register berhasil! Silahkan login untuk melanjutkan." << endl;
        cout << "Tekan sembarang tombol untuk kembali ke Menu Login." << endl;
        cout << "============================" << endl;
        getch();
    } else {
        cout << "\n============================" << endl;
        cout << "Register gagal! Username telah terdaftar di dalam server." << endl;
        cout << "Tekan sembarang tombol untuk kembali ke Menu Register." << endl;
        cout << "============================" << endl;
        getch();
        system("cls");
        goto REGISTER;
    }
}

void SilkomXiXi::mainLogin() {
    int usahaLogin = 3;

    PassInput:
    system("cls");
    mainHeader(1);

    char username[64], nPassword[64], tempPassword;
    int i = 0, check = 0, checkusername = 0;

    cout << "[2] Login ke Akun SILKOM - XiXi" << endl;
    cout << "============================" << endl;
    cout << "Username\t: "; fflush(stdin); gets(username);
    cout << "Password\t: ";

    for(i=0;;) { // infinite loop
        tempPassword = getch();
        if((tempPassword >= 'a' && tempPassword <= 'z') || (tempPassword >= 'A' && tempPassword <= 'Z') || (tempPassword >= '0' && tempPassword <= '9')) {
            nPassword[i] = tempPassword;
            ++i;
            cout << "*";
        }

        if(tempPassword == '\b' && i >= 1) {
            cout << "\b \b";
            --i;
        }

        if(tempPassword == '\r') {
            nPassword[i] = '\0';
            break;
        }
    }

    if(i <= 5) {
        cout << "\n============================" << endl;
        cout << "Login gagal! Minimal Password adalah 6 digit." << endl;
        cout << "Tekan sembarang tombol untuk kembali ke Menu Login." << endl;
        cout << "============================" << endl;
        getch();
        system("cls");
        mainHeader(1);
        goto PassInput;
    }

    ifstream log;
    log.open("SilkomXiXi.dat", ios::binary);
    log.seekg(0);
    while(log.read((char *)this, sizeof(SilkomXiXi)))
    {
        check = 0;
        checkusername = 0;
        int x, z;
        for(x=0, z=0; username[x] != '\0' || pUsername[z] != '\0'; ++x, ++z) {
            if(pUsername[z] != username[x]) {
                checkusername = 0;
                break;
            } else checkusername = 1;
        }

        if(checkusername != 1) continue;
        else {
            int i,j;
            for(i=0, j=0; nPassword[i] != '\0' || pPassword[j] != '\0'; ++i, ++j) {
                if(pPassword[j] != nPassword[i]) {
                    check = 0;
                    break;
                }
                else check = 1;
            }
        } if(check == 1) {
            break;
        }
    }

    log.close();
    if(check == 1) {
        cout << "\n============================" << endl;
        cout << "Login berhasil! Selamat datang di Aplikasi SILKOM - XiXi." << endl;
        cout << "Tekan sembarang tombol untuk kembali ke Menu User." << endl;
        cout << "============================" << endl;
        getch();
        userMenu(pAccountIndex);
    } else {
        --usahaLogin;
        if(usahaLogin>0) {
            cout << "\n============================" << endl;
            cout << "Login gagal! Username atau Password kamu salah." << endl;
            cout << "Tekan sembarang tombol untuk kembali ke Menu Login." << endl;
            cout << "============================" << endl;
            getch();
            goto PassInput;
        } else {
            cout << "\n============================" << endl;
            cout << "Login gagal! Kamu telah memasukkan Username dan Password yang salah selama 3 kali." << endl;
            cout << "Tekan sembarang tombol untuk kembali ke Menu Awal." << endl;
            cout << "============================" << endl;
            getch();
        }
    }
}

void SilkomXiXi::menuRentHouse(long Account) {
    StartMenuRent:
        string pilihanUser;
        double pilihan;
        system("cls");
        mainHeader(1);
        cout << "                             Selamat Datang " << pNamaLengkap << " di Aplikasi SILKOM - XiXi                        " << endl;
        cout << "  Berikut adalah list Rumah yang tersedia. Kamu bisa melihat Fasilitas dengan memilih Nomor dari Rumah yang tersedia." << endl;
        cout << "======================================================================================================================" << endl;
        cout << "[1] Rumah Bapak Soleh Leoni [3x4]\n[2] Rumah di Perumahan Mahkota [6x6]\n[3] Rumah Perum Pemda [10x10]" << endl;
        cout << "[4] Rumah Kang Slamet Soto Gang Hisana [5x5]" << endl;
        cout << "========================================================================" << endl;
        cout << "[Pilihan] ";
        while (getline(cin, pilihanUser)) {
            stringstream ss(pilihanUser);
            if (ss >> pilihan) {
                if (ss.eof()) {   // Success
                break;
                }
            }
        }
        cout << pilihan << endl;
        getch();
        if(pilihan > 4 || pilihan <= 0) {
            cout << "======================================================================================================================" << endl;
            cout << "\t\tMohon Maaf, nomor rumah yang kamu cari tidak ditemukan. Mohon kembali dilain waktu yaa ~" << endl;
            cout << "======================================================================================================================" << endl;
            getch();
            goto StartMenuRent;
        } else {
            checkRentHouse(Account, pilihan);
        }
}

void SilkomXiXi::checkRentHouse(long Account, int nomorRumah) {
    StartCheck:
        char pilihanUser;
        string kosApa;
        int hargaRumah = 0;
        system("cls");
        mainHeader(1);
        cout << "\t\t\t     Selamat Datang " << pNamaLengkap << " di Aplikasi SILKOM - XiXi                        " << endl;
        switch(nomorRumah) {
            case 1:
                cout << "\t\tBerikut adalah fasilitas di Rumah Bapak Soleh Leoni [3x4]. Kamu bisa melanjutkan jika bersedia." << endl;
                cout << "======================================================================================================================" << endl;
                cout << "Fasilitas Utama :\n1. Tidak Ada WiFi.\n2. Tempat Parkir Luas.\n3. Bonus Lemari dan Kasur.\n4. Air Bersih." << endl;
                cout << "5. Kamar Mandi In-Door" << endl;
                cout << "\nHarga / bulan \t: Rp 300.000 / orang" << endl;
                break;
            case 2:
                cout << "\t\tBerikut adalah fasilitas di Rumah di Perumahan Mahkota [6x6]. Kamu bisa melanjutkan jika bersedia." << endl;
                cout << "======================================================================================================================" << endl;
                cout << "Fasilitas Utama :\n1. Ada WiFi.\n2. Tempat Parkir Lumayan.\n3. Dapur Umum.\n4. Kamar Mandi In-Door.\n5. Kulkas Umum." << endl;
                cout << "\nHarga / bulan \t: Rp 450.000 / orang" << endl;
                cout << "======================================================================================================================" << endl;
                break;
            case 3:
                cout << "\t\tBerikut adalah fasilitas di Rumah Perum Pemda [10x10]. Kamu bisa melanjutkan jika bersedia." << endl;
                cout << "======================================================================================================================" << endl;
                cout << "Fasilitas Utama :\n1. No WiFi.\n2. Tempat Parkir di Dalam.\n3. Dapur.\n4. Kamar Mandi Luas\n5. Dispenser\n6. 5 Ruangan + TV." << endl;
                cout << "\nHarga / bulan \t: Rp 400.000 / orang" << endl;
                cout << "======================================================================================================================" << endl;
                break;
            case 4:
                cout << "\tBerikut adalah fasilitas di Rumah Kang Slamet Soto Gang Hisana [5x5]. Kamu bisa melanjutkan jika bersedia." << endl;
                cout << "======================================================================================================================" << endl;
                cout << "Fasilitas Utama :\n1. WiFi.\n2. Tempat Parkir.\n3. Dapur.\n4. Kamar Mandi Luas\n5. Dispenser\n6. TV.\n7. Bale Kursi Panjang\n8. Security 25 jam." << endl;
                cout << "\nHarga / bulan \t: Rp 600.000 / orang" << endl;
                cout << "======================================================================================================================" << endl;
                break;
            default:
                cout << "======================================================================================================================" << endl;
                cout << "\t\tMohon Maaf, nomor rumah yang kamu cari tidak ditemukan. Mohon kembali dilain waktu yaa ~" << endl;
                cout << "======================================================================================================================" << endl;
                break;
        }
        if(nomorRumah == 1) {
            cout << "Apakah anda ingin melanjutkan ke Menu Pembayaran ? [y/n] : "; cin >> pilihanUser;
            if(pilihanUser == 'y' || pilihanUser == 'Y') {
                hargaRumah = 300000;
                kosApa = "Rumah Bapak Soleh Leoni [3x4]";
                goto Payment;
            } else {
                menuRentHouse(Account);
            }
        } if (nomorRumah == 2) {
            cout << "Apakah anda ingin melanjutkan ke Menu Pembayaran ? [y/n] : "; cin >> pilihanUser;
            if(pilihanUser == 'y' || pilihanUser == 'Y') {
                hargaRumah = 450000;
                kosApa = "Rumah di Perumahan Mahkota [6x6]";
                goto Payment;
            } else {
                menuRentHouse(Account);
            }
        } if (nomorRumah == 3) {
            cout << "Apakah anda ingin melanjutkan ke Menu Pembayaran ? [y/n] : "; cin >> pilihanUser;
            if(pilihanUser == 'y' || pilihanUser == 'Y') {
                hargaRumah = 400000;
                kosApa = "Rumah Perum Pemda [10x10]";
                goto Payment;
            } else {
                menuRentHouse(Account);
            }
        } if (nomorRumah == 4) {
            cout << "Apakah anda ingin melanjutkan ke Menu Pembayaran ? [y/n] : "; cin >> pilihanUser;
            if(pilihanUser == 'y' || pilihanUser == 'Y') {
                hargaRumah = 600000;
                kosApa = "Rumah Kang Slamet Soto Gang Hisana [5x5]";
                goto Payment;
            } else {
                menuRentHouse(Account);
            }
        }

        Payment:
            int totalPembayaran;
            string berapaBulan;
            double bulan;

            char t[24];
            fstream file;
            file.open("SilkomXiXi.dat",ios::in|ios::out|ios::binary);
            file.seekp(0);
            while(file.read((char*)this, sizeof(SilkomXiXi)))
            {
                if(Account == pAccountIndex) break;
            }
            cout << "======================================================================================================================" << endl;
            cout << "Mohon untuk menggunakan Angka yaa ..." << endl;
            cout << "Mau sewa berapa bulan nih ? : ";
            while (getline(cin, berapaBulan)) {
                stringstream ss(berapaBulan);
                if (ss >> bulan) {
                    if (ss.eof()) {   // Success
                    break;
                    }
                }
            }

            totalPembayaran = bulan * hargaRumah;
            time_t rawtime;
            struct tm * timeinfo;
            time ( &rawtime );
            timeinfo = localtime ( &rawtime );
            cout << "======================================================================================================================" << endl;
            cout << "Transaksi berhasil dilakukan. Berikut list detail nya yaa : " << endl;
            cout << "Info Rumah\t : " << kosApa << endl;
            cout << "Lama Sewa\t : " << berapaBulan << " bulan " << endl;
            cout << "Info Tanggal Masuk\t : Tanggal 1 setelah pembayaran." << endl;
            cout << "============================================================" << endl;
            cout << "Total Biaya\t : Rp " << totalPembayaran << endl;
            int pos = -1 * sizeof(SilkomXiXi);
            file.seekp(pos,ios::cur);
            int i;
            for(i = 99; i > 0; --i) {
                strcpy(ltran[i], ltran[i-1]);
            }

            char str1[200], str[200];
            strftime(str1, 100, "[%d/%m/%Y : %X]", timeinfo);
            sprintf(str, "[Sewa Rumah] %s - %s bulan - Rp %d << %s", kosApa.c_str(), berapaBulan.c_str(), totalPembayaran, str1);
            strcpy(ltran[0], str);
            file.write((char*)this, sizeof(SilkomXiXi));

            cout<<"\n"<<str;
            getch();
            menuRentHouse(Account);
}

void SilkomXiXi::userMenu(long Account) {
    StartMenu:
        int pilihanUser;
        system("cls");
        mainHeader(1);
        cout << "                             Selamat Datang " << pNamaLengkap << " di Aplikasi SILKOM - XiXi" << endl;
        cout << "       Aplikasi ini digunakan untuk melakukan penyewaan rumah di area Universitas Singaperbangsa Karawang" << endl;
        cout << "======================================================================================================================" << endl;
        cout << "[1] Detail Akun\n[2] Sewa Rumah\n[7] Lihat Semua Transaksi Kamu\n[8] Log Out" << endl;
        cout << "========================================================================" << endl;
        cout << "[Pilihan] "; cin >> pilihanUser;

        if(pilihanUser == 1) {
            userDetails(Account);
            goto StartMenu;
        } if(pilihanUser == 2) {
            menuRentHouse(Account);
            goto StartMenu;
        } if(pilihanUser == 7) {
            cout<<"\n\n======================== Daftar 10 Transaksi Terakhir =========================";
            ifstream file;
            file.open("SilkomXiXi.dat",ios::binary);
            file.seekg(0);
            while(file.read((char*)this,sizeof(SilkomXiXi))) {
                if(Account == pAccountIndex) break;
            }
            for( int i= 0;i<10;++i)
                cout<<"\n"<<ltran[i];
            getch();
            goto StartMenu;
        }
}

void SilkomXiXi::userDetails(long Account) {
    ifstream file;

    system("cls");
    mainHeader(1);
    file.open("SilkomXiXi.dat", ios::binary);
    file.seekg(0);

    while(file.read((char*)this, sizeof(SilkomXiXi))) {
        if(Account == pAccountIndex) break;
    }

    cout << "\tAkun Detail" << endl;
    cout << "============================" << endl;
    cout << "\tAkun ID : "<< pAccountIndex <<"\n\tNama Lengkap : " << pNamaLengkap <<"\n\tUsername : " << pUsername << endl;
    cout << "============================" << endl;
    cout << "Tekan sembarang tombol untuk kembali ke Menu User." << endl;
    cout << "===================================" << endl;
    getch();
}

int main() {
    START:
    SilkomXiXi ourClass;
    int pilihanUser;
    system("cls");
    ourClass.mainHeader(2);
    cout << "[1] Registrasi Akun SILKOM - XiXi\n[2] Login ke dalam Akun SILKOM - XiXi\n[3] Keluar dari SILKOM - XiXi" << endl;
    cout << "========================================================================" << endl;
    cout << "[Pilihan] "; cin >> pilihanUser;
    if(pilihanUser == 1) {
        ourClass.mainRegister();
        pilihanUser = 2;
    } if (pilihanUser == 2) {
        ourClass.mainLogin();
        goto START;
    } if (pilihanUser == 3) {
        cout << "============================" << endl;
        cout << "Terima kasih telah menggunakan Aplikasi SILKOM - XiXi." << endl;
        cout << "Tekan sembarang tombol untuk keluar." << endl;
        cout << "============================" << endl;
        exit(0);
    }
    getch();
}
