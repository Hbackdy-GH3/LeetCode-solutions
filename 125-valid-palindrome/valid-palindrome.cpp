class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n<=1) return true;
        string temp;
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
            // size_t pos;
            // if((pos=s.find(' '))!=string::npos){
            //     s.erase(pos);
            // }
            if(isalnum(s[i])){
                temp.push_back(s[i]);
            }
        }
        int left=0;
        int right=temp.size()-1;
        while(left<right){
            if(temp[left]!=temp[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};