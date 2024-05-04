//  ��������� ��� ��������� �� ������ �����
//  �����, ����������� ���� ������ � ������.
//  ������������ � ��������� ���������� ���������� ��� �����������
//  �� �������, � ����� �������� �������������

#include <iostream>

using namespace std;

//  ������� ��� ����������� ������� source � destination
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

//  ������� ��� ������ �������
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {

    int sourceArray[] = { 11,22,33,44,55 };       //  source ������
    int destinationArray[5];                      //  destination ������
    printArray(sourceArray, 5);                   //  ����� source �������
    printArray(destinationArray, 5);              //  ����� destination ������� �� �����������(� ��� ��� ������� ��������� �������)
    copyArray(sourceArray, destinationArray, 5);  //  ����������� �������  
    printArray(destinationArray, 5);              //  ����� �������������� ������� destination
    return 0;
}
