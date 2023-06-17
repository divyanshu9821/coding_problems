#include <iostream>
using namespace std;

// palindrome words read same from both ends like racecar same from left and right
void palindrome()
{

    int noOfLetters = 0;
    cin >> noOfLetters;

    char word[noOfLetters];

    cin >> word;

    for (int i = 0; i < noOfLetters / 2; i++)
    {
        if (word[i] != word[noOfLetters - i - 1])
        {
            cout << word << " is Not palindrome" << endl;
            return;
        }
    }

    cout << word << " is Palindrome" << endl;
}

// largest word in a sentence
void lar_word()
{
    int sen_len = 0;
    cin >> sen_len;

    cin.ignore(); // to clear buffer

    char sentence[sen_len];
    cin.getline(sentence, sen_len);

    int i = 0; // traversing index
    int words = 0;
    int max_len_word = 0;

    int st = 0, en = 0;
    while (1)
    {

        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if(max_len_word<words){
            max_len_word = words;    
            st = en;
            }
            words = 0;
            en = i+1;
        }
        
        else
        {
            words++;
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }
    cout << max_len_word << endl;
    // cout<<st<<en<<endl;
    for(int i = 0;i<=max_len_word;i++)
        cout<<sentence[i+st];
    cout<<endl;    
}

int main()
{

    // palindrome();
    lar_word();

    return 0;
}