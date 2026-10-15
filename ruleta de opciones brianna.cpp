//realice un programa que permita simular una ruleta de opciones y que el usuario pueda elegir entre 2 opciones, 3 opciones
//4 o 10. todas las opciones deben ser ingresadas y validadas por teclado, las opciones pueden ser palabras, numeros o
//simbolos especiales. no puede usar funciones, estructuras, arreglos bidimencionales, punteros o listas. una vez listo subir al repositorio
//con una pequena descripcion

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Configurar la semilla para números aleatorios
    srand(time(0));
    
    char repetir = 's';

    do {
        // Limpiar pantalla (compatible con la mayoría de terminales modernas)
        cout << "\033[2J\033[1;1H";

        // Interfaz de bienvenida llamativa
        cout << "\n\t\t\033[1;36m========================================\033[0m\n";
        cout << "\t\t\033[1;33m       SIMULADOR DE RULETA DIGITAL      \033[0m\n";
        cout << "\t\t\033[1;36m========================================\033[0m\n\n";

        int numOpciones = 0;

        // Validación estricta para la cantidad de opciones (2, 3, 4 o 10)
        do {
            cout << "\t\t\033[1;32mIngrese la cantidad de opciones (2, 3, 4 o 10): \033[0m";
            cin >> numOpciones;

            if (numOpciones != 2 && numOpciones != 3 && numOpciones != 4 && numOpciones != 10) {
                cout << "\t\t\033[1;31m[Error] Cantidad invalida. Intente de nuevo.\033[0m\n\n";
            }
        } while (numOpciones != 2 && numOpciones != 3 && numOpciones != 4 && numOpciones != 10);

        // Arreglo unidimensional de tamaño fijo 10 para almacenar las opciones (texto/símbolos)
        string opciones[10];

        cout << "\n\t\t\033[1;35m--- INGRESO DE OPCIONES ---\033[0m\n";
        for (int i = 0; i < numOpciones; i++) {
            cout << "\t\tIngrese la opcion " << (i + 1) << " (puede ser palabra, numero o simbolo): ";
            cin >> opciones[i];
        }

        // Selección aleatoria del índice ganador
        int ganador = rand() % numOpciones;

        // Simulación visual de giro de la ruleta
        cout << "\n\n\t\t\033[1;33mGIRANDO LA RULETA...\033[0m\n\n";
        for (int t = 0; t < 15; t++) {
            int indiceTemporal = rand() % numOpciones;
            cout << "\r\t\t\033[1;44m >> [ " << opciones[indiceTemporal] << " ] << \033[0m" << flush;
            
            // Pausa simulada (bucle retardado básico)
            for (long retard = 0; retard < 50000000; retard++);
        }

        // Mostrar resultado final destacado
        cout << "\n\n";
        cout << "\t\t\033[1;32m========================================\033[0m\n";
        cout << "\t\t\033[1;33m       ¡EL GANADOR ES: " << opciones[ganador] << " !       \033[0m\n";
        cout << "\t\t\033[1;32m========================================\033[0m\n\n";

        // Preguntar si desea repetir
        cout << "\t\t¿Desea girar la ruleta otra vez? (si/no): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    cout << "\n\t\t\033[1;36m¡Gracias por usar el simulador de ruleta!\033[0m\n\n";

    return 0;
}
