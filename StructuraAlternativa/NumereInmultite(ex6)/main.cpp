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
    {
        cout<<"NumarulMare*2= "<<a*2<<endl;
        cout<<"NumarulMic*3= "<<b*3<<endl;
    }
    else
        if(b>a)
        {
            cout<<"NumarulMare*2= "<<b*2<<endl;
            cout<<"NumarulMic*3= "<<a*3<<endl;
        }
        else
            cout<<"Numerele sunt egale"<<endl;
}
