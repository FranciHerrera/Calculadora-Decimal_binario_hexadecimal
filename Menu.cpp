#include <iostream>
#include "DBH.h"

using namespace std;

int main()
{
    int opcion;
    calcu obj;
    do {
        cout << "-------------------------------------\n";
        cout << "Bienvenido\n";
        cout << "-------------------------------------\n";
        cout << "Que quieres hacer? \n";
        cout << "1 - Decimal a binario y hexadecimal \n";
        cout << "2 - Binario a decimal y hexadecimal \n";
        cout << "3 - Hexadecimal a decimal y binario \n";
        cout << "4 Salir del programa";
        cout << "---------------------------------- \n";
        cout << "Opcion: \n";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            obj.decimalabinario();
            cout << "\n";
            obj.decimalahexa();
            cout << "\n Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                system("cls");
                break;
            }
            else {
                return 0;
            }
        case 2:
            system("cls");
            obj.binarioadeci();
            cout << "\n";
            obj.binarioahexa();
            cout << "\n Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                system("cls");
                break;
            }
            else {
                return 0;
            }
        case 3:
            system("cls");
            obj.hexaadeci();
            cout << "\n";
            obj.hexaabina();
            cout << "\n Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                system("cls");
                break;
            }
            else {
                return 0;
            }
        case 4:
            return 0;
        default:
            cout << "\n No disponible \n";
            system("pause");
            system("cls");
            break;
        }
    } while (opcion != 4);
}