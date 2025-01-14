#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void Input(int &num,int quiz[10], int mid[10],int final[10]);
void VeiwAll(int num,int quiz[10], int mid[10], int final[10]);
void VeiwID(int num,int quiz[10], int mid[10], int final[10]);
int main()
{   

    char menu;
    int num=0;
    int quiz[10],mid[10],final[10];
    do{
  
    cout<<setfill('=')<<setw(30)<<" "<<endl;
    cout<<"       MENU\n";
    cout<<setfill('=')<<setw(30)<<" "<<endl;
    cout<<"1.Input student records\n";
    cout<<"2.Veiw all student records\n";
    cout<<"3.Show a stdent by ID\n";
    cout<<"4.Exit\n";
    cout<<"Select menu :";
    cin>>menu;
    if(menu == '1')
    {   Input( num,quiz,mid,final);
    }
    else if(menu == '2')
    {   VeiwAll(num,quiz,mid,final);
    }
    else if(menu == '3')
    {   VeiwID(num,quiz,mid,final);
    }

    }while(menu != '4' );

    return 0; 

} 
void Input(int &num,int quiz[10], int mid[10],int final[10])
{   cout<<"Input Number of Student:";
    cin>>num;
    for (int i=0;i<num;i++)
    {   cout<<"Number "<<i+1;
        cout<<"\nInput Quiz:";
        cin>>quiz[i];
        cout<<"Input Midterm:";
        cin>>mid[i];
        cout<<"Input Final:";
        cin>>final[i];
    }

}
void VeiwAll(int num,int quiz[10], int mid[10], int final[10])
{   cout<<"---------------------------------\n";
    cout<<" StdID    Quiz    Midterm  Final\n";
    cout<<"---------------------------------\n";  
    for (int i=0;i<num;i++)
    {   cout<<i+1<<setfill(' ')<<setw(9)<<quiz[i]<<setw(9)<<mid[i]<<setw(9)<<final[i];
    }
    cout<<"\n---------------------------------";
    cout<<endl;
}
void VeiwID(int num,int quiz[10], int mid[10], int final[10])
{   int id;
    cout<<"Input ID";
    cin>>id;
    for (int i=0;i<num;i++)
    {   if(id = i+1)
        {
            cout<<"---------------------------------";
            cout<<" StdID    Quiz    Midterm  Final";
            cout<<"---------------------------------";  
            cout<<i+1<<setw(9)<<quiz[i]<<setw(9)<<mid[i]<<setw(9)<<final[i];
            cout<<"---------------------------------";
        }else 
        {
            cout<<"Your ID is not found"<<endl;
            
        }
        break;

    }


}
