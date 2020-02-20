#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        int num,rem;
        cin>>num;
        while(num>0)
        {
        rem=num%10;
        cout<<rem;
        num=num/10;}
        cout<<endl;

    }
    return 0;
}
