class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int mcnt=0,pcnt=0,gcnt=0;
        int mind=0,pind=0,gind=0;

        int n = garbage.size();

        for(int i=0;i<n;i++) {
            int m = garbage[i].size();
            for(int j=0;j<m;j++) {
                if(garbage[i][j]=='M') {
                    mcnt++;
                    mind = i;
                }
                else if(garbage[i][j]=='P') {
                    pcnt++;
                    pind = i;
                }
                else {
                    gcnt++;
                    gind = i;
                }
            }
        }

        int time = 0;
        time += (mcnt + pcnt + gcnt);

        for(int i=0;i<mind;i++) time += travel[i];
        for(int i=0;i<pind;i++) time += travel[i];
        for(int i=0;i<gind;i++) time += travel[i];

        return time;
    }
};