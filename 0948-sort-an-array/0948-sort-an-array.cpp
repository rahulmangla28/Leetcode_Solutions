class Solution {
public:

    //  The Function for MergeSort
void mergeSort(vector<int>& nums, int low, int high){
	if(low==high)
		return;
	int mid=low+(high-low)/2;
	mergeSort(nums,low,mid);
	mergeSort(nums,mid+1,high);
	merge(nums,low,high,mid);
}

// Function to merge 2 sorted array into 1 sorted array 
void merge(vector<int>& nums, int low, int high, int mid){
	int leftsize=mid-low+1, rightsize=high-mid;
	vector<int> left(leftsize+1), right(rightsize+1);

	for(int i=0; i<leftsize; i++)
		left[i]=nums[i+low];
	for(int i=0; i<rightsize; i++)
		right[i]=nums[i+mid+1];
	left[leftsize]=right[rightsize]=INT_MAX;

	int i=0,j=0;
	for(int k=low; k<=high; k++)
		nums[k]=(left[i]<=right[j])?left[i++]:right[j++];
}

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};