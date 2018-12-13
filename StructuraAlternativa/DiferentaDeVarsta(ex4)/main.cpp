#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b;
    cout<<"varsta1= ";
    cin>>a;
    cout<<"varsta2= ";
    cin>>b;
    if(a>b)
    {
        cout<<"varsta1 este mai mare"<<endl;
        cout<<"diferenta de varsta este "<<a-b<<" ani"<<endl;
    }
    else
        if (a<b)
        {
           cout<<"varsta2 este mai mare"<<endl;
           cout<<"diferenta de varsta este "<<b-a<<" ani"<<endl;
        }

        else
            cout<<"cele doua varste sunt egale"<<endl;

}
