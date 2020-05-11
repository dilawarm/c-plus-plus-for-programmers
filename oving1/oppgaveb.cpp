#include <iostream>
#include <fstream>
using namespace std;

const char filename[] = "temperaturer";
const int length = 5;

void read_temperatures(double temperatures[], int length);

int main() {
    double temperatures[length];
    read_temperatures(temperatures, length);
    int under_ti = 0, mellom_ti_og_tjue = 0, over_tjue = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Temperatur nr " << (i+1) << ": " << temperatures[i] << endl;
        if (temperatures[i] < 10) ++under_ti;
        else if (temperatures[i] >= 10 && temperatures[i] <= 20) ++mellom_ti_og_tjue;
        else ++over_tjue;
    }

    cout << "Antall under 10 er " << under_ti << endl;
    cout << "Antall mellom 10 og 20 er " << mellom_ti_og_tjue << endl;
    cout << "Antall over 20 er " << over_tjue << endl;

    return 0;
}

void read_temperatures(double temperatures[], int length) {
    ifstream file;
    file.open(filename);

    if (!file) {
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; ++i) {
        file >> temperatures[i];
    }
    cout << "Programmet har lest inn " << length << " temperaturer." << endl;
    file.close();
}