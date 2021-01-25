#include<iostream>
#include<vector>
using namespace std;

   int firstMissingPositive(vector<int>&nums)
    {
        int n=nums.size();
        for(int i = 0; i < nums.size(); ++ i)
            while(nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        
        for(int i = 0; i < nums.size(); ++ i)
            if(nums[i] != i + 1)
                return i + 1;
        
        return n + 1;
    } 
int main(){
    vector<int> nums;
    int a,b ;
    cout << "Enter the size of Array" << endl;
    cin >> a;
    while(a != 0){
        cin >> b;
        nums.push_back(b);
        a --;
    }
    cout << "The first missing positive number is: " << firstMissingPositive(nums);
}
