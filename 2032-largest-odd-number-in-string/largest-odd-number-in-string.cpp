class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        if(n<=1){
            if(num[0]%2!=0){
                return num;
            } else return num.erase();
        }
        int left=0;
        int right=n-1;
        while(left<=right){
            if(num[right]%2!=0){
                break;
            }
            right--;
        }
        while(left<=right && num[left]=='0'){
            left++;
        }
        return num.substr(left,right-left+1);
    }
};