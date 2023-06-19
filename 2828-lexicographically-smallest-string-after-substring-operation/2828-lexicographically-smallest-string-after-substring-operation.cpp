class Solution {
public:
    string smallestString(string s) {
//         int n = s.size();
//         bool flag = false;
//         int first = 0,second = n;
//         if(s[0]=='a') first = 1;
//         for(int i=1;i<n;i++) {
//             if(s[i]=='a') {
//                 second = i;
//                 break;
//             }
//         }
        
//         string str = "";
//         for(int i=0;i<first;i++) str += s[i];
//         for(int i=first;i<second;i++) {
//             char ch = (s[i] - 'a' + 25) % 26 + 'a';
//             str += ch;
//             flag = true;
//         }
//         for(int i=second ;i<n;i++) str += s[i];
//         if(!flag) {
//             str = "";
//             for(int i=0;i<n;i++) {
//                 char ch = (s[i] - 'a' + 25) % 26 + 'a';
//                 str += ch;
//             }
//         }
        int n = s.size();
        int ind = 0;
        string res = s;
        while(ind< n && res[ind]=='a') {
            ind ++;
        }
        
        int cnt = ind;
        res = s;
        if(cnt == s.size()) {
            res[n-1] = 'z';
               return res; 
        }
        
        
        //ind = 0;
        string str = s;
        while(ind < n) {
            if(str[ind] != 'a') {
                res[ind] = res[ind] - 1;
            }else {
                break;
            }
            
            ind ++;
        }
        
        return res;
        
        
//     }
    
//     int i = 0,n=s.size();
//         while (i < n && s[i] == 'a') {
//             i++;
//         }

//         // If all characters are 'a', replace the last character with 'z'
//         if (i == n) {
//             s[n - 1] = 'z';
//             return s;
//         }

//         // Replace the first non-'a' character and all subsequent characters with 'a'
//         while (i < n) {
//             if (s[i] != 'a') {
//                 s[i] = s[i] - 1;
//             } else {
//                 break;
//             }
//             i++;
//         }

//         return s;
    }
};