//������������ ������ ������� �++
#include <iostream> // ������� ����������
using namespace std; //����������� ������������ ����

template <typename T> T maxFunc(T num1, T num2) { // <> - ��������� �������, ������ ��� ������, ������� �������� � ���� �������; T - ��������.
	return num1 > num2 ? num1 : num2;
}

template <typename T1, typename T2> T1 maxFunc(T1 num1, T2 num2) { // T1 ������� ��� �������, ������� ����� ����� �������� �������.
	return num1 > num2 ? num1 : num2;
}

int main() {

	setlocale(LC_ALL, "Russian");
	float n, m;
	cin >> n >> m;
	cout << maxFunc(n, m) << endl;

	return 0;
}