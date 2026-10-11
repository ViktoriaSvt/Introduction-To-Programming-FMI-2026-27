#include <iostream>
using namespace std;

int main()
{

    int animalCount;
    int limbs;
    int chickens;
    int cows;

    cin >> animalCount;
    cin >> limbs;

    if (limbs < animalCount * 2 ||
        limbs > animalCount * 4 ||
        limbs % 2 != 0)
    {

        cout << "Limbs must be a valid number";
         return 1;
    }

     if (animalCount <= 0)
    {
        cout << "Animals must be a valid number";
        return 1;
    }

    int currentLimbs = animalCount * 2;
    cows = (limbs - currentLimbs) / 2;
    chickens = animalCount - cows;

    cout << "Cows: " << cows << endl;
    cout << "Chickens: " << chickens;
    return 0;
}