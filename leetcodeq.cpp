#include <bits/stdc++.h>
using namespace std;



 int passvector(vector<vector<int>>&triangle)
 {

     vector<int>calsum;
     for(int i=0;i<triangle.size();i++)
     {
             vector<int>ans;
             for(int j=0;j<triangle[0].size();j++)
             {
                 ans.push_back(triangle[i][j]);
                  
             }
             int k1 = ans[0];
             int k2 = ans[1];
             if(k1 >k2)
             {
                 calsum.push_back(k2);
             }
             else
             {
                 calsum.push_back(k1);
             }
             ans.clear();
             
      }
      int sum = 0;
      for(int i=0;i<calsum.size();i++)
       {
       	           cout<<calsum[i]<<endl;
                  sum = sum+ calsum[i];
       }
    cout<<sum;
}















int main()
{
	vector<vector<int>>vec {{2},
		                    {3,4},
		                    {6,5,7},
		                    {4,1,8,3}};
   passvector(vec);
   return 0;
}