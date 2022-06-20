#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int f[n+2];
	int i;
	f[0] = 1;
	f[1] = 1;
	for(int i=2;i<=n;i++)
	{
		f[i] = f[i-1]+f[i-2];
	}
	return f[n];
}


int main()
{
	int n;
	cin >> n;
	int ans = fib(n);
	cout<<ans;
}