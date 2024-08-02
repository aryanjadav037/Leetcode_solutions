class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

/*
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n>0){
            for(int i=0;i<=19;i++){
                int ans = pow(3,i);
                if(ans==n)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
*/
