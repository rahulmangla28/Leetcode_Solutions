class Solution {
public:
    bool isPalindrome(string s) {
      string nums;
        for(int i=0;i<s.size();i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>='0' && s[i]<='9'))
                nums.push_back(s[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=65 && nums[i]<=90) nums[i]=nums[i]+32;
        }
        int i=0,j=nums.size()-1;
        bool flag=true;
        while(i<=j){
            if(nums[i]!=nums[j]) flag=false;
            i++;
            j--;
        }
        if(flag==false) return false;
        else return true;
    }
};