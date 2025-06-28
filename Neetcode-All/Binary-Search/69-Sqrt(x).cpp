class Solution {
public:
    int mySqrt(int x) {
     long long int left =1 , right = x;

        while (left <= right)
        {
            long long int middle = (left + right) /2;
            if (middle * middle == x) return middle;
            else if (middle * middle > x) right = middle -1;
            else left = middle +1;
        }
        return left -1;
    }
};