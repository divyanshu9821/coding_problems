// https://practice.geeksforgeeks.org/problems/optimum-location-of-point-to-minimize-total-distance/1
#include <iostream>
#include <cmath>
using namespace std;

// user defined function

int main()
{

    float line_x, line_y;
    float points[5][2];
    cin >> line_x >> line_y;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> points[i][0];//x
    //     cin >> points[i][1];//y
    // }

    points[0][0] = -3;
    points[0][1] = 2;
    
    points[1][0] = -1;
    points[1][1] = 0;

    points[2][0] = -1;
    points[2][1] = 2;

    points[3][1] = 2;
    points[3][0] = 1;

    points[4][0] = 3;
    points[4][1] = 4;


    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        float sq = ((line_x - points[i][0]) * (line_x - points[i][0])) + ((line_y - points[i][1]) * (line_y - points[i][1]));
        // cout<<sq<<endl;
        float sqqqrt = sqrt(sq);
        sum += sqqqrt;
    }

    cout << sum << endl;

    return 0;
}