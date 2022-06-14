#include <bits/stdc++.h>
using namespace std;




int minDistance(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        int count;
        if(n1 >n2)
        {
            int ans = n1-n2;
            return ans;
        }
        else if(n2 <n1)
        {
            int ans = n2 - n1;
            return ans;
        }
        else
        {
            set<char>S1;
            for(int i=0;i<n1;i++)
            {
                S1.insert(word1[i]);
            }
            int k = S1.size();
            //cout<<k;
            for(int i=0;i<n2;i++)
            {
                S1.insert(word2[i]);
            }
            int k1 = S1.size();
            
            if(k > k1)
            {
                 count = k-k1;
            }
            else
            {
                count = k1-k;
            }
        }
        return count;
       

}


int main()
{
      string word1 = "sea";
      string word2 = "eat";
      int ans = minDistance(word1,word2);
      cout<<ans;
      return 0;
}