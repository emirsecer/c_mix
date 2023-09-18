#include <iostream>
#include <string>
using namespace std;

void degistir_duvar_kagidi() {
    // Duvar kağıdı değiştirme işlemi burada gerçekleştirilir.
    cout << "Duvar kağıdı değiştirildi." << endl;
}

void degistir_yazi_tipi_boyutu() {
    // Yazı tipi boyutu değiştirme işlemi burada gerçekleştirilir.
    cout << "Yazı tipi boyutu değiştirildi." << endl;
}

bool parola_kontrol(string parola) {
    // Parola kontrolü burada gerçekleştirilir.
    return parola == "2525";
}

void kilit_ekrani() {
    // Duvar kağıdı değiştirme işlemi yapılır.
    degistir_duvar_kagidi();

    // Yazı tipi boyutu değiştirme işlemi yapılır.
    degistir_yazi_tipi_boyutu();

    // Parola kontrolü yapılır.
    string girilen_parola;
    do {
        cout << "Lütfen parolanızı girin: ";
        cin >> girilen_parola;
    } while (!parola_kontrol(girilen_parola));

    // Parola doğruysa ekrana mesaj yazılır.
    cout << "Merhaba!" << endl;
}

int main() {
    kilit_ekrani();
    return 0;
}
