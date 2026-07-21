class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //rightrotate
        vector<int> temp;
        int n=nums.size();
        k=k%n;
        //initial for getting upto which elements
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        //copy balance elements
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        //adding remaining elements
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};