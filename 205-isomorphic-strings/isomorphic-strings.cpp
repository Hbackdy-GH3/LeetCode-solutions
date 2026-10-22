class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        int hashS[256]={0};
        int hashT[256]={0};
        for(int i=0;i<s.length();i++){
            char S=s[i];
            char T=t[i];
            if(hashS[S]!=hashT[T]){
                return false;
            }
            hashS[S]=i+1;
            hashT[T]=i+1;
        }
        return true;
    }
};