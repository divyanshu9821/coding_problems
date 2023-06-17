class arrangingCoins{
    public static void main(String[] args){
        int coins = 3;
        int countCompleteRows = 0;
        while(coins>0){
            countCompleteRows++;
            coins = coins - countCompleteRows;
            if(coins<countCompleteRows+1)
                break;
        }
        System.out.println(countCompleteRows);
    }
}