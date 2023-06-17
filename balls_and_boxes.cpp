// codechef, BALLBOX
#include <iostream>
using namespace std;

// user defined function

int main()
{

    int balls, boxes;
    cin >> balls >> boxes;
    int ball_in = 0;
    for(int i = 1;i<=boxes;i++)
    {
        ball_in++;
        balls-=ball_in;
        if(balls<0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}