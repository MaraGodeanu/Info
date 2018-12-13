#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned int a;
    cout<<"a= ";
    cin>>a;
    cout<<"Perimetru triunghi echilateral este "<<3*a<<endl;
    cout<<"Aria triunghi echilateral este "<<a*a*sqrt(3)/4<<endl;
    cout<<"Inaltime trunghi echilateral este "<<a*sqrt(3)/2<<endl;
    return 0;
}
