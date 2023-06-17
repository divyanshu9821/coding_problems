class squareRoot{
    public static void main(String[] args){
        int x = 8;
        int flag = 0;
        for(int i = x/2;i>1;i--){
            if(x==i*i){
                System.out.println(i);
                flag = 1;
                return;
            }
        }
        if(flag==0){
            System.out.println("No square root");
        }       
    }
}