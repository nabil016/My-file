#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double base,hight,area;

    cout<<"enter base : ";
    cin>> base;
    
    cout<<"enter hight : ";
    cin>> hight;

    area = (double) 1/2 * base*hight;

    cout<<"area of tringale = "<<area;


    getch();
}