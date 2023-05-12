#include<iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int r, p, s=0;
    while(n!=0)
    {
        r=n%10;
        p = r;
        s = s + r;
        n = n/10;
        p = p * r;
    }
    int result;
    result = p - s;

    return result;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int n;
        cin>>n;
        subtractProductAndSum(n);
    }
    
}