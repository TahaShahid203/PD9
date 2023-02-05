#include <iostream>
using namespace std;

string array[4];

bool sameOrNot();
main()
{

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter string: ";
        cin >> array[i]; 
    }

    if (sameOrNot())
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

}



bool sameOrNot()
{
    bool result = true;
    for (int i = 1; i < 4 ; i++)
    {
        if (array[i] != array[i-1])

        {
            result = false;
            break;
        }

    }

    return result;
}