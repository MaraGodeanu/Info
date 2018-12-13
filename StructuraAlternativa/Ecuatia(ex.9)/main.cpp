#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,delta;
    cout<<"ax2+bx+c"<<endl;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    delta=b*b-4*a*c;
    if(delta<0)
        cout<<"x nu are solutii reale"<<endl;
    else
        if(delta==0)
            cout<<"x= "<<-b/(2*a)<<endl;
        else
            cout<<"x1= "<<(-b-sqrt(delta))/(2*a)<<"x2= "<<(-b+sqrt(delta))/(2*a)<<endl;
}
