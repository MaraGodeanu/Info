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
    cout<<"Suma este:"<<(100*a+10*b+c)+(10*a+b)+a<<endl;
    return 0;
}
