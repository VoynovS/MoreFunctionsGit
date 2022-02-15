//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
using namespace std; //Подключение пространства имен

template <typename T> T mean(T arr[], int lenght) {
	T sum = 0;
	for (int i = 0; i < lenght; i++) 
		sum += arr[i];
	return sum / lenght;
	
}


int main() {
	//Задача 1 Изначальный массив
	float z1[5] = { 5.5, 9.2, 2.5, 3.4, 1.8 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\nСреднее арифметическое элементов массива = " << mean(z1, 5) << endl;

	
	return 0;
}