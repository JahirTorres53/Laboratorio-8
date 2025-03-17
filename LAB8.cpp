#include <iostream>
using namespace std;

// Clase para verificar si un número es primo
class Primo {
private:
    int numero;
public:
    Primo(int numeroaDeterminarPrimo) {
        numero = numeroaDeterminarPrimo;
    }
    bool esPrimo() {
        if (numero < 2) return false;
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) return false;
        }
        return true;
    }
};

// Clase para calcular el factorial
class CalFactorial {
private:
    int numero;
public:
    CalFactorial(int numeroaDeterminarFactorial) {
        numero = numeroaDeterminarFactorial;
    }
    int calcularFactorial() {
        int resultado = 1;
        for (int i = 1; i <= numero; i++) {
            resultado *= i;
        }
        return resultado;
    }
};

// Clase para determinar si un estudiante aprueba o reprueba
class Estudiante {
private:
    int nota;
public:
    Estudiante(int estudianteApruebaoReprueba) {
        nota = estudianteApruebaoReprueba;
    }
    string resultado() {
        return (nota >= 60) ? "Aprobado" : "Reprobado";
    }
};

// Clase para verificar si un número es natural
class NumNaturales {
private:
    int numero;
public:
    NumNaturales(int siesNatural) {
        numero = siesNatural;
    }
    bool esNatural() {
        return numero > 0;
    }
};

// Clase para generar la tabla de multiplicar de un número
class TablaMultiplicar {
private:
    int numero;
public:
    TablaMultiplicar(int numerodetablaMultiplicar) {
        numero = numerodetablaMultiplicar;
    }
    void mostrarTabla() {
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    }
};

// Clase para ordenar 5 números
class OrdenarNumero {
private:
    int numeros[5];
public:
    OrdenarNumero(int num1, int num2, int num3, int num4, int num5) {
        numeros[0] = num1;
        numeros[1] = num2;
        numeros[2] = num3;
        numeros[3] = num4;
        numeros[4] = num5;
    }
    void ordenar() {
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (numeros[i] > numeros[j]) {
                    swap(numeros[i], numeros[j]);
                }
            }
        }
    }
    void mostrarNumeros() {
        for (int i = 0; i < 5; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;
    }
};

void mostrarMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Verificar si un numero es primo" << endl;
    cout << "2. Calcular el factorial de un numero" << endl;
    cout << "3. Determinar si un estudiante aprueba o reprueba" << endl;
    cout << "4. Verificar si un numero es natural" << endl;
    cout << "5. Mostrar tabla de multiplicar" << endl;
    cout << "6. Ordenar 5 numeros" << endl;
    cout << "7. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 1: {
            int num;
            cout << "Ingrese un numero: ";
            cin >> num;
            Primo p(num);
            cout << "Es primo: " << (p.esPrimo() ? "Si" : "No") << endl;
            break;
        }
        case 2: {
            int num;
            cout << "Ingrese un numero: ";
            cin >> num;
            CalFactorial f(num);
            cout << "Factorial: " << f.calcularFactorial() << endl;
            break;
        }
        case 3: {
            int nota;
            cout << "Ingrese la nota del estudiante: ";
            cin >> nota;
            Estudiante e(nota);
            cout << "Resultado: " << e.resultado() << endl;
            break;
        }
        case 4: {
            int num;
            cout << "Ingrese un numero: ";
            cin >> num;
            NumNaturales n(num);
            cout << "Es natural: " << (n.esNatural() ? "Si" : "No") << endl;
            break;
        }
        case 5: {
            int num;
            cout << "Ingrese un numero: ";
            cin >> num;
            TablaMultiplicar t(num);
            t.mostrarTabla();
            break;
        }
        case 6: {
            int num1, num2, num3, num4, num5;
            cout << "Ingrese 5 numeros: ";
            cin >> num1 >> num2 >> num3 >> num4 >> num5;
            OrdenarNumero o(num1, num2, num3, num4, num5);
            o.ordenar();
            cout << "Numeros ordenados: ";
            o.mostrarNumeros();
            break;
        }
        case 7:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida, intente de nuevo." << endl;
        }
    } while (opcion != 7);
    return 0;
}