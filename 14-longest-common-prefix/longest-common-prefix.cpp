class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp;
        if(strs.size()<=0) return temp;
        int n=strs[0].length();
        if(n<=0) return temp;
        string check=strs[0];
        int k=0;
        bool equal=true;
        for(int i=0;i<n;i++){
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].length() || strs[j][i]!=check[i]){
                    equal=false;
                    break;
                }
            }
            if(equal){
                temp.push_back(check[k]);
            }
            k++;
        }
        return temp;
    }
};