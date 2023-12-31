class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp[nums.size()];
        temp[0]=nums[0];
        int res =1;
        for(int i=1;i<nums.size();i++){
            //if not same element
            if(temp[res-1]!=nums[i]){
                temp[res]=nums[i];
                res++;
            }
        }
        for(int i=0;i<res;i++){
            nums[i]=temp[i];
        }
        return res;
    }
};