#include<iostream>
#include<unordered_map>
using namespace std;
long long GCD(long long a,long long b);
int main(void)
{
    int n,m;
    cin>>n>>m;
    long long arr1[n];
    long long arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    long long G=arr1[1]-arr1[0];
    if(n<2)
        G=0;
    for(int i=1;i<n;i++){
        G=GCD(G,arr1[i]-arr1[0]);
    }
    for(int i=0;i<m;i++){
        long long ans=arr1[0]+arr2[i];
        ans=GCD(ans,G);
        cout<<abs(ans)<<" ";
    }
}
long long GCD(long long a, long long b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}
