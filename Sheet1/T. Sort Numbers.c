#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5];
    cin>>ar[0]>>ar[1]>>ar[2];
    int a=ar[0];
    int b=ar[1];
    int c=ar[2];
    sort(ar,ar+3);
    for(int i=0; i<3; i++)
    {
        cout<<ar[i]<<endl;
    }
       cout<<endl<<a<<endl<<b<<endl<<c<<endl;


    return 0;
}
