#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,total;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        total += a;
    }
    cout<<total/n;
    return 0;
}