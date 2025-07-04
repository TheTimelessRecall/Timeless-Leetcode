/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        int middle;

        while (low <= high){
            middle = low + (high - low) / 2;
            int num_guess = guess(middle);

            if (num_guess == 0) return middle;
            else if (num_guess == -1) high = middle -1;
            else low = middle + 1;
        }
        return middle;

        
    }
};