class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long original = x, reversed = 0;
        while(x!= 0){
            reversed = reversed * 10 + (x%10);
            x=x/10;
        }

        if(reversed == original){
            return true;
        }
        else{
            return false;
        }
        
        
        
    }
};