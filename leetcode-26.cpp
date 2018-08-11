#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

        for(auto iter=nums.begin();iter!=nums.end();iter++)
        {
            for(auto iter2=iter+1;iter2!=nums.end();)
            {
                if(*iter==*iter2)
                {
                    nums.erase(iter2);
                }
                else
                {
                  iter2++;
                }
            }
        }
        return nums.size();
    }

int main()
{
  vector<int> nums;
  int num;
  while(cin>>num)
  {
    nums.push_back(num);
  }
  int size=removeDuplicates(nums);
  cout<<size<<endl;
  return 0;
}
