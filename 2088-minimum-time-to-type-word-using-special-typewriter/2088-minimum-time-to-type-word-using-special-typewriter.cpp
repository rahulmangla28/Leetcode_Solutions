class Solution {
public:
    int minTimeToType(string word) {
        int n=word.size();
        int ans=0;
        if(abs(word[0]-'a')>13) ans+=26-abs(word[0]-'a');
        else ans+=abs(word[0]-'a');
        for(int i=1;i<n;i++){
            char alpha=word[i-1];
            if(abs(word[i]-alpha)>13) ans=ans+(26-abs(word[i]-alpha));
            else ans+=abs(word[i]-alpha);
        }
        return (ans+n);
    }
};