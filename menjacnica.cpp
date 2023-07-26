#include <iostream>
#include <vector>
using namespace std;

int main() {
    int dinar, evro;
    cin >> dinar >> evro;

    int din_suma, eur_suma;
    cin >> din_suma >> eur_suma;

    int musterije;
    cin >> musterije;

    vector<int> lista(musterije);
    for (int i = 0; i < musterije; ++i) {
        cin >> lista[i];
    }

    string kp;
    cin >> kp;

    int dinar_propusteno = 0;
    int evro_propusteno = 0;

    for (int x = 0; x < musterije; ++x) {
        if (kp[x] == 'K') {
            if (eur_suma - lista[x] < 0) {
                evro_propusteno++;
            } else {
                din_suma += lista[x] * evro;
                eur_suma -= lista[x];
            }
        } else {
            if (din_suma - lista[x] < 0) {
                dinar_propusteno++;
            } else {
                din_suma -= lista[x] * dinar;
                eur_suma += lista[x];
            }
        }
    }

    cout << dinar_propusteno << " " << evro_propusteno << " " << din_suma << " " << eur_suma << endl;

    return 0;
}
