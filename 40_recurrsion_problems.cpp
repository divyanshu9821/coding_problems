#include <iostream>
using namespace std;



// reverse the string
string reverse_string(string str, int i, int str_len, string rev_str)
{
    // base case
    if (i == str_len)
    { // if i reaches to length means no element to reverse
        return "";
    }
    rev_str = reverse_string(str, i + 1, str_len, rev_str); // reaches to the end element
    rev_str += str[i];                                      // adding elements from last in new string
    return rev_str;
}

// replace 'pi' with '3.14' in a string
void replace_pi(string str, int i, int str_len, string new_str)
{
    // base case
    if (i == str_len)
    { // if i reaches the length means no element to compare
        cout << new_str << endl;
        return;
    }
    else if (str[i] == 'p' && str[i + 1] == 'i')
    { // check the p and i are adjacent
        new_str += "3.14";
        i++; // because we replace with two elements
    }
    else
    {
        new_str += str[i]; // if no p and i are adjacent
    }
    replace_pi(str, i + 1, str_len, new_str);
    return;
}

// tower of hanoi
void tower(int disks, char s, char h, char d)
{
    // base case
    if (disks == 0)
    { // if there is no disk so no trasfer
        return;
    }
    tower(disks - 1, s, d, h);                         // transfer n-1 disks from 's' to 'h' tower with the help of 'd' tower
    cout << disks << ": " << s << " -> " << d << endl; // transfer nth disk from 's' to 'd' tower.
    tower(disks - 1, h, s, d);                         // trasfer those n-1 disks from 'h' to 'd' tower with the help of 's' tower
}

// remove duplicates from the string
// duplicates must be continous
string remove_duplicates(string str)
{
    if (str.length() == 0)
        return "";
    char c = str[0]; // take first element from the string

    string ans = remove_duplicates(str.substr(1)); // passing rest of the string to the function

    if (ans[0] == c) // if first character of substring is same as the first character of string it means they are duplicate
        return ans;

    return c + ans; // if elements not same means we have to get both elements in string
}

// move all the x at the end
string move_x(string str)
{
    if (str.length() == 0)
        return "";

    char ch = str[0];
    string ans = move_x(str.substr(1)); // storing the substring in 'ans'
    if (ch == 'x')
        return ans + ch; // if ch is x than placing ch after substring

    return ch + ans; // if ch is not x than placing in front
}

// print all substring
void all_sub_str(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char curr_char = s[0];
    string ros = s.substr(1);// rest of string
    all_sub_str(ros, ans);
    all_sub_str(ros, ans + curr_char);
}

// generate substring with ascii numbers
void all_sub_str_ascii(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char curr_char = s[0];
    int ascii = curr_char;
    string ros = s.substr(1);

    all_sub_str_ascii(ros,ans);
    all_sub_str_ascii(ros,ans+curr_char);
    all_sub_str_ascii(ros,ans+to_string(ascii));
    return;
}

// global array
string keypad_arr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

// print all possible words from keypad phone
void print_keypad(string s, string ans){
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypad_arr[ch-'0'];
    string ros = s.substr(1);

    for(int i = 0;i<code.length();i++){
        print_keypad(ros, (ans + code[i]));
    }

}

int main()
{

    // cout << reverse_string("uhsnayvid", 0, 9, "") << endl;
    // replace_pi("pippppiiiipi",0,12,"");
    tower(5,'s','h','d');
    // cout << remove_duplicates("") << endl;
    // cout << move_x("axxbdxcefxhix") << endl;
    // all_sub_str("abc","");
    // all_sub_str_ascii("qwer","");
    // print_keypad("8898","");// donot use 0 or 1 to send arguments


    return 0;
}