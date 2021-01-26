class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int digit = 1;
        for(int i =0; i < nums.size(); i++){
            digit = 1;
            while( nums[i]>=10){
                nums[i] =  nums[i] /10;
                digit++;
            }
            if(digit % 2 == 0){
                count++;
            }
        }
        return count;
    }
};
