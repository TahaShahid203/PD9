#include <iostream>
using namespace std;


main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    string colors[size];
    int time = size * 2;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter color: ";
        cin >> colors[i];
    }

    for (int i = 1; i < size; i++)
    {
        if (colors[i] != colors[i-1])
        {
            time++;
        }
    }


    cout << time << endl;

    


}