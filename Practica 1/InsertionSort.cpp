#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void insertionSort(vector<T>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        T key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template <typename T>
void printarreglo(const vector<T>& arreglo) {
    int size = arreglo.size();
    for (int i = 0; i < size; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    //Ejemplos
    vector<int> arreglo = {3,9,2,10,5,7,11};
    cout << "Ejemplo 1\nVector original: ";
    printarreglo(arreglo);
    insertionSort(arreglo);
    cout << "Vector ordenado: ";
    printarreglo(arreglo);

    vector<char> arreglo2 = {'z','b','g','c','a','f','d',};
    cout << "\nEjemplo 2\nVector original: ";
    printarreglo(arreglo2);
    insertionSort(arreglo2);
    cout << "Vector ordenado: ";
    printarreglo(arreglo2);
    return 0;
}
