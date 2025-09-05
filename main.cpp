#include "header.h"

#include "inpuths.cpp"

int main(){
    
    student hs;
    int n;

    cout << "Nhap so luong hoc sinh: " ;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<student> row;
    
    int answer;
    
    
    //NHAP DANH SACH HOC SINH
    for(int i = 0; i < n; i++){
        cout << "Nhap hoc sinh thu " << i + 1 << endl;
        inhs(hs);
        row.push_back(hs);
        
    }
    //IN DANH SACH HOC SINH
    cout << "-------danh sach hoc sinh-------" << endl;
    for (int i = 0; i < row.size(); i++){
        
        cout << "Hoc sinh thu " << i + 1 << endl;
        prinths(row[i]);
    }
 
    //XOA HOC SINH
        
        while(true){

            cout << "ban co muon xoa hoc sinh khong? (1: co, 0: khong): ";
            cin >> answer;

            if (answer == 0){
                break;
            }

            
            kickstudent(row);
    
            
        }

        //IN DANH SACH HOC SINH SAU KHI XOA
        cout << "-------danh sach hoc sinh sau khi chinh sua-------" << endl;
        for (int i = 0; i < row.size(); i++){
            cout << "Hoc sinh thu " << i + 1 << endl;
            prinths(row[i]);
        }

    
 
    return 0;
}