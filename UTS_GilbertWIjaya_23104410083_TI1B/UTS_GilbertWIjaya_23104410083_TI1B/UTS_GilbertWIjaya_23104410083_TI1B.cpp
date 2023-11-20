#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string nama;
    int gaji, lemburan, jamKerja, golongan,totalGj;

    cout << "masukan nama anda: ";
    getline(cin, nama);
    cout << "masukan golongan anda: ";
    cin >> golongan;
    cout << "masukan jam kerja anda per minggu: ";
    cin >> jamKerja;


    switch (golongan)
    {
    case 1:
        gaji = 25000;
        break;
    case 2:
        gaji = 35000;
        break;
    case 3:
        gaji = 50000;
        break;
    default:
        cout << "golongan tidak valid" << endl;
        break;
    }
    
    lemburan = (jamKerja - 48) * 10000;
    if (jamKerja < 48)
    {
        totalGj = gaji * jamKerja;
        cout << "total gaji " << nama << " adalah: " << totalGj << endl;
    }
    else if (jamKerja > 48) {

        totalGj = (gaji * jamKerja) + lemburan;
        cout << "total gaji " << nama << " adalah: " << totalGj << endl;

    }
    else {
        cout << "konteks tidak valid" << endl;
    }


    
    return 0;
}