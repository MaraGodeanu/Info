#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    if(a>b)
        cout<<"Numarul mai mare este "<<a<<endl;
    else
        if(a<b)
            cout<<"Numarul mai mare este "<<b<<endl;
        else
            cout<<"Numerele sunt egale"<<endl;
}
