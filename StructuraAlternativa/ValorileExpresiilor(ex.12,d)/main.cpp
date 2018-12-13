#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float x,y,z;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"z= ";
    cin>>z;
    cout<<"E4= "<<(abs(y-3)+sqrt(x-1)+z)/(abs(x-3)-x+y)<<endl;
}
