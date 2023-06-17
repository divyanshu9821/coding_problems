// codechef, EQUIVALENT TLE
#include <iostream>
#include <map>
using namespace std;

// using sieve method
map<int, int> sieve(int x)
{
    int arr[x + 1] = {0};

    for (int i = 2; i <= x; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= x; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j <= x; j += i)
            {
                if (arr[j] == j)
                    arr[j] = i;
            }
        }
    }

    map<int, int> factors;

    while (x != 1)
    {
        factors[arr[x]]++;
        x /= arr[x];
    }

    return factors;
}

// first size of maps
// then keys
// then values
bool check(int a, int b)
{
    map<int, int> fact_a, fact_b;
    fact_a = sieve(a);
    fact_b = sieve(b);
    if (fact_a.size() != fact_b.size())
    {
        return false;
    }

    // getting ratio for any prime factor from both maps
    auto itr = fact_a.begin();
    int first_key = (*itr).first;
    auto itr2 = fact_b.find(first_key);
    if (itr2 == fact_b.end())
    {
        return false;
    }

    int value1 = (*itr).second;
    int value2 = (*itr2).second;
    float first_ratio = (float)value1 / (float)value2;
    // to check keys are common
    for (auto it : fact_a)
    {
        int key = it.first;

        if(!fact_b.count(key))
            return false;
    }

    bool ans = false;
    for (auto it : fact_a)
    {
        int val1 = it.second;
        auto itr = fact_b.find(it.first);
        int val2 = (*itr).second;
        float ratio = (float)val1 / (float)val2;
        if (ratio != first_ratio)
            return false;
        else{
            ans = true;
        }
    }
    return ans;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if (check(a, b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    solve();

    return 0;
}