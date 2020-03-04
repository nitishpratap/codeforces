#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast=(k*l)/nl;
    int eachtoats=toast/n;
    int tot=c*d;
    int salt=p/np;
    if(!salt ||!tot || !eachtoats)
    {

        cout<<"0\n";
    }
    else
    {
       cout<<min(n*eachtoats,min(tot,salt))/n;
    }

    return 0;
}
