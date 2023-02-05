#include <iostream>
using namespace std;

main()
{
    int index;
    bool flag = true;
    string Moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    char pin[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string pinDance;
    int pinFinal[4];
    string danceMoves[4];

    cout << "Enter pin code: ";
    cin >> pinDance;

    for (int i = 0; i < 4; i++)
    {
        if (!flag)
        {
            break;
        }
        flag = false;
        for (int j = 0; j < 10; j++)
        {
            if (pinDance[i] == pin[j])
            {
                pinFinal[i] = j;
                flag = true;
            }

        }
    }

    if (flag)
    {
        for (int i = 0; i < 4; i++)
        {
            index = pinFinal[i] + i;
            index = index % 10;
            danceMoves[i] = Moves[index];
        
            cout << danceMoves[i] << " ";
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}