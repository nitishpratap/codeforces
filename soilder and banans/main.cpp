#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    long cost,amount,num,x=0;
    cin>>cost>>amount>>num;
    for(long i=1;i<=num;i++)
    {
        x=x+cost*i;
    }
    if(x>amount)
    {
    cout<<x-amount<<endl;}
    else
        if(x<=amount)
        cout<<"0"<<endl;
    return 0;
}
