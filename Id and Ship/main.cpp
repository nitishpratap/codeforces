#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {

    char x;

    cin>>x;
    if(x=='B'||x=='b')
    {
        cout<<"BattleShip"<<endl;
    }
    else if(x=='c'||x=='C')
    {
        cout<<"Cruiser"<<endl;
    }
    else if(x=='d'||x=='D')
    {
        cout<<"Destroyer"<<endl;
    }
    }
    return 0;
}
