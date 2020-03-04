#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n,m;
    cin>>n>>m;
    while(n--)
    {
        for(int j=1;j<=m;j++)
        {
            if(n%2==0)
            {
                cout<<"#";
            }

        }
        cout<<"\n";
    }
    return 0;
}
