class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int n = words.size();
        right = min(right,n);
        int cnt = 0;

        for(int i=left;i<=right;i++) {
            int sz = words[i].size();
            char start = words[i][0];
            char end = words[i][sz-1];

            if((start=='a' || start=='e' || start=='i' || start=='o' || start=='u') && 
                (end=='a' || end=='e' || end=='i' || end=='o' || end=='u')) 
                    cnt++;

        }   

        return cnt;

    }
};