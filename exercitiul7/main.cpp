#include <iostream>

using namespace std;

int main()
{
    unsigned int x;
    cout<<"x=";
    cin>>x;
    cout<<"cifra 1:"<<x/1000<<endl;
    cout<<"cifra 2:"<<x%1000/100<<endl;
    cout<<"cifra 3:"<<x%1000%100/10<<endl;
    cout<<"cifra 4:"<<x%1000%100%10<<endl;
    return 0;
}
