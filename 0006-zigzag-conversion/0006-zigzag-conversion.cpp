class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1) return s;

        string str = "";
        int charInSection = 2 * (numRows-1);

        for(int currRow = 0;currRow<numRows;currRow++) {
            int index = currRow;

            while(index<n) {
                str += s[index];

                if(currRow!=0 && currRow!=numRows-1) {
                    int charInBetween = charInSection - 2*currRow;
                    int secondIndex = index + charInBetween;

                    if(secondIndex<n) str += s[secondIndex];
                }

                index += charInSection;
            }

        }

        return str;
    }
};