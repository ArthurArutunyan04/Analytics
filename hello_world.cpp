#include<iostream>

// Основная функция программы 
int main(){
	string name;
	// Ввод имени пользователя
	std::cout << "Введите имя: ";
	std::cin >> name;
	// Вывод сообщения
	std::cout << "Hello World from @" << name << std::endl;
	return 0;
}