#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"E1= "<<x+2*y-max(x+2,y-1)<<endl;
}
