#include <iostream>
using namespace std;


float returnPrice(string name);

main()
{
    string nameOfMovie;
    cout << "Enter name of movie: ";
    cin >> nameOfMovie;


    float totalPrice = returnPrice(nameOfMovie);

    cout << "Your total price is " << totalPrice << endl;

}


float returnPrice(string name)
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    float finalPrice;
    int i = 0;

    while (name != movies[i])
    {
        i++;
    }

    if (i%2 == 0)
    {
        finalPrice = 0.9*500;
    }
    else{
        finalPrice = 0.95*500;
    }

    return finalPrice;


}