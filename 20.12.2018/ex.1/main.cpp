#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    float a,b,c;
    int opt;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    cout<<"Optiunile valabile sunt 1,2,3,4,5"<<endl;
    cout<<"opt= ";
    cin>>opt;
    switch(opt)
    {
        case 1:
            cout<<"e1= "<<(max(a-3,b+2)+sqrt(a-1)+c)/(min(a+1,c+2)-a+b)<<endl;
            break;
        case 2:
            cout<<"e1= "<<(max(3-a,2+b)-a+2*c)/(min(3-a,2+b)-3*c)<<endl;
            break;
        case 3:
            cout<<"e1= "<<sqrt(2*a+2*b)-3*a*c<<endl;
            break;
        case 4:
            cout<<"e1= "<<(pow(a,3)+pow(b,2))/(4*c)<<endl;
            break;
        case 5:
            cout<<"e1= "<<abs(a-3)+2*a-3*(b*b)<<endl;
        default:cout<<"optiunea aleasa nu exista"<<endl;
    }
}
