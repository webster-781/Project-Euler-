#include<bits/stdc++.h>
using namespace std;
#define repl(i,x,n) for(long long i=(long long)(x);i<(long long)(n);i++)
#define rep(i,x,n) for(long i=long(x);i<long(n);i++)
#define cin  fin
#define cout fout
ifstream fin("input.in");ofstream fout("output.out");
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k;
    long long prime=0;
    cin>>n;
    k=ceil(sqrt(n));
    for(int i=2;i<=k;i++)
    {
         while(n%i==0)
        {
            n=n/i;
           //prime=max(prime,max(i,n/i));
            if(n==1)
            prime=i;
            else 
            prime =n;
        }
    }
    cout<<prime;
    return 0;
}
