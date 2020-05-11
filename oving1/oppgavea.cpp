#include <iostream>
using namespace std;

const int length = 5;

int main() {
    cout << "Du skal lese inn " << length << " temperaturer." << endl;
    double temperatur;
    int under_ti = 0, mellom_ti_og_tjue = 0, over_tjue = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Temperatur nr " << (i+1) << ": ";
        cin >> temperatur;
        if (temperatur < 10) ++under_ti;
        else if (temperatur >= 10 && temperatur <= 20) ++mellom_ti_og_tjue;
        else ++over_tjue;
    }

    cout << "Antall under 10 er " << under_ti << endl;
    cout << "Antall mellom 10 og 20 er " << mellom_ti_og_tjue << endl;
    cout << "Antall over 20 er " << over_tjue << endl;

    return 0;
}