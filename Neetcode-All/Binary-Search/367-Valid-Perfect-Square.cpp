class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int left = 1 , right = num;

        while (left <= right)
        {
            long long int middle = (left + right ) /2;
            if (middle * middle == num) return true;
            else if (middle * middle > num) right = middle -1;
            else left = middle + 1; 
        }
        return false;
    }
};