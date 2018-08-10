#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        if(strs.empty())
        {
            return result;
        }
         for(int i=0;i<strs[0].size();++i)
         {
            int flag=true;
            for(int j=1;j<strs.size();++j)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    flag=false;
                    break;
                }

            }
             if(!flag)
                 break;
             result=result+strs[0][i];
           }

          return result;


    }
};

int main()
{
  vector<string> strss;
  string str;
  while(cin>>str)
    strss.push_back(str);
  string str2=longestCommonPrefix(strss);
  cout<<str;
}
