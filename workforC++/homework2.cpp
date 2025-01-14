#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
float salaly;
float sale;
float percent;
float coms;

cout << "Enter Name   : ";
cin >> name;
cout << "Enter Salaly : ";
cin >> salaly;
cout << "Enter Sale   : ";
cin >> sale;
cout << "Enter Commission Percent : ";
cin >> percent;

coms = (sale*(percent/100));

cout<<"--------output--------\n";
cout << "You name = " <<  name ;
cout << "\nTotal Revenue " <<  salaly + coms << " Bath " ;
cout<<"\n----------------------" << endl;
return(0);

}