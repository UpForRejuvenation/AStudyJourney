public class Q162 {
    public int findPeakElement(int[] nums) {
        if(nums.length==1){
            return 0;
        }
         
        int len = nums.length;
        if(nums[0]>nums[1]){
            return 0;
        } else if(nums[len-1]>nums[len-2]){
            return len-1;
        }

        int l=1,r=nums.length -1;
        int ans=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m-1] > nums[m]){
                r=m-1;
            } else if(nums[m] < nums[m+1]){
                l=m+1;
            } else{
                ans=m;
                break;
            }
        }
        return ans;
    }
}
