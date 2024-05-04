//  ��������� ��� ��������� �� ������� �����
//  �����, ����������� ���� ������ � ������ ���, ����� ��
//  ������ ������� ������������������ � �������� �������.
//  ������������ � ��������� ���������� ����������
//  ��� ����������� �� �������, � ����� �������� �������������

#include <iostream>

using namespace std;

void reverseCopyArray(int* source, int *destination, int size) {
	int* end = source + size - 1;	// ��������� �� ����� ��������� �������

	for (int i = 0; i < size; i++)
	{
		*(destination + i) = *end;	// ����������� �������� �� ��������� ������� � �������� �������
		end--;	// ����������� ��������� � ������ ��������� �������
 	}
}

//	����� �������
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
	int destinArray[5];	// �������� ������� ��� �����

	cout << "Print a source array: " << endl;
	printArray(sourceArray, size);

	reverseCopyArray(sourceArray, destinArray, size);

	cout << "Print a copy array with reversed elements: " << endl;
	printArray(destinArray, size);
}


