class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool dec = true , inc = true;

        for (int i {0}; i < nums.size() - 1 ; i++)
        {
            if (nums[i] < nums[i+ 1] ) dec =false;
            if (nums[i] > nums[i + 1] ) inc = false;
        }
        if (dec || inc) return true;
        else return false;
    }
};