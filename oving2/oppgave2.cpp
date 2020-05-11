#include <string.h>
using namespace std;

int main() {
    char *line = nullptr; // Lager en peker som peker til null
    strcpy(line, "Dette er en tekst."); // Kopierer over en tekst til beskyttet minneområde. Det går ikke, får segmenteringsfeil.
    // Må også passe på at adressen vi kopierer over til har nok plass til "Dette er en tekst."
}