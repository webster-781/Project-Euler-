#include<iostream>
#include<cmath>
#include<string>

int main()
{
		int a;int b;int p;int q;
		std::cin>>a>>b>>p>>q;
		//float n = ((b-a)*p)/(2*q);
		int max=a,x=a;
		float emax = abs(sin(((p/q)*3.1415926535)*a));
		for(x=a;x<=b;x++)
		{
			float exp = abs(sin(((p/q)*3.1415926535)*x));
			if(exp>emax)
			emax = exp;

			else
				break;
		}
		std::cout<<x;
		return 0;
}