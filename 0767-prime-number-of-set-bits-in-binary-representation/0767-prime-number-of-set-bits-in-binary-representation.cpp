class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> nums;
        int l=0;
        for(int i=left;i<=right;i++){
            int a=i;
            while(i!=0){
                nums.push_back(i%2);
                i=i/2;
            }
            int n=nums.size();
            int k=0;
            for(int i=0;i<n;i++){
                if(nums[i]==1) k++;
            }
            if(k==2|| k==3 || k==5 || k==7 || k==11 || k==13 || k==17 || k==19 || k==23) l++;
            nums.clear();
            k=0;
            i=a;
        }
        return l;
    }
};