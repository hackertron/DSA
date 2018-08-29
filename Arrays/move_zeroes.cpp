class Solution {
public:
void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        while(size > 0)
        {
        for(int i =0; i < nums.size(); i++)
        {
            
            if(nums[i] == 0)
            {
                
                nums.erase(nums.begin()+i % nums.size());
                nums.push_back(0);
                
            }
           

            }
            --size;
        }
    }
};
