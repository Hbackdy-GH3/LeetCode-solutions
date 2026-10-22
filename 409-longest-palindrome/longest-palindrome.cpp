class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        if(n<=1) return n;
        bool take=true;
        int l=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            bool seen=false;
            for(int k=0;k<i;k++){
                if(s[k]==c){
                    seen=true;
                    break;
                }
            }
            if(seen==true){
                continue;
            }
            int cnt=1;
            for(int j=0;j<n;j++){
                if(i!=j && c==s[j]){
                    cnt++;
                }
            }
            if(cnt%2!=0){
                take=false;
            }
            l+=((cnt/2)*2);
        }
            if(take==false){
                l++;
            }
        return l;
    }
};