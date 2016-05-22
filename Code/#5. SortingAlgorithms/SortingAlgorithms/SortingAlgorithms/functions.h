#pragma once

#pragma region Sorting_Functions


// "����������� ����"
template <typename T>
void BSort(T array[], long size);

// ����������� ������������ ����������
template <typename T>
void BSort2(T array[], long size);

// ����������� ����� "����������� ����������"
long Shell(long k[], long limit);

template <typename T>
void BSortByShell(long m[], long limit, T array[], long size);


// Quick Sort
template <typename T>
void QSort(T array[],
	long first, long last);

#pragma endregion

template <typename T>
void PrintArray(T array[], long size);
