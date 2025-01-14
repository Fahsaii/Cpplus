#include <iostream>
#include <string>
using namespace std;
int main()
{
float w;
float h;
cout << "Enter weight : ";
cin >> w;
cout << "Enter height : ";
cin >> h;

cout<<"********output********\n";
h = (h / 100 );
cout<<"BMI = "<< w / pow(h , 2) <<endl;
system("pause");

return (0);
}