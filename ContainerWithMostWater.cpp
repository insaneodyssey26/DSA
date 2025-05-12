class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int area = INT_MIN;
        while(i<=j){
            int h =(height[i]>height[j])?height[j]:height[i];
            int l = j - i;
            area = max(area, h*l);
            (height[i]>height[j])?j--:i++;
        }
       return area;
    }
};