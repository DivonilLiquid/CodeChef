#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[t]=nums[i];
                t++;
            }
        }
        for(int i=t;i<n;i++){
            nums[i]=0;
        }
    }
};
int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int> nums;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        nums.push_back(t);
    }
    s.moveZeroes(nums);
    for(int i: nums){
        cout<<i<<", ";
    }
    return 0;
}
