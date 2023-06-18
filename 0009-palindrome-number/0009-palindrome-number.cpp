class Solution {
public:
    bool isPalindrome(int n) {
        int num = n;
        bool flag = true;
	    vector<int> digits;
	    while(n!=0) {
	        digits.push_back(n%10);
		    n/=10;
	    }
	    n = digits.size();
		for(int i=0;i<n/2;i++) {
	        if(digits[i]!=digits[n-1-i]) {
	            flag = false;
		        break;
		    }
	    }

        if(num<0) return false;
        else return flag;	    
    }
};