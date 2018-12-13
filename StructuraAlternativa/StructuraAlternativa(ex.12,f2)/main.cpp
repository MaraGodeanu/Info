#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    float a,b,c;
    char opt;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    cout<<"Optiunile valabile sunt x,y,z,w"<<endl;
    cout<<"opt= ";
    cin>>opt;
    switch(opt)
    {
        case 'x':
            cout<<"E7= "<<(min(a-2,b+3)+sqrt(b-1)+a)/(abs(a+3)-2*a+b)<<endl;//am inlocuit z-ul din partea superioara a fractiei cu a
            break;
        case 'y':
            cout<<"E7= "<<(min(3-2*a,2+b)-a+2*c)/(max(3-2*a,2+b)-3*c)<<endl;
            break;
        case 'z':
            cout<<"E7= "<<sqrt(2*a+2*b)-sqrt(2*a*c)<<endl;
            break;
        case 'w':
            cout<<"E7= "<<sqrt(a+2)/(4*c)<<endl;
            break;
        default:cout<<"Nu exista aceasta optiune"<<endl;

    }
}
