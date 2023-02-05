#include <iostream>
using namespace std;

bool isEven(string word);

main()
{
    string word;
    bool result;


    cout << "Enter string: ";
    cin >> word;

    result = isEven(word);

    if (result)
    {
        cout << "true" << endl;
    }

    else 
    {
        cout << "false" << endl;
    }


}


bool isEven(string word)
{
    int length = word.length();

    if (length%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    return 0;
}