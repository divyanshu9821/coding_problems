// codechef, PBATTLE
#include <iostream>
#include <climits>
#include <set>
using namespace std;

void solve()
{
    int n; // no of trainers
    cin >> n;

    long int grnd_strn[n]; // ith trainer's pokemon ground strength
    for (int i = 0; i < n; i++)
    {
        cin >> grnd_strn[i];
    }

    long int watr_strn[n]; // ith trainer's pokemon water strength
    for (int i = 0; i < n; i++)
    {
        cin >> watr_strn[i];
    }

    long int def_train_grnd[n][n]; // store which players defeated by ith player
    long int def_train_watr[n][n]; 
    
    // intializing with -1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            def_train_grnd[i][j] = -1; // it means no player defeated yet
            def_train_watr[i][j] = -1;
        }
    }


    // jth trainer defeat ith trainer storing in 2d matrix
    for (int i = 0; i < n; i++)
    {
        int idx = 0;
        for (int j = 0; j < n; j++)
        {
            if (grnd_strn[i] > grnd_strn[j])
            {
                def_train_grnd[idx][i] = j;
                idx++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int idx = 0;
        for (int j = 0; j < n; j++)
        {
            if (watr_strn[i] > watr_strn[j])
            {
                def_train_watr[idx][i] = j;
                idx++;
            }
        }
    }


    // this is store the combine result
    long int final_beat[n*2-2][n];

    // initializing with -1
    for (int i = 0; i < n*2-2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            final_beat[i][j] = -1;
        }  
    }


    for (int i = 0; i < n; i++)
    {
        int idx = 0;
        for (int j = 0; j < n; j++)
        {
            if(def_train_grnd[j][i]>-1){
                final_beat[idx][i] = def_train_grnd[j][i];
                idx++;    

            }
        }
        for (size_t j = 0; j < n; j++)
        {
            if(def_train_watr[j][i]>-1){
                final_beat[idx][i] = def_train_watr[j][i];
                idx++;
            }
        }        
    }
    
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> s;// set is to check how many distinct ith player defeated by ith
        
        for (int j = 0; j < n*2-2; j++)
            s.insert(final_beat[j][i]);
        
        int wins = 0;

        for(int i = 0;i<n;i++){// wins store the distinct players
            if(s.count(i)){
                wins++;
            }
        }

        if(wins==n-1)// if distinct player no is enough for qualify for another round
            ans++;
        
    }
    
    cout<<ans<<endl;    

    return;
}

int main()
{

    solve();
    return 0;
}