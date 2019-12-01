#include<bits/stdc++.h>
using namespace std;
#define repl(i,x,n) for(long long i=(long long)(x);i<(long long)(n);i++)
#define rep(i,x,n) for(long i=long(x);i<long(n);i++)
#define cin  fin
#define cout fout
ifstream fin("input.in");ofstream fout("output.out");
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long count,i=1,sum=0;
    while(count>500)
    {
    	count =0;
    	sum+=i;
    	for(int j=2;j<ceil(sqrt(i));j++)
    	{
    		if(j*j=i)count++;
    		else if(i%j==0)count+=2;
    	}
    	i++;
    }
    cout<<sum;
    return 1;
}