#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define endl '\n'
#define lcm(a,b) (a/__gcd(a,b))*b
#define FIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{
    FIO;
    int a,b,c;
    char s1,s2;
    cin>>a>>s1>>b>>s2>>c;
    if(s1=='+')
    {
        if(a+b==c)
            Yes;
        else
             cout<<a+b<<endl;
    }
    else   if(s1=='-')
    {
        if(a-b==c)
            Yes;
        else
            cout<<a-b<<endl;
    }
    else   if(s1=='*')
    {
        if(a*b==c)
            Yes;
        else
            cout<<a*b<<endl;
    }
    return 0;
}
//Alhamdulillah
 
