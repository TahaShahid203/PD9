#include <iostream>
using namespace std;

main()
{

    int size, numberOfTimesOfTransformation;

    cout << "Enter size of array: ";
    cin >> size;


    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> array[i];
    }

    cout << "Enter the number of times you want to perform teh transformation: ";
    cin >> numberOfTimesOfTransformation;

    for (int i = 0; i < size; i++)
    {
        if (array[i]%2 == 0)
        {
            for (int j = 1; j <= numberOfTimesOfTransformation; j++)
            {
                array[i] = array[i] - 2;
            }
        }
        else
        {
            for (int j = 1; j <= numberOfTimesOfTransformation; j++)
            {
                array[i] = array[i] + 2;
            }    
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}