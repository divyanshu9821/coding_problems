import java.util.*;
public class intersection1 {
    public static int[] intersection(int[] num1, int[] num2) {
        int[] newArr;
        int[] newArr2;
        int[] resultArr;
        
        if(num1.length<=num2.length){
            newArr = removeRepeating(num1);//arr
            newArr2 = num2;
        }            
        else{
            newArr = removeRepeating(num2);//arr
            newArr2 = num1;
        }
        
        resultArr = new int[newArr.length];
        
        for(int i = 0;i<resultArr.length;i++){
            resultArr[i]=-1;
        }
            
        for(int i =0;i<newArr.length;i++){
            for(int j = 0;j<newArr2.length;j++){
                if(newArr[i]==newArr2[j]){
                    resultArr[i] = newArr[i];
                }
            }
        }
        
        return resizing(resultArr);
        
        
    }
    
    public static int[] removeRepeating(int[] num){
        
        for(int i = 0;i<num.length;i++){
                for(int j = i+1;j<num.length;j++){
                    if(num[i]==num[j])
                        num[j]=-1 ;
                }
        }
        
        return resizing(num);
        
    }
    
    public static int[] resizing(int[] temp){
        
        int count = 0;
        int[] arr;
        
        for(int i = 0;i<temp.length;i++){
            if(temp[i]>-1)
                count++;
        }
        
        arr = new int[count];
        
        for(int i = 0;i<temp.length;i++){
            if(temp[i]>-1){
                arr[arr.length-count] = temp[i];
                count--;
            }
            if(count<0)
                break;
        }
        
        return arr;
    }

    public static void main(String[] args){
        int[] num1 = {1,2,2,1};
        int[] num2 = {2,2};
        int[] result = intersection(num1,num2);
        System.out.println(Arrays.toString(result));
    }
}

