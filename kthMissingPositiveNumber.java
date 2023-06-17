class kthMissingPositiveNumber{
    public static void main(String[] args){
        int[] arr = {1,2,3,4};//input
        int k = 2;//input
        
        int i = 0;
        int end = k;
        for(int j = 1;j<=arr[arr.length-1]+end+1;j++){
            
            if(k==0){
                System.out.println(j-1);
                break;
            }   
            
            if(i>=arr.length&&k>0){
                k--;
                continue;
            }
            
            if(arr[i]==j){
                i++;
            }
            else
                k--;
            
        }
    }
}