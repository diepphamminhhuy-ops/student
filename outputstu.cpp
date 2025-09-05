#include "header.h"
#include "inpuths.cpp"

void kickstudent(vector<student> &kick){
    string name;
    cout << "sinh vien bi xoa: " << endl;
    cin.ignore();
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < kick.size(); i++){
        if (kick[i].name == name){
            kick.erase(kick.begin() + i);
            cout << "da xoa sinh vien " << name << endl;
            found = true;
            break;

        }
    }


    if (!found) {
        cout << "Khong tim thay sinh vien de xoa." << endl;
    }
    
}