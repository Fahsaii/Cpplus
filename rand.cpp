#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
    int random[10];
    cout <<"Element Value Histogram\n";
    srand(time(NULL));
    for (int i  = 0; i < 10; i++){
        random[i]= 1+ rand()%30;
        cout << i << setfill(' ')<< setw(5)<< random[i]<<"  " << setfill('*')<< setw(random[i])<<" "<<endl;
    }
    cout <<endl;
    system ("pause");
    return 0;
}