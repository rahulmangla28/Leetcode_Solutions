

class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> mat(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                set<int> nums1;
                set<int> nums2;
                int a=1;
                while(a<=i && a<=j) {
                    nums1.insert(grid[i-a][j-a]);
                    a++;
                }
                a = 1;
                while(a<=n-1-i && a<=m-1-j) {
                    // if(nums[grid[i+a][j+a]] ==-1) {
                    //     nums[grid[i+a][j+a]] =1;
                    //     flag = true;
                    // }
                    // else if(!flag && nums[grid[i+a][j+a]] ==-1) nums[grid[i+a][j+a]] =-1;
                    nums2.insert(grid[i+a][j+a]);
                    a++;
                }
                
                int cnt = 0;
                if(nums1.size()>=nums2.size()) {
                    cnt = (nums1.size() - nums2.size());
                }else {
                    cnt = -(nums1.size() - nums2.size());
                }
                
                mat[i][j] = cnt;
            }
        }
        return mat;
    }
};