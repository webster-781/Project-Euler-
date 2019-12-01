#include<bits/stdc++.h>
using namespace std;
#define repl(i,x,n) for(long long i=(long long)(x);i<(long long)(n);i++)
#define rep(i,x,n) for(long i=long(x);i<long(n);i++)
#define cin  fin
#define cout fout
ifstream fin("input.in");ofstream fout("output.out");
int pal(int n){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s="", sr="";
    while(n!=0)
    {
    	char ch = (char) (48+(n%10));
    	s = s+ch;
    	n/=10;
    }
    sr = s;
    reverse(s.begin(),s.end());
    if(s==sr)
    	return 1;
    	return 0;
}
int three(long n)
{
	if(((int)(n/1000)==0)&&((int)(n/100)!=0))
		return 1;
		return 0;
}
int main()
{
	int flag = 0;
	long i =0 ;
	for(i = 999999;i>10000;i--)
	{
		if(pal(i))
		{
			rep(j,2,ceil(sqrt(i)))
			{
				if(i%j==0)
				{
					if(three(j)&&three((i/j)))
					{
						flag = 1;
						cout<<j<<" "<<i/j<<"\n";
						break;
					}
				}
			}
		}
		if(flag==1)
			break;
	}
	cout<<i;
}