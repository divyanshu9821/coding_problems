// 0-1 knapsack problem
#include <iostream>
using namespace std;

// commulative weight must be less than or equal to knapsack weight capacity
// commulative values of items highest
int knapsack(int vlu[], int wt[], int wt_npsk, int n) // vlu[] store value of items, wt[] store weight of items, wt_knsp is  weight of knapsack, n is no of items
{
    if (n == 0 || wt_npsk == 0) // if n become 0 so nothing to compute or weight of knapsack become 0 means no more item will be hold by the knapsack
        return 0;

    if (wt_npsk < wt[n - 1]) // if weight of items become more than the knapsack hold than we donot include that item
        return knapsack(vlu, wt, wt_npsk, n - 1);

    // other wise we consider both and return whose value is greater
    return max(knapsack(vlu, wt, wt_npsk - wt[n - 1], n - 1) + vlu[n - 1], knapsack(vlu, wt, wt_npsk, n - 1)); // case: item added in knapsack, case: item not added in knapsack
}

int main()
{
    int n = 3;                  // no of items
    int knpsck_wght = 50;       // this much weight knapsack hold
    int vlu[] = {100, 50, 150}; // value of n items
    int wt[] = {10, 20, 30};    // weight of n items
    cout << knapsack(vlu, wt, knpsck_wght, n) << endl;
    return 0;
}