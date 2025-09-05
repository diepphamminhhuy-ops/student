#include "header.h"

void inhs(student &hs){
    cout << "Nhap ten: " ;
    getline(cin, hs.name);

    cout << "nhap nam sinh: ";
    
    cin >> hs.namsinh;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    hs.age = 2025 - hs.namsinh;

}

void prinths(const student &hs){

    cout << "Ten: " << hs.name << endl;
    cout << "Nam sinh: " << hs.namsinh << endl;
    cout << "Tuoi: " << hs.age << endl;

}