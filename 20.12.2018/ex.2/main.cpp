#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    float x,y,z;
    int opt;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"z= ";
    cin>>z;
    cout<<"optiunile valabile sunt 1,2,3,4,5"<<endl;
    cout<<"opt= ";
    cin>>opt;
    switch(opt)
    {
        case 1:
            cout<<"e2= "<<(abs(y-3)+sqrt(x-1)+z)/(abs(x-3)-x+y)<<endl;
            break;
        case 2:
            cout<<"e2= "<<(abs(3-x)+3*x+2*z)/(abs(3-x)-4*y)<<endl;
            break;
        case 3:
            cout<<"e2= "<<sqrt(3*x+2*y)-2*x*y<<endl;
            break;
        case 4:
            cout<<"e2= "<<(x*x-pow(y,3))/(4*x*y)<<endl;
            break;
        case 5:
            cout<<"e2= "<<(max(2-y,3+z)+x*y)/(min(2-y,3+z)-x*z)<<endl;
            break;
        default:cout<<"optiunea alesa nu este valida"<<endl;
    }


}
