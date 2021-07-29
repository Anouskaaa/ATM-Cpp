#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    LABEL_1:
    double deposit, tarik, transfer;
    float saldo = 100.000;
    int pilihan;

    string pin;
    cout << "\nMasuk Kan PIN : ";
    cin >> pin;

    if(pin == "123") {
    cout << "\nSelamat Datang" << endl;
    goto LABEL_2;
    }else
    cout << "\nPin Yang Anda Masukan Salah" << endl;
    goto LABEL_1;
    do{
        LABEL_2:
        cout << "\n\t---Menu---\n" << endl;
        cout << "\t1.Cek Saldo\n";
        cout << "\t2.Deposit\n";
        cout << "\t3.Tarik Saldo\n";
        cout << "\t4.Transfer\n";
        cout << "\n\t5.Keluar";
        cout << "\n\t------------" << endl;
        cout << "\nPilih Menu : ";
        cin >> pilihan;
        switch(pilihan)
        {
            case 1:
            system("cls");
            cout << "Saldo anda adalah : Rp." << saldo << "\n" << endl;
            break;
            case 2:
            system("cls");
            cout << "\nJumlah Deposit : ";
            cin >> deposit;
            saldo = saldo + deposit;
            cout << "\nSaldo anda adalah : Rp." << saldo << endl;
            break;
            case 3:
            system("cls");
            cout << "\nJumlah Saldo Yang Ingin Di Tarik : Rp.";
            cin >> tarik;

            if(saldo<tarik)
            cout << "\nSaldo Anda Tidak Cukup" << endl;

            else

            saldo = saldo - tarik;
            cout << "\nSaldo Anda Tersisa : Rp." << saldo << endl;

            break;
            case 4:
            system("cls");
            cout << "\nJumlah Saldo Yang Ingin Di Transfer : Rp.";
            cin >> transfer;

            if(saldo<transfer)
            cout << "\nSaldo Anda Tidak Cukup Untuk Melakukan Transfer";

            else

            saldo = saldo - transfer;
            cout << "\nSaldo Berhasil Di Transfer";
            cout << "\nSaldo Anda Tersisa : Rp." << saldo;
            break;
        }
    }while(pilihan !=5);
    system("pause");

    return 0;
    getch();


}