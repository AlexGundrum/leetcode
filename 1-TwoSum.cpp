// 5/31/2024
// assuming there are two elements that add up to target, in o(N) return indexes of elements that add up to target.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seenNums;
        for(int i = 0; i < nums.size(); i++){
            if(seenNums.find(nums[i]) == seenNums.end()){
                seenNums.insert(std::make_pair(target - nums[i], i));
            }else{
                return {i, seenNums.at(nums[i])};
            }
        }
        return {-1, -1};
    }
};
