#include <iostream>
#include <math.h>
#include <stdlib.h>
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
    cout<<"E5= "<<(min(a-2,b+3)+sqrt(b-1)+c)/(abs(a+3)-2*a+b)<<endl;
}
