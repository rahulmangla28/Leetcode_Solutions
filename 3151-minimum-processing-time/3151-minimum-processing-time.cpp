class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int n = tasks.size();
        int m = processorTime.size();
        int res = 0;
        int i = 0,j=0;
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.rbegin(),tasks.rend());

        while(i < n && j < m) {
            cout<<processorTime[j]<<" "<<tasks[i]<<endl;
            res = max(res,processorTime[j] + tasks[i]);
            j += 1;
            i += 4;
        }

        return res;
    }
};