class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> seq;
        for(int i=0;i<nums.size();i++){
            if(seq.empty() || seq[seq.size()-1] < nums[i]){
                seq.push_back(nums[i]);
            }
            else{
                auto it = lower_bound(seq.begin(), seq.end(), nums[i]);
                *it = nums[i];
            }
        }
        return seq.size();
    }
};