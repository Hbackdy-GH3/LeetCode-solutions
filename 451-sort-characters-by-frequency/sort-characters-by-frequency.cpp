class Solution {
public:
    string frequencySort(string s) {
        if(s.length()<=1) return s;
        int hash[123]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        // vector<string> result;
        // for(int i=0;i<123;i++){
        //     if(hash[s[i]]>0){
        //         result.push_back(i);
        //     }
        // }
        sort(s.begin(),s.end(),[&](char a, char b){
            if(hash[a]>hash[b]) return true;
            else if(hash[a]==hash[b]) return a > b;
            else return false;
        });
        return s;
    }
};