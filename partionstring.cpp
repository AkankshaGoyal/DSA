#include <bits/stdc++.h>
using namespace std;



void partition(string s)
{
	vector<int>end_ind(26,0);
	for(int i=0;i<s.length();i++)
	{
           end_ind[s[i]-'a'] = i;
	}
	vector<int>res;
	int start = 0,end = 0;
	for(int i=0;i<s.length();i++)
	{
		end = max(end,end_ind[s[i]-'a']);
		if(i==end)
		{
			res.push_back(i+1-start);
		    start = i+1;
		}
	}
    
    for(int i=0;i<res.size();i++)
    {
    	  cout<<res[i]<<endl;
    }

}






int main()
{
	string s;
	cin >> s;
	partition(s);
	return 0;
}