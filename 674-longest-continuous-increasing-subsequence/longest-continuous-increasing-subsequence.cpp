class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n= nums.size();
        int maxi =1;
        int inc =1;
        for(int i =0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
            }
            else{
                inc=1;
            }
            maxi = max(maxi,inc);
        }
       return maxi ;
    }
};