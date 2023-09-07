class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i =1;i<nums.size();i++){
            for(int j = 0;j<nums.size()-i;j++){
                if(nums[j]>nums[j+1]){
                     int temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;

                }
            }
        }
    }
};