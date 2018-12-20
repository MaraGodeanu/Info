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
    cout<<"optiunile valabile sunt x,y,z,v,w"<<endl;
    cout<<"opt= ";
    cin>>opt;
    switch(opt)
    {
        case 'x':
            cout<<"e3= "<<(min(a-2,b+3)+sqrt(b-1)+c)/(abs(a+3)-2*a+b)<<endl;
            break;
        case 'y':
    }

}
