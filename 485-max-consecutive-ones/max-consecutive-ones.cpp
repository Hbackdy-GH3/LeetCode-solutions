class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int mcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
            mcnt=max(mcnt,cnt);
            if(nums[i]==0){
                cnt=0;
            }
        }
        cnt=mcnt;
        return cnt;
    }
};