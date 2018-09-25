#include "function.h"
void fill_array(int* arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 + 1;
}

void print_array(int* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void min_array(int* arr, int n) {
	int minNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < minNum)
			minNum = arr[i];
	}
	cout << minNum << endl;
}

void max_array(int* arr, int n) {
	int maxNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > maxNum)
			maxNum = arr[i];
	}
	cout << maxNum << endl;
}

void sort_array(int* arr, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}

void edit_array(int* arr, int n, int id) {
	if (id < n) {
		cin >> arr[id];
	}
	else
		return;
}

void fill_array(double* arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = double((rand() % 100 + 1) / (rand() % 20 + 1));
}

void print_array(double* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void min_array(double* arr, int n) {
	int minNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < minNum)
			minNum = arr[i];
	}
	cout << minNum << endl;
}

void max_array(double* arr, int n) {
	int maxNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > maxNum)
			maxNum = arr[i];
	}
	cout << maxNum << endl;
}

void sort_array(double* arr, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}

void edit_array(double* arr, int n, int id) {
	if (id < n) {
		cin >> arr[id];
	}
	else
		return;
}

void fill_array(char* arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = char(rand() % 255 + 1);
}

void print_array(char* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void min_array(char* arr, int n) {
	int minNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < minNum)
			minNum = arr[i];
	}
	cout << minNum << endl;
}

void max_array(char* arr, int n) {
	int maxNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > maxNum)
			maxNum = arr[i];
	}
	cout << maxNum << endl;
}

void sort_array(char* arr, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}

void edit_array(char* arr, int n, int id) {
	if (id < n) {
		cin >> arr[id];
	}
	else
		return;
}
