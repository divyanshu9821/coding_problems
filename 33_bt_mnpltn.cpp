#include <iostream>
using namespace std;

// what bit at 'position' in 'number'
// left bit shift 1 to 'postion'
// then use bitwise 'and' operator with 'number'
int get_bit(int number, int position)
{
    int bit_shift = 1 << position;
    int result = number & bit_shift; // '&' is bitwise 'and' operator
    return (result != 0);
}

// we have to put 1 at 'position. in 'number'
// bit shift 1 to 'position'
// then use bitwise 'or' operator with 'number'
int set_bit(int number, int position)
{
    int bit_shift = 1 << position;
    int result = number | bit_shift; // '|' is bitwise 'or' opeartor
    return result;
}

// we have to put 0 at 'position' in 'number'
// bit shift 1 to 'postion'
// then take complement of the shifted 1
// then perform bitwise 'and' operation with number
int clear_bit(int number, int position)
{
    int bit_shift = 1 << position;
    int mask = ~bit_shift; // this operation is called masking
    int result = number & mask;
    return result;
}

// set 'bit' at 'position' in 'number'
// another way is to first clear bit then set bit
int update_bit(int number, int position, int bit)
{
    if (get_bit(number, position) == bit)
    {
        return -1;
    }
    else if (bit == 1)
    {
        return set_bit(number, position);
    }
    else
    {
        return clear_bit(number, position);
    }
    return -2;
}

int main()
{
    int number = 13;
    int position = 3;
    int bit = 0;

    // {
        cout << get_bit(number, position) << endl;
    // }

    // {
    //     cout << set_bit(number, position) << endl;
    // }

    // {
    //     cout << clear_bit(number, position) << endl;
    // }

    // {
    //     int return_update = update_bit(number, position, bit);

    //     if (return_update == -1)
    //         cout << "Try to put same bit that is already at that position" << endl;

    //     else if (return_update == -2)
    //         cout << "Errrrr...." << endl;
    //     else
    //         cout << return_update << endl;
    // }

    return 0;
}