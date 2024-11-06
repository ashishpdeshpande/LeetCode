class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
     List<List<Integer>> trips = new ArrayList<>();
        int n= nums.length;
        for(int i=0;i<n-2;i++) {
             for(int j=i+1;j<n-1;j++) {
                 for(int k=j+1;i<n;k++) {
                    if((nums[i]+nums[j]+nums[k])==0) {
                       trips.add(nums[i]);
                       trips.add(nums[j]);
                       trips.add(nums[k]);

                    }
                 } 
             } 
        }
        return  trips;

    }
}
