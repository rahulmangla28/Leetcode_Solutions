class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
       int fare=0;
        int cnt=0;
        int left=0,right=0;
        int len=0;
        while(right<s.size()){
            fare+=abs(s[right]-t[right]);
            if(fare<=maxCost){
                len++;
                right++;
                cnt=max(cnt,len);
            }
            else {
                len++;
                if(fare>maxCost){
                fare-=abs(s[left]-t[left]);
                left++;
                len--;
                }
                right++;
            }
        }
        return cnt;
    }
};