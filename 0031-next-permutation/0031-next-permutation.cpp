class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int k = 0;
        k = -1;
        int n = 0;
        n = nums.size();
        for (int i = n - 2; i >= 0; --i)
        {
            if (nums[i] < nums[i + 1])
            {
                k = i;
                break;
            }
        }
        cout<<k;
        if (k == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int l = 0;
        l = -1;
        for (int i = n - 1; i > k; --i)
        {
            if (nums[i] > nums[k])
            {
                l = i;
                break;
            }
        }
        swap(nums[k], nums[l]);
        sort(nums.begin() + k + 1, nums.end());
    }
};