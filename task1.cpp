#include <iostream>
using namespace std;


float returnPrice(string name, float quantity);

main()
{
    string nameOfFruit;
    cout << "Enter name of fruit: ";
    cin >> nameOfFruit;
    float quantityOffruit;

    cout << "Enter quantity of fruit: ";
    cin >> quantityOffruit;

    float totalPrice = returnPrice(nameOfFruit, quantityOffruit);

    cout << "Your total price is " << totalPrice << endl;

}


float returnPrice(string name, float quantity)
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    float price[4] = {60, 70, 40, 30};

    int i = 0;

    while (name != fruit[i])
    {
        i++;
    }

    float totalPrice = price[i] * quantity;

    return totalPrice;


}