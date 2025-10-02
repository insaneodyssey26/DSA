class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, index = nums1.size()-1, j = nums2.size()-1;
        while(i>=0&&j>=0){
            if(nums2[j]>=nums1[i]){
                nums1[index]=nums2[j];
                j--;
                index--;                
            }
            else{
                nums1[index]=nums1[i];
                index--;
                i--;
            }
        }
        while(j>=0){
            nums1[index]=nums2[j];
            j--;
            index--;            
        }
    }
};