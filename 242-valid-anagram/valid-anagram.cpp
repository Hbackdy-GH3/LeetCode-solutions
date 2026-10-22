class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s==t) return true;
        if(s.length()!=t.length()) return false;
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-'a']!=0) return false;
        }
        return true;
    }
};