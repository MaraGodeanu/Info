#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    if(a%7==0)
        cout<<"a se imparte exact la 7"<<endl;
    if(b%7==0)
        cout<<"b se imparte exact la 7"<<endl;
    if(a%7!=0&&b%7!=0)
        cout<<"Niciunul dintre numere nu se imparte exact la 7"<<endl;

}
