class Solution {
public:
    int bestClosingTime(string customers) {
        // Start with closing at hour 0, the penalty equals all 'Y' in closed hours.
        int curPenalty = count(customers.begin(), customers.end(), 'Y');
        int minPenalty = curPenalty;
        int earliestHour = 0;

        for (int i = 0; i < customers.size(); i++) {
            char ch = customers[i];

            // If status in hour i is 'Y', moving it to open hours decrement
            // penalty by 1. Otherwise, moving 'N' to open hours increment
            // penatly by 1.
            if (ch == 'Y') {
                curPenalty--;
            } else {
                curPenalty++;
            }

            // Update earliestHour if a smaller penatly is encountered.
            if (curPenalty < minPenalty) {
                earliestHour = i + 1;
                minPenalty = curPenalty;
            }
        }

        return earliestHour;      
    }

    // int bestClosingTime(string a) {
	// 		int s=a.size();
	// 		vector<int> y,n;
	// 		y.push_back(0);
	// 		n.push_back(0);
	// 		int cnt=0;
	// 		for(int i=0;i<s;i++){
	// 			if(a[i]=='N')cnt++;
	// 			n.push_back(cnt);
	// 		}
	// 		cnt=0;
	// 		for(int i=s-1;i>=0;i--){
	// 			if(a[i]=='Y')cnt++;
	// 			y.push_back(cnt);
	// 		}
	// 		reverse(y.begin(),y.end());
	// 		int ans=INT_MAX,ind=0;
	// 		for(int i=0;i<s+1;i++){
	// 			int h=y[i]+n[i];
	// 			if(h<ans){
	// 				ans=h;
	// 				ind=i;
	// 			}
	// 		}
	// 		return ind;

	// 	}
};