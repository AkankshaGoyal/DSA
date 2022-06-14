#include <bits/stdc++.h>
using namespace std;


int passnumber(int n)
{
        int count = 0;
        for(int i=1;i<n;i++)
        {
            vector<int>num;
            while(i!=0)
            {
                int k = i%2;
                if(k==1)
                {
                    count++;
                }
                
                num.push_back(k);
                i=i/2;
            }
           
         }
        return count;
}




int main()
{
	int n;
	int ans = passnumber(n);
	cout<<ans;
}