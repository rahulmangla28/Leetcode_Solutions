class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> a;
        vector<int> b;
        for(int i=0;i<words.size();i++){
            int count=0;
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==*min_element(words[i].begin(),words[i].end())) count++;
            }
            a.push_back(count);
        }
        for(int i=0;i<queries.size();i++){
            int count=0;
            for(int j=0;j<queries[i].size();j++){
                if(queries[i][j]==*min_element(queries[i].begin(),queries[i].end())) count++;
            }
            b.push_back(count);
        }
        vector<int> ans;
        for(int i=0;i<b.size();i++){
            int count=0;
            for(int j=0;j<a.size();j++){
                if(b[i]<a[j]) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};