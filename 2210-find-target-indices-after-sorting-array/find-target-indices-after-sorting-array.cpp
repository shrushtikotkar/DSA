class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
       sort(nums.begin(),nums.end());
       int n = nums.size();
       int first = lower_bound(nums.begin(),nums.end(),target)- nums.begin();
       if(first == n || nums[first] != target){
        return { };
       }
       int  last = upper_bound(nums.begin(),nums.end(),target)- nums.begin()-1;
       for(int i =first ;i<=last;i++){
        ans.push_back(i);
       }
     
        return ans;
    }
};