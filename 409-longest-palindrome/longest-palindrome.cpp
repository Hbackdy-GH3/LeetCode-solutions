class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        if(n<=1) return n;
        int hash[123]={0};
        int l=0;
        bool take=false;
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        for(int i=0;i<123;i++){
            if(hash[i]%2==0){
                l+=hash[i];
            }
            if(hash[i]%2!=0){
                l+=((hash[i]/2)*2);
                if(take==false){
                    l++;
                    take=true;
                }
            }
        }
        return l;
    }
};