class Solution {
public:
    int serachsquareroot(int x) {

        int s = 0;
        int e = x;
        int ans = -1;

        while (s <= e) {

            long long mid = s + (e - s) / 2;
            long long square = mid * mid;

            if (square == x) {
                return mid;
            }
            else if (square < x) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return ans;  
    }

    int mySqrt(int x) {
        return serachsquareroot(x);
    }
};