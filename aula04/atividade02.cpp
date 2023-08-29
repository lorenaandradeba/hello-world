#include <iostream>
using namespace std;
int main(void){

    cout << "'0' = " << "DEC: " << int('0') << oct <<  " - OCT: " <<  int('0') << hex <<  " - HEX: "  <<  int('0') << endl;
    cout << "'1' = " << "DEC: " << int('1') << oct <<  " - OCT: " <<  int('1') << hex <<  " - HEX: "  <<  int('1') << endl;
    cout << "'2' = " << "DEC: " << int('2') << oct <<  " - OCT: " <<  int('2') << hex <<  " - HEX: "  <<  int('2') << endl;
    cout << "'3' = " << "DEC: " << int('3') << oct <<  " - OCT: " <<  int('3') << hex <<  " - HEX: "  <<  int('3') << endl;
    cout << "'4' = " << "DEC: " << int('4') << oct <<  " - OCT: " <<  int('4') << hex <<  " - HEX: "  <<  int('4') << endl;
    cout << "'5' = " << "DEC: " << int('5') << oct <<  " - OCT: " <<  int('5') << hex <<  " - HEX: "  <<  int('5') << endl;
    cout << "'6' = " << "DEC: " << int('6') << oct <<  " - OCT: " <<  int('6') << hex <<  " - HEX: "  <<  int('6') << endl;
    cout << "'7' = " << "DEC: " << int('7') << oct <<  " - OCT: " <<  int('7') << hex <<  " - HEX: "  <<  int('7') << endl;
    cout << "'8' = " << "DEC: " << int('8') << oct <<  " - OCT: " <<  int('8') << hex <<  " - HEX: "  <<  int('8') << endl;
    cout << "'9' = " << "DEC: " << int('9') << oct <<  " - OCT: " <<  int('9') << hex <<  " - HEX: "  <<  int('9') << endl;
    char caracter;
    cout << "Digite um caracter:"<<endl;
    cin >> caracter;
    cout << caracter<<" = " << "DEC: " << int(caracter) << oct <<  " - OCT: " <<  int(caracter) << hex <<  " - HEX: "  <<  int(caracter) << endl;
    return 0;
}