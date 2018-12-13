#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    float x,y;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"E2= "<<abs(x-2)+pow(y,3)-x/y<<endl;
}
