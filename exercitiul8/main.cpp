#include <iostream>

using namespace std;

int main()
{
    unsigned int n,a,b,c,d;
    cout<<"n= ";
    cin>>n;
    a=n/1000;
    b=n%1000/100;
    c=n%1000%100/10;
    d=n%1000%100%10;
    cout<<"Catul impartirii:"<<(10*a+b)/(10*c+d)<<endl;
    cout<<"Restul impartirii:"<<(10*a+b)%(10*c+d)<<endl;


    return 0;
}
