class Solution {
    
public:
         int s(int a ){
            return a*a;
         }
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i =1;i<=n;i++){
            if(n%i ==0){
               int ans = s(nums[i-1]);
               sum = sum+ans;
            }
            else{
                continue;
            }
        }
        return sum; 
    }
};