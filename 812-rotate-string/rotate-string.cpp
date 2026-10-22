class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        if(s.length()!=goal.length()) return false;
        // for(int i=0;i<s.length();i++){
        //     for(int j=0;j<s.length()-1;j++){
        //         swap(s[j],s[j+1]);
        //     }
        //     if(s==goal) return true;
        // }
        // return false;
        return (s+s).find(goal)!=string::npos;
    }
};