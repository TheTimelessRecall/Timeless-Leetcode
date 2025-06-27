class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)  //binary search O(log n)
        {
            int middle = (left + right) /2;
            if (nums[middle] == target)
            {
                return middle;
            }
            else if(nums[middle] > target)
            {
                right = middle -1;
            }
            else if (nums[middle] < target)
            {
                left = middle + 1;
            }

        }
        return left;  //returing the index where the element would be if it were inserted in order

    }
  
};