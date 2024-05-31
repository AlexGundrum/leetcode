/*
5/31/2024
In the array of integers, there is one element that appears only once, every other element appears twice in the array. In O(N) time, and constant space, find the element that appears once
Works because each of the pairs of elements XOR cancel each other out, leaving just the single element by itself. 


*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++){
            prev = prev ^ nums[i];
        }
        return prev;
    }
};
