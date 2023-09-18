#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{   
    int num[4],i,num2[4],total=0,max=0,min=0;
    string name[4];
    
    for(int i=0;i<4;i++)
    {
        cout<<"Name ["<< i <<"] : ";
        cin>>name[i];
        cout<<"Score ["<< i <<"]:";
        cin>>num[i];

    }
    cout<<setfill('-')<<setw(30)<<" "<<endl;
    cout<<"Name \t\t Score"<<endl;
    cout<<setfill('-')<<setw(30)<<" "<<endl;

    for(i=0;i<4;i++)
    {   cout<<name[i]<<"\t \t"<<num[i]<<endl;
        total = total+num[i];
        if(num[i] > max)
            max = num[i];
        if(num[i] <= min)
            min = num[i];
    }
    cout<<setfill('-')<<setw(30)<<" "<<endl;
    cout<<"MAX Score = "<<max<<endl;
    cout<<"MIN Score = "<<min<<endl;
    cout<<"Total     = "<<total<<endl;
    cout<<"Average   = "<<(float)total/4<<endl;


}
