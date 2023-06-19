class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        bool flag=true;
        for (int ind = 0; ind< score.size();ind++)
        {
            if(flag)
            {
                flag = false;
                for(int al=0;al<score.size()-1;al++)
                {
                    if(score[al][k] < score[al+1][k])
                    {
                        score[al].swap(score[al+1]);
                        flag = true;
                    }
                }
            }
            else
            {
                break;
            }
        }
        return score;
    }
};