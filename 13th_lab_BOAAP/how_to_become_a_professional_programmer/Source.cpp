#include <iostream>
#include <random>
#include <stack> // ��� ���� ������� �� ��������� �� ���������/����� �����.
#include <ctime>
// ������� ���� � ������� � ��������� �� �50 �� +50. ����� �������� ����� ��������� �������������� �������.
// � ����� ������ ��� ����� ������ ���� �������.
// 15. ������� ����� ����, � ������� ����� ��������� ��������, ������� �� ������ �������� ������� �����.
int main()
{
	std::stack <int> st1; // ��������� 3-�� �������, �� ����� �������� ���� �����.
	std::stack <int> st2;
	srand(time(0));
	int gettingNumber = 0, size = 0;
	std::cout << "Elements of first stack: " << std::endl;
	for (size; size < 10; ++size)
	{
		gettingNumber = -50 + rand() % 101;
		st1.push(gettingNumber); // ��������� ����� � ��������� -50 �� +50 � ������ ����.
		std::cout << st1.top() << " "; // ������� ������ ����, � ������ ������� (���������) ������� �����.
	}
	std::cout << std::endl << "Elements of new stack, including the second half of the first stack: " << std::endl;

	for (int count = size; count > size / 2; --count)
	{
		st2.push(st1.top());
		st1.pop(); // ������� ������� ������� ������� �����. 
		std::cout << st2.top() << " ";
	}
	while (!st2.empty() && !st1.empty())
	{
		st1.pop();
		st2.pop();
	}

	return 0;
}