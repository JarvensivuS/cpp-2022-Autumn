#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum);
int main() {
    int ylaraja;
    int laskuri = game(ylaraja);
    cout << "\nArvauksia: " << laskuri;
}
int game(int maxnum) {
    std::srand(static_cast<unsigned int>(time(0)));
    cout << "Syötä yläraja: ";
    cin >> maxnum;
    int laskuri = 0;

    while (true)  {
        int randomNum = rand();
        int userInput;
        randomNum = (randomNum % maxnum) + 1;
        cout << "\nSyötä arvaus: ";
        cin >> userInput;
        laskuri++;
        if (userInput > randomNum) {
            cout << "Satunnaisluku: " << randomNum;
            cout << "\nLuku on suurempi!";
        } else if (userInput < randomNum) {
            cout << "Satunnaisluku: " << randomNum;
            cout << "\nLuku on pienempi!";
        } else if (userInput == randomNum) {
            cout << "Satunnaisluku: " << randomNum;
            cout << "\nOikea vastaus!";
            break;
        }
        
    }
    return laskuri;
}