#include <iostream>
#include <random>
#include <stack> // без этой функции мы создавали бы структуру/класс стека.
#include <ctime>
// Создать стек с числами в диапазоне от –50 до +50. После создания стека выполнить индивидуальное задание.
// В конце работы все стеки должны быть удалены.
// 15. Создать новый стек, в который нужно поместить элементы, лежащие во второй половине первого стека.
int main()
{
	std::stack <int> st1; // благодаря 3-ей строчке, мы можем объявить стек проще.
	std::stack <int> st2;
	srand(time(0));
	int gettingNumber = 0, size = 0;
	std::cout << "Elements of first stack: " << std::endl;
	for (size; size < 10; ++size)
	{
		gettingNumber = -50 + rand() % 101;
		st1.push(gettingNumber); // добавляем число в диапазоне -50 до +50 в первый стек.
		std::cout << st1.top() << " "; // выводим первый стек, а точнее верхний (последний) элемент стека.
	}
	std::cout << std::endl << "Elements of new stack, including the second half of the first stack: " << std::endl;

	for (int count = size; count > size / 2; --count)
	{
		st2.push(st1.top());
		st1.pop(); // удаляет верхний элемент первого стека. 
		std::cout << st2.top() << " ";
	}
	while (!st2.empty() && !st1.empty())
	{
		st1.pop();
		st2.pop();
	}

	return 0;
}