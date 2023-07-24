#include <iostream>
#include <string>
using namespace std;
int main()
{ 
int c;
cout << "Input C++ Score : " ;
cin >> c;
cout << "You "<< ((c>= 50) ? "pass ": "fail ") <<"with score 56;\n";

system("pause");
return(0);
}
