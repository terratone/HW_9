//  »спользу€ два указател€ на массив целых
//  чисел, скопировать один массив в другой.
//  »спользовать в программе арифметику указателей дл€ продвижени€
//  по массиву, а также оператор разыменовани€

#include <iostream>

using namespace std;

//  функци€ дл€ копировани€ массива source в destination
void copyArray(int* source, int* destination, int size) {
    int* sourcePtr = source;
    int* destinationPtr = destination;

    for (int i = 0; i < size; i++)
    {
        *destinationPtr = *sourcePtr;
        sourcePtr++;
        destinationPtr++;
    }
}

//  функци€ дл€ вывода массива
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {

    int sourceArray[] = { 11,22,33,44,55 };       //  source массив
    int destinationArray[5];                      //  destination массив
    printArray(sourceArray, 5);                   //  вывод source массива
    printArray(destinationArray, 5);              //  вывод destination массива до копировани€(в нем все позиции заполнены мусором)
    copyArray(sourceArray, destinationArray, 5);  //  копирование массива  
    printArray(destinationArray, 5);              //  вывод скопированного массива destination
    return 0;
}
