class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0;
        int len = nums.size();
        int end=len-1;
        while(start <=end)
        {
            if(nums[start] %2 !=0 ) 
            {
                if(nums[end] % 2 == 0 ) 
                {
                    swap(nums[start],nums[end]); start++; end--;
                } 
                else 
                    end--;
            }
            else 
            {
                start++;
            }
        }
        return nums;
    }
};