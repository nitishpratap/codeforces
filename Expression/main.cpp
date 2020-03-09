#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int a,b,c;
    cin>>a>>b>>c;
    int one,two,three,four,five;
    one=a+b*c;
    two=a*(b+c);
    three=a*b*c;
    four=(a+b)*c;
    five=a+b+c;
    int arr[5];
    arr[0]=one;
    arr[1]=two;
    arr[2]=three;
    arr[3]=four;
    arr[4]=five;
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<arr[4];
    return 0;
}
