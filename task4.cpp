#include <iostream>
using namespace std;

int array[1];


string boomOrNot(int size);

main()
{
    int size;
    cout << "Enter how many numbers you wish to enter: ";
    cin >> size;

    array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> array[i]; 
    }

    cout << boomOrNot(size) << endl;
}



string boomOrNot(int size)
{
    string result = "There is no 7";
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 7)
        {
            result = "Boom!";
        }

    }

    return result;
}