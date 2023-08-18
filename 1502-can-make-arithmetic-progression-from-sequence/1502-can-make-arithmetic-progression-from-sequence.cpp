class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        if(n ==2){
            return true;
        }
        sort(arr.begin(), arr.end());
        int diff = arr[1]-arr[0];
        for(int i =2;i<n;i++){
             int curr_diff = arr[i]- arr[i-1];
             if(curr_diff!=diff)
                 return false;  
             
        }
            return true;
    }
};