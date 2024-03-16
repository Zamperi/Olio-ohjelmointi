#include <iostream>
#include <cstdlib> // Hox uusi kirjasto!

using namespace std;

void randomNumberSequence(int seedNumber) {
    // Asetetaan siemenluku
    srand(seedNumber);

    for (int i = 0; i<5;i++){
        int randomNumber = rand() % 20;
        cout<<randomNumber<<endl;
    }
}

int main() {
    randomNumberSequence(54);
    return 0;
}
