#include <iostream>
#include <algorithm>// for sort function
using namespace std;

// parametrized
/*
str.append(str1)                |       concatination of str with str1
str.compare(str1)               |       comparing str with str2 return positive, negative or 0 value according to ascii table
str.erase(index, noOfLetters)   |       erase string with noOfLetters starting from index               
str.find(str1)                  |       give the index of the first occurence of str1 in str 
str.insert(index, str1)         |       insert str1 at index
str.substr(index, noOfLetters)  |       give string with noOfLetters from index
stoi(str)                       |       type convert from string to interger
to_string(interger)             |       type convert from integer to string
*/

// non parametrized
/*
str.clear()                     |       clear the string from str variable return blank string
str.empty()                     |       return 1 or 0 based on string is empty or not
str.length()                    |       return the length of string
str.size()                      |       same reture the length of string
str.begin()                     |       give the starting iterator of string
str.end()                       |       give the ending + 1 iterator
*/

// string declaration and defination
void str_dec_def_1()
{
    string str(5, 'a'); // decare a string with 5 'a's
    cout << str << endl;
}

void str_dec_def_2()
{
    string str1 = "this_is_another_way"; // space should not be used
    cout << str1 << endl;
}

// string input
void str_input_1()
{
    string str3;
    getline(cin, str3); // this will use when there is space between words
    cout << str3 << endl;
}

void str_input_2()
{
    string str2;
    cin >> str2; // this will take only one word
    // means after encounter space it stop taking input
    cout << str2 << endl;
}

// string concatination
void concat_1()
{
    string a, b;
    a = "hello ";
    b = "world!";

    // no overwriting of variable
    cout << a + b << endl; // this will output the concatinated string
}

void concat_2()
{
    string a, b;
    a = "hello ";
    b = "world!";

    // variable is overwritten
    a.append(b); // here concatined string store in the a variable
    cout << a << endl;
}

// clearning string
void str_clear()
{
    string str = "today is raining";
    cout << str << endl;
    str.clear();         // this will empty the string
    cout << str << endl; // this will print the empty string
}

// string comparison
void str_compare()
{
    string s1 = "abc";
    string s2 = "bbc";
    cout << s1.compare(s2) << endl; // s1<s2
    cout << s2.compare(s1) << endl; // s2>s1
}

// this will return 1 or 0, if string is empty or not
int check_empty(string str)
{
    if (str.empty() == 0) // means not empty string
        return 0;
    else
        return 1;
}

// earse in string
void str_erase(){
    string str = "divyaannshu";
    str.erase(5,2);// erase two character from index 5
    cout<<str<<endl;
}

// find substring in string
void sub_str(){
    string str = "hello";
    cout<<str.find("llo")<<endl;// returns the index of the first encounter with the word aka substring
}

// insert string in string
void insert_str_in_between(){
    string str = "fill the blank";
    str.insert(5,"in ");// insert substring at index
    cout<<str<<endl;
}

// find the length of the string
void string_length(){
    string str = "cpp";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
}

// string slicing or substring from a string
void string_slicing(){
    string str = "substring";
    cout<<str.substr(6,4);// 4 letters from 6th index 
}

// type conversion from string to interger
void str_num(){
    string str = "786";
    int a = 5;
    int b = stoi(str);
    cout<<a+b<<endl;
}

// type conversion from integer to string
void num_str(){
    int a = 786;
    string str = to_string(a);
    cout<<str+"45"<<endl;
}

// sorting character in string
void str_sort(){
    string str = "agfdsfrewrvbcbdrrsfvx";
    sort(str.begin(), str.end());
    cout<<str<<endl;
}


int main()
{   
    str_sort();
    return 0;
}