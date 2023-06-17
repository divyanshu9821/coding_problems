// codechef, MAXEXP
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    // length of expression, no of add operators, no of subtract operators
    int len, adds = 0, subs = 0;
    cin >> len;
    char exp_arr[len];// to store expression

    int nums[len], nums_i = 0;// to store numbers from expressions

    for (int i = 0; i < len; i++)// intializing number array with -1
        nums[i] = -1;


    for (int i = 0; i < len; i++)// input expression
    {
        cin >> exp_arr[i];
        if (exp_arr[i] == '+')
            adds++;
        else if (exp_arr[i] == '-')
            subs++;
        else
        {
            nums[nums_i] = exp_arr[i] - '0';
            nums_i++;
        }
    }
    
    sort(nums,nums+len,greater<int>());

    // skipping -1 because they are not of use
    int pointer = len-1;
    while(pointer>0){
        if(nums[pointer]!=-1)
            break;
        pointer--;
    }

    char ans_exp[len];
    
    for(int i = 0;i<len;i++)
        ans_exp[i]='@';


    int ans_p = len-1;
    
    while(subs>0){
        ans_exp[ans_p] = nums[pointer]+'0';
        ans_exp[ans_p-1]='-';
        ans_p-=2;
        
        pointer--;
        subs--;
    }
    
    while(adds>0){
        ans_exp[ans_p]=nums[pointer]+'0';
        ans_exp[ans_p-1]='+';
        ans_p-=2;
        
        pointer--;
        adds--;
    }

    while(pointer>=0){
        ans_exp[ans_p]=nums[pointer]+'0';
        ans_p--;
        pointer--;
    }

    for(int i = 0;i<len;i++)
        cout<<ans_exp[i];
    cout<<endl;
}

int main()
{

    solve();

    return 0;
}