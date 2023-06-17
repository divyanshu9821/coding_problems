public class singleElement {
    public static int singleNonDuplicate(int[] nums){
        
        for(int i = 0;i<nums.length;i++){
            if(i==nums.length-1)
                return nums[i];
            
            if(nums.length==1||nums.length==0)
                return nums[i];
            
            if(nums[i]!=nums[i+1])
                return nums[i];
            i++;
        }
        return -1;
    }

    public static void main(String[] args){
        int[] arr = {1,1,2};
        System.out.println(singleNonDuplicate(arr));
        
    }
}
