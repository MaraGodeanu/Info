#include <iostream>
#include <math.h>
#include <stdlib.h>


using namespace std;

int main()
{
    int opt;
    float x,y,z;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"z= ";
    cin>>z;
    cout<<"optiunile valabile sunt: 1,2,3,4 "<<endl;
    cout<<"optiune= ";
    cin>>opt;
    switch(opt)
    {
        case 1:
            cout<<"E6= "<<(abs(y-1)+sqrt(x+1)+z)/(abs(x-3)-x+y)<<endl;
            break;
        case 2:
            cout<<"E6= "<<(abs(2-x)+3*x+2*z)/(abs(3-x)-4*y)<<endl;
            break;
        case 3:
            cout<<"E6= "<<sqrt(3*x+2*y)-2*x*y<<endl;
            break;
        case 4:
            cout<<"E6= "<<(pow(x,2)-pow(y,3))/(2*x*y)<<endl;
            break;
        default:cout<<"optiunea nu exista"<<endl;

    }
}
