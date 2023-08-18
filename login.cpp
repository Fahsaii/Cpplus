// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    char menu;
    string name1,name2;
    int pw1,pw2;
do{
    cout <<"//////Menu//////\n";
    cout << "1.Register \n";
    cout << "2.Login \n";
    cout << "Q.Exit Program \n";
    cout << "_________________\n";
    cout <<"Enter Menu:";
    cin >>menu;
    
    if(menu == '1')
    {   cout << "*****Register*****\n";
        cout <<"Input Username :";
        cin >> name1;
        cout <<"input Password :";
        cin >> pw1;
    }else if (menu == '2')
    {   cout <<"*****Login*****\n";
        cout <<"Input Username :";
        cin >> name2;
        cout <<"Input Password :";
        cin >> pw2;
        if (name1 != name2,pw1 != pw2)
        {   cout <<"Username or Password incorrect Please try again!!\n";
        }else if (name1 = name2,pw1 = pw2)
        {   cout <<"Username or Password correct^__^\n";
        }
    }else if(menu =='Q')
    {   cout <<"*****Exit*****\n";
    }else{
        cout<<"You input wrong menu!\n";
    }
        
    
}while(menu != 'Q'); 
    
   
    return 0;
}