class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

/*
    Brute Force Approach, Time Complexity=O(N^2)

        int n=arr.size();

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[i]+arr[j]==target)
                return {i, j};
            }
        }

        return {};
    */

/*
    Optimized Approach (Using Binary Search),
    Time Complexity=O(NlogN) 

    sort(arr.begin(), arr.end());

    int n=arr.size();

    for(int i=0;i<n-1;i++) {
        int ans=target-arr[i];

        int st=i+1, end=n-1, mid;

        while(st<=end) {
            mid=st+(end-st)/2;

            if(arr[mid]==ans)
            return {i, mid};

            else if(arr[mid]<ans)
            st++;

            else
            end--;
        }
    }

     return {};
    */

//  Most Optimized Approach (Using Two Pointer)
//  Time Complexity=O(N), Space Complexity=O(N)

    // pairs: {value, original index}
    vector<pair<int, int>> nums;

    for(int i=0;i<arr.size();i++) {
        nums.push_back({arr[i], i});
    }

    sort(nums.begin(), nums.end());

    int st=0, end=nums.size()-1;

    while(st<end) {
        int sum=nums[st].first+nums[end].first;

        if(sum==target)
        return {nums[st].second, nums[end].second};

        else if(sum<target)
        st++;

        else
        end--;
    }

    return {};
    }
};