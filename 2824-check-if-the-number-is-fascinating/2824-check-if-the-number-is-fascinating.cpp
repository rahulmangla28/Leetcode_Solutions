class Solution {
public:
    bool isFascinating(int n) {
        string s = "";
        int val = n;
        while(val) {
            s += to_string(val%10);
            val /= 10;
        }
        val = 2*n;
        while(val) {
            s += to_string(val%10);
            val /= 10;
        }
        val = 3*n;
        while(val) {
            s += to_string(val%10);
            val /= 10;
        }
        
        vector<int> arr(10,0);
        for(int i=0;i<s.size();i++) {
            arr[s[i]-'0']++;
        }
        
        bool flga = true;
        for(int i=0;i<10;i++) {
            if(arr[i] > 1) return false;
            if(arr[0] > 0) return false;
        }
        return true;
    }
};