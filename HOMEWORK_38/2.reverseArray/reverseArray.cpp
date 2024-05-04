// 
//

#include <iostream>

using namespace std;

void reverseArray(int* array, int size) {
    int* start = array;             // ”казатель на начало массива
    int* end = array + size - 1;    // ”казатель на конец массива

    while (start < end)
    {
        // ќбмен значений двух элементов массива через временную переменную
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int array[] = { 11,22,33,44,55 };
    int size = 5;
    cout << "Source array:\t";
    printArray(array, size);

    reverseArray(array, size);

    cout << "Reversed array:\t";
    printArray(array, size);

}

