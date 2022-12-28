#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
//stl контейнеры
//vector- вектор, массив
//forvard_list- однонаправленный список
//list- двусвязный(двунаправленный )список
//queue -очеред
//stack - стек
//map -мап
//set -сет
//
// unordered|_map - несортированны	 мап
// unordered_set - несортированный сет
// 
//pririty_queгу - приоритетная очередь
//multiset
//miltimap

int main() {
	//int arr[] = { 123, 54 };
	std::vector<int> arr = { 123, 54 };
	std::vector<int> vec; //объявление без инициализации
	arr.push_back(670);//добавляет число в конец массива
	arr.reserve(20);//выделение памяти для элементов массива
	arr.shrink_to_fit();//ужать вместимость до size
	for (size_t i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	//std::vector<int>::iterator it;
	std::cout << "===================================================\n";
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end();it++) {//iterator указывает на элементы вектора
		std::cout << *it << " ";
	}
	std::cout << '\n';
	std::vector<int> abc(10, 3);// в векторе будет лежать 10 троек (количество, что за элементы)
	for (size_t i = 0; i < abc.size(); i++) {
		std::cout << abc[i] << " ";
	}
	std::cout << '\n';
	std::cout << "arr size: " << arr.size() << std::endl;//размер(кол во элементов)
	std::cout << "arr capacity: " << arr.capacity() << std::endl;//вместимость(сколько элементов еще может войти)
	std::cout << "===================================================\n";
	std::cout << "===================================================\n";
	std::cout << "===================================================\n";

	std::vector<int> my_vector = { 42, 65, 77 };
	std::cout << *my_vector.begin() << std::endl;// begin указывает на первый элемент
	//std::cout << *my_vector.end() << std::endl;// end метод который выходит за пределы вектора, чтобы определить его конец
	my_vector.emplace(my_vector.begin() + 1, 33);// добавляет элемент в начало вектора, либо если добавить 
	for (size_t i = 0; i < my_vector.size(); i++) {//+1 будет ставить на место 1 элемента
		std::cout << my_vector[i] << " ";
	}
	std::cout << '\n';
	std::cout << "===================================================\n";
	my_vector.erase(my_vector.begin() + 1); //удаление элемента

	//Сложность по времени
	// random access (случайный доступ) O(1): const время всегда одно и тоже кол-во времени занимает
	// вставка/ удаление O(n) , n == vector.size()  зависит от размера вектора О от н(макс время занимает н времени)
	//чем больше переносить вещей тем больше нужно времени(чем больше размер вектора, тем больше времени)
	//[][][][][]///[][][][][] memmove
	//существует сложность О(n^2)   О от н в квадрате(макс время занимает н времени в квадрате)опасная сложность

	std::vector<std::vector<int>> vec2d(5, std::vector<int>(10,3));//в массиве будет 5 строк, и 10 столбцов с тройками

	//std::vector<std::vector<std::string
	/*std::tuple<int, std::string, double> t = {1, "hello, 5.4"};
	std::tuple<std::tuple<int, std::string, double>> re(5, std::tuple)
	std::get<2>(t);*/
	for (size_t i = 0; i < vec2d.size(); i++) {//+1 будет ставить на место 1 элемента
		for (size_t j = 0; j < vec2d[i].size(); j++){
		std::cout << vec2d[i][j] << " ";
	}
		std::cout << std::endl;
	}

	std::queue<int> q;// FIFO очередь кто первый зашел, первый и выведится 
	q.push(5);
	q.push(3);
	q.push(1);
	std::cout << "q.front(): " << q.front() << std::endl;//5 
	q.pop();//удалил первый элемент
	std::cout << "q.front(): " << q.front() << std::endl;//3 
	q.push(4);
	q.push(8);
	q.push(55);
	//вывод и удаление элементов. тут сложность будет O(1)
	while (!q.empty()) {// пока q(очередь) не пустая
		std::cout << q.front() << " ";// front показывает что наверху 
		q.pop();
	}

	std::stack<std::string> my_stack;//LIFO кто последний зашел, тот первый выйдет

	my_stack.push("Hello");
	my_stack.push("How are you?");
	my_stack.push("bye");
	std::cout << std::endl;
	while (!my_stack.empty()) {//пока  строка не пустая
		std::cout << my_stack.top() << " "; //top показывает что наверху
		my_stack.pop();
	}

	//map  состоит из key value
    //ассоциативный контейнер хранит в себе пары ключ и значение,
	//ключ обязан быть уникальным,а значение может повторятся
	//можно хранить значение 
	//сложность вставки О(logN)
	std::map<int, std::string> my_map;
	my_map.insert({ 1, "Vadim" });
	my_map.insert({ 2, "Dima" });
	my_map.insert({ 3, "Vlad" });
	my_map.insert({ 42, "Cot" });
	std::cout << "===================================================\n";
	std::cout << my_map[1] << std::endl;
	std::cout << my_map[42] << std::endl;

}