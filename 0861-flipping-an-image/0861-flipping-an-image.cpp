class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            int k=0,j=n-1;
            while(j>=k){
                 swap(image[i][k],image[i][j]);
                   k++;
                   j--;
            }
        }
            for(int i=0;i<n;i++){
                for(int l=0;l<n;l++){
                if (image[i][l]==0) image[i][l]=1;
                else image[i][l]=0;
                }
            }
        return image;
    }
};