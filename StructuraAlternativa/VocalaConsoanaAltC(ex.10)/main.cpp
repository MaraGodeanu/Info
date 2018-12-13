#include <iostream>

using namespace std;

int main()
{

    char x;
    cout<<"caracterul este... ";
    cin>>x;
    if(isalpha(x)==0)
        cout<<"Caracterul nu este litera"<<endl;
    else
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
            cout<<"Caracterul este vocala"<<endl;
        else
            cout<<"Caracterul este consoana"<<endl;





}
