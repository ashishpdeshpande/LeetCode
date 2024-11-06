class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int end = nums1.size()-1;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()) {
            nums1[i++] = nums2[j++];
        }

        int mid = (i + end)/2;

        if(nums1.size() % 2 == 0) {
            return (nums1[mid] + nums1[mid+1])/2;
        }
        else {
            return nums1[mid];
        }
    }
};
