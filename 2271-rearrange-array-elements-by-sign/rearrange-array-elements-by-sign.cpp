class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
      vector<int>nums1(n,0);
     int Pi=0;
     int Ni=1;
     for(int i=0;i<n;i++){
        if(nums[i]>0){
            nums1[Pi]= nums[i];
            Pi=Pi+2;
        }
        else{
            nums1[Ni]=nums[i];
            Ni= Ni+2;
        }
     }
      
      return nums1;


    }
};