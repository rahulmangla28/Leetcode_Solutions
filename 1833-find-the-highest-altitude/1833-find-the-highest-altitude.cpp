class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,b;
        vector<int> altitudes(gain.size()+1);
        altitudes[0]=0;
        for(int i=1;i<gain.size()+1;i++){
            altitudes[i]=altitudes[i-1]+gain[i-1];
            if(altitudes[i]>a){
                a=altitudes[i];
            }
        }
        return a;
    }
};