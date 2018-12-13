#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    if(a>b&&b>c)
    {
        cout<<"Numarul cel mai mare este a"<<endl;
        cout<<"Numarul cel mai mic este c"<<endl;
    }
    if(a>c&&c>b)
    {
        cout<<"Numarul cel mai mare este a"<<endl;
        cout<<"Numarul cel mai mic este b"<<endl;
    }
    if(b>c&&c>a)
    {
        cout<<"Numarul cel mai mare este b"<<endl;
        cout<<"Numarul cel mai mic este a"<<endl;
    }
    if(b>a&&a>c)
    {
        cout<<"Numarul cel mai mare este b"<<endl;
        cout<<"Numarul cel mai mic este c"<<endl;
    }
    if(c>a&&a>b)
    {
        cout<<"Numarul cel mai mare este c"<<endl;
        cout<<"Numarul cel mai mic este b"<<endl;
    }
    if(c>b&&b>a)
    {
        cout<<"Numarul cel mai mare este c"<<endl;
        cout<<"Numarul cel mai mic este a"<<endl;
    }


}
