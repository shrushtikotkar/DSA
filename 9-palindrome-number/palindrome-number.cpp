class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
        int ld;
        long long revnum = 0;
        while(dup >0){
           ld= dup%10;
           revnum = (revnum*10)+ld;
           dup = dup/10;

        }

        if(revnum == x){
            return true;
        }
        else{
            return false;
        }
    }
};