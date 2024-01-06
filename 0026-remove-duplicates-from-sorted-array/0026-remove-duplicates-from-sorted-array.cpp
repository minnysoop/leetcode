class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int bucket = 0;
        for (int i = 1; i < size; i++){
            if (nums[i] != nums[bucket]){
                bucket += 1;
                nums[bucket] = nums[i];
            }
        }

        return bucket + 1;
        
    }
};