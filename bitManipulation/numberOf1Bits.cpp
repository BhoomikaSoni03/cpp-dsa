class Solution {
public:
    string bitConversion(int n){
        string res = "";
        while(n>0){
            int fi = n%2;
            res += char(fi + '0');
            n = n/2;
        }
        return res;
    }

    int hammingWeight(int n) {
        string ans = bitConversion(n);
         int cnt =0;
       for(int i=0; i<ans.size(); i++){
           
            if(ans[i] == '1')
            cnt++;
        }
        return cnt;
    }
};