class Solution {
public:
    int maxArea(vector<int>& height) {
// Optimized Approach, TWO POINTER, TC=O(N), SC=O(1)

        int maxWater=0, area, h, w;
        int st=0, end=height.size()-1;
        while(st<end) {
            h=min(height[st], height[end]);
            w=end-st;

            area=h*w;
            maxWater=max(area, maxWater);

            if(height[st]<=height[end])
            st++;

            else
            end--;
        }
        
        return maxWater;

/*
Brute Force Approach, TC=O(N^2), SC=O(1)

        int maxWater=0, h, w, area;

        for(int left=0;left<height.size()-1;left++) {
            for(int right=left+1;right<height.size();right++) {
                h=min(height[left], height[right]);
                w=right-left;

                area=h*w;
                maxWater=max(area, maxWater);
            }
        }

        return maxWater;
*/
    }
};