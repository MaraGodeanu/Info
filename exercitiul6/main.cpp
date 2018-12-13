#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    cout<<"numerele sunt "<<100*a+10*b+c<<" "<<100*b+10*c+a<<" "<<100*c+10*a+b<<" "<<10*a+b<<" "<<10*a+c<<endl;

    return 0;
}
