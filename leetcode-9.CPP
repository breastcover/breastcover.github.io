class Solution {
public:
    bool isPalindrome(int x) {
        std:string str;
        str=(x>0)?to_string(x):to_string(-1*x);
        if(x<0)
            return false;
        std::reverse(str.begin(),str.end());

       try{
        if(stoi(str)==x)
                 return true;
        else
            return false;
        }catch(std::out_of_range e)
       {

            return 0;

       }



    }
};
