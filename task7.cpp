#include <iostream>
using namespace std;


main()

{
    string sentence1;
    string sentence2;

    bool flag = true;

    cout << "Enter first sentence: ";
    cin >> sentence1;

    cout << "Enter second sentence: ";
    cin >> sentence2;

    char array[sentence1.length()];

    int counter = 0;
    int l = 0;

    for (int i = 0; i < sentence1.length(); i++)
    {
        for (int j = 0; j < sentence2.length(); j++)
        {
            flag = true;
            if (sentence1[i] == sentence2[j])
            {
                for (int z = l; z < counter; z++)
                {
                    if (sentence1[i] == array[z])
                    {
                        flag = false;
                        l++;
                        break;
                    }
                }
                if (flag)
                {
                    array[counter] = sentence1[i];
                    counter++;
                }
            }
        }
    }

    cout << counter << endl;
}