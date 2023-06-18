class Solution {
public:
    bool hasAlternatingBits(int n) {
        int k=0;
        vector<int> count;
        while(n!=0){
            count.push_back(n%2);
            n=n/2;
            k++;
        }
        for(int i=0;i<k-1;i++){
            if(count[i]==count[i+1]) return false;
        }
        return true;
    }
};