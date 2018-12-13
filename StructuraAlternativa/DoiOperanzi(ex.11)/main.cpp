#include <iostream>

using namespace std;

int main()
{
    char x;
    float op1,op2;
    cout<<"Operatorii sunt{+,-,*,/}";
    cout<<"Alege un operator...";
    cin>>x;
    cout<<"op1= ";
    cin>>op1;
    cout<<"op2= ";
    cin>>op2;
    if(x=='+')
        cout<<"Rezultatul este "<<op1+op2<<endl;
    else
        if(x=='-')
            cout<<"Rezultatul este "<<op1-op2<<endl;
        else
            if(x=='*')
                cout<<"Rezultatul este "<<op1*op2<<endl;
            else
                if(x=='/')
                    cout<<"Rezultatul este "<<op1/op2<<endl;
                else
                    cout<<"Nu ma intereseaza acest operator"<<endl;
}
