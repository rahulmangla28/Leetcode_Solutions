class Solution {
public:
    long long putMarbles(vector<int>& v, int k) {
        
        // edge cases
        if(k == 1 || k == v.size()) return 0;


         long long int ans = 0;

         long long int ans1 = 0;
           k--;

         vector<long long int>res1;

         for(long long int i = 0;i<v.size()-1;i++){res1.push_back(v[i]+v[i+1]);}


             vector<long long int>res;

          for(long long int i = 0;i<v.size()-1;i++){res.push_back(v[i]+v[i+1]);}

        // sorting in descreasing format
         sort(res1.begin() , res1.end() , greater<long long int>());
          sort(res.begin() , res.end());


            for(long long int i =0;i<k;i++) ans1 += res1[i];
        for(long long int i =0;i<k;i++) ans += res[i];


        return (ans1 - ans);
    }
    
};




          //          <----------------------       Please Like Share and Subscribe      ---------------------->      //


                 