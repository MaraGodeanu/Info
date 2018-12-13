#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    cout<<"E3= "<<(min(3-2*a,2+b)-a+2*c)/(max(3-2*a,2+b)-3*c)<<endl;
}
