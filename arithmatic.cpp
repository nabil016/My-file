#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main()
{

    float num1,num2;
    cout <<setw (20)<< "enter 2 number : ";
    cin>>num1>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(7);

    float sum = num1+num2;
    cout <<setw (20)<<"sum is : "<<sum;
    cout <<endl;

    float sub = num1-num2;
    cout <<setw (20)<<"subtraction is : "<<sub;
    cout <<endl;

    float mul = num1*num2;
    cout <<setw (20)<<"multiplaction is : "<<mul;
    cout <<endl;

    double div = (float) num1/num2;
    cout <<setw (20)<<"division is : "<<div;
    cout <<endl;

    getch();
}