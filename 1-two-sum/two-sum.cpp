class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int i = 0;
        int j = nums.size() - 1;

        // sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        // while (i < j) {

        //     if (nums[i] + nums[j] > target) {
        //         j--;
        //     }
        //     else if (nums[i] + nums[j] < target) {
        //         i++;
        //     }
        //     else {
        //         return {i, j};
        //     }
        // }

        return {};
    }
};