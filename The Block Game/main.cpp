#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        int num,count=0,temp1=0,temp2=0;
        cin>>num;
        int rem;
        temp1=num;
        while(num>0)
        {
            rem=num%10;
            //cout<<rem<<endl;
            temp2=temp2* 10 + rem;

            num=num/10;
            count++;
        }
        //cout<<temp2;
        if(temp1==temp2)
        {
            cout<<"wins"<<endl;
        }
        else if(temp1!=temp2)
            cout<<"losses"<<endl;
    }

    return 0;
}
