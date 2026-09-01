class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k= nums.size();
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        k = nums.size();
         for(int i=0;i<k;i++){
            cout<< nums[i];
         }
         return k;
    }
};