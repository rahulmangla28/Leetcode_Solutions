class Solution {
public:
    string maximumTime(string time) {
        int n=time.size();
        int i=0,j=n-1;
                if(time[i]=='?' && time[i+1]=='?'){
            time[i]='2'; time[i+1]='3';
        }
        if(time[j]=='?' && time[j-1]=='?'){
            time[j]='9'; time[j-1]='5';
        }
        if(time[j]=='?') time[j]='9';
        if(time[j-1]=='?') time[j-1]='5';
        if(time[i]=='?'){
            if(time[i+1]<='3') time[i]='2';
            else time[i]='1';
        }
        if(time[i+1]=='?'){
            if(time[i]=='2') time[i+1]='3';
            else time[i+1]='9';
        }
        return time;
    }
};