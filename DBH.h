#pragma once
#include <iostream>
#include <string>
#include <bitset>
#include <conio.h>
#define MAX 1000

using namespace std;

class calcu {
public:
    void decimalabinario();
    void decimalahexa();
    void binarioadeci();
    void binarioahexa();
    void hexaadeci();
    void hexaabina();
};

void calcu::decimalabinario(){
    unsigned int decimal;
    const int n = 8;
    
    cout << "Escriba el numero que desee convertir: "; cin >> decimal;
    string binary = bitset<n>(decimal).to_string();
    cout << "El numero en binario es: " << binary;
    return;
    }

void calcu::decimalahexa() {
    
    int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Escriba el numero nuevamente: ";cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }
    }
    cout << "\n";
}

void calcu::binarioadeci() {

    int binario, resultado, resto = 0;
    int digito[8];

    cout << "Introduce el numero en binario: ";cin >> binario;

    for (int i = 0; i < 8; i++)
    {
        digito[i] = binario % 10;
        binario /= 10;
    }

    for (int i = 7; i >= 0; i--)
    {
        resultado = (resto * 2) + digito[i];
        resto = resultado;
    }

    cout << "El numero en decimal es: " << resultado;
}

void calcu::binarioahexa() {
    char bin[32]{ 0 };
    int dec = 0;
    char hex[32];
    cout << "\nEscribe el numero nuevamente: ";
    cin >> bin;// binnum;
    int k = 0;
    for (k = 0; k < 31; k++) if (bin[k] == 0) break;

    int a;
    for (int i = 0; i < k; i++)
    {
        if (bin[i] == 49)
        {
            a = pow(2, k - i - 1);
            dec += a;
        }
    }
    (hex, "%#32x", dec);
    cout << "El valor en hexadecimal es: \n";
    printf("%32x", dec);
    return ;
}

void calcu::hexaadeci() {
    char num[20];
    int i, r, len, hex = 0;
    cout << "Escribe el numero hexadecimal: ";
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if (num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if (num[i] >= 'a' && num[i] <= 'f')
            r = num[i] - 87;
        else if (num[i] >= 'A' && num[i] <= 'F')
            r = num[i] - 55;
        hex += r * pow(16, len);
    }
    cout << "El numero en decimal es: " << hex;
    return;
}

void calcu::hexaabina() {
    char hexadecimal[MAX];
    long int i = 0;
    cout << "Escribe el numero nuevamente: "; cin >> hexadecimal;
    cout << "Su valor en binario es: ";
    
    while (hexadecimal[i])
    {
        switch(hexadecimal[i]) {
        case '0':cout << "0000"; break;
        case '1':cout << "0001"; break;
        case '2':cout << "0010"; break;
        case '3':cout << "0011"; break;
        case '4':cout << "0100"; break;
        case '5':cout << "0101"; break;
        case '6':cout << "0110"; break;
        case '7':cout << "0111"; break;
        case '8':cout << "1000"; break;
        case '9':cout << "1001"; break;

        case 'A':
        case 'a':cout << "1010"; break;

        case 'B':
        case 'b':cout << "1011"; break;

        case 'C':
        case 'c':cout << "1100"; break;

        case 'D':
        case 'd':cout << "0100"; break;

        case 'E':
        case 'e':cout << "1110"; break;

        case 'F':
        case 'f':cout << "1111"; break;

        default:cout << "\n Valor invalido";
            hexadecimal[i];
            return;
        }
        i++;
    }
}
