//  Используя два указателя на массивы целых
//  чисел, скопировать один массив в другой так, чтобы во
//  втором массиве элементынаходились в обратном порядке.
//  Использовать в программе арифметику указателей
//  для продвижения по массиву, а также оператор разыменования

#include <iostream>

using namespace std;

void reverseCopyArray(int* source, int *destination, int size) {
	int* end = source + size - 1;	// Указатель на конец исходного массива

	for (int i = 0; i < size; i++)
	{
		*(destination + i) = *end;	// Копирование значения из исходного массива в обратном порядке
		end--;	// Перемещение указателя к началу исходного массива
 	}
}

//	вывод массива
void printArray(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}

int main()
{
	int sourceArray[] = { 11,22,33,44,55 };
	int size = 5;
	int destinArray[5];	// Создание массива для копии

	cout << "Print a source array: " << endl;
	printArray(sourceArray, size);

	reverseCopyArray(sourceArray, destinArray, size);

	cout << "Print a copy array with reversed elements: " << endl;
	printArray(destinArray, size);
}


