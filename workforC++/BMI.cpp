	#include <iostream>
	#include <string>
	using namespace std;
	int main()
	{
	float w, h, b;
	int age;
	string gender;

	cout <<"Enter Age    : ";
	cin >>age;
	cout <<"Enter Gender : ";
	cin >> gender;
	cout <<"Enter Height : ";
	cin >> h;
	cout <<"Enter Weight : ";
	cin >> w;

	b = w / pow((h / 100) , 2);
	cout<<"BMI = "<< b <<endl;

	if (b < '18.5') 
		 cout <<"Underweight\n";
			else if  (b >= '18.5') 
			 cout <<"Normal\n";
				else if  (b >= '25') 
				 cout  <<"Overweight\n";
					else  
					 cout <<"Obesity\n";

	return(0);

	}
