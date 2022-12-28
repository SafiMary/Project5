#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
//stl ����������
//vector- ������, ������
//forvard_list- ���������������� ������
//list- ����������(��������������� )������
//queue -������
//stack - ����
//map -���
//set -���
//
// unordered|_map - ��������������	 ���
// unordered_set - ��������������� ���
// 
//pririty_que�� - ������������ �������
//multiset
//miltimap

int main() {
	//int arr[] = { 123, 54 };
	std::vector<int> arr = { 123, 54 };
	std::vector<int> vec; //���������� ��� �������������
	arr.push_back(670);//��������� ����� � ����� �������
	arr.reserve(20);//��������� ������ ��� ��������� �������
	arr.shrink_to_fit();//����� ����������� �� size
	for (size_t i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	//std::vector<int>::iterator it;
	std::cout << "===================================================\n";
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end();it++) {//iterator ��������� �� �������� �������
		std::cout << *it << " ";
	}
	std::cout << '\n';
	std::vector<int> abc(10, 3);// � ������� ����� ������ 10 ����� (����������, ��� �� ��������)
	for (size_t i = 0; i < abc.size(); i++) {
		std::cout << abc[i] << " ";
	}
	std::cout << '\n';
	std::cout << "arr size: " << arr.size() << std::endl;//������(��� �� ���������)
	std::cout << "arr capacity: " << arr.capacity() << std::endl;//�����������(������� ��������� ��� ����� �����)
	std::cout << "===================================================\n";
	std::cout << "===================================================\n";
	std::cout << "===================================================\n";

	std::vector<int> my_vector = { 42, 65, 77 };
	std::cout << *my_vector.begin() << std::endl;// begin ��������� �� ������ �������
	//std::cout << *my_vector.end() << std::endl;// end ����� ������� ������� �� ������� �������, ����� ���������� ��� �����
	my_vector.emplace(my_vector.begin() + 1, 33);// ��������� ������� � ������ �������, ���� ���� �������� 
	for (size_t i = 0; i < my_vector.size(); i++) {//+1 ����� ������� �� ����� 1 ��������
		std::cout << my_vector[i] << " ";
	}
	std::cout << '\n';
	std::cout << "===================================================\n";
	my_vector.erase(my_vector.begin() + 1); //�������� ��������

	//��������� �� �������
	// random access (��������� ������) O(1): const ����� ������ ���� � ���� ���-�� ������� ��������
	// �������/ �������� O(n) , n == vector.size()  ������� �� ������� ������� � �� �(���� ����� �������� � �������)
	//��� ������ ���������� ����� ��� ������ ����� �������(��� ������ ������ �������, ��� ������ �������)
	//[][][][][]///[][][][][] memmove
	//���������� ��������� �(n^2)   � �� � � ��������(���� ����� �������� � ������� � ��������)������� ���������

	std::vector<std::vector<int>> vec2d(5, std::vector<int>(10,3));//� ������� ����� 5 �����, � 10 �������� � ��������

	//std::vector<std::vector<std::string
	/*std::tuple<int, std::string, double> t = {1, "hello, 5.4"};
	std::tuple<std::tuple<int, std::string, double>> re(5, std::tuple)
	std::get<2>(t);*/
	for (size_t i = 0; i < vec2d.size(); i++) {//+1 ����� ������� �� ����� 1 ��������
		for (size_t j = 0; j < vec2d[i].size(); j++){
		std::cout << vec2d[i][j] << " ";
	}
		std::cout << std::endl;
	}

	std::queue<int> q;// FIFO ������� ��� ������ �����, ������ � ��������� 
	q.push(5);
	q.push(3);
	q.push(1);
	std::cout << "q.front(): " << q.front() << std::endl;//5 
	q.pop();//������ ������ �������
	std::cout << "q.front(): " << q.front() << std::endl;//3 
	q.push(4);
	q.push(8);
	q.push(55);
	//����� � �������� ���������. ��� ��������� ����� O(1)
	while (!q.empty()) {// ���� q(�������) �� ������
		std::cout << q.front() << " ";// front ���������� ��� ������� 
		q.pop();
	}

	std::stack<std::string> my_stack;//LIFO ��� ��������� �����, ��� ������ ������

	my_stack.push("Hello");
	my_stack.push("How are you?");
	my_stack.push("bye");
	std::cout << std::endl;
	while (!my_stack.empty()) {//����  ������ �� ������
		std::cout << my_stack.top() << " "; //top ���������� ��� �������
		my_stack.pop();
	}

	//map  ������� �� key value
    //������������� ��������� ������ � ���� ���� ���� � ��������,
	//���� ������ ���� ����������,� �������� ����� ����������
	//����� ������� �������� 
	//��������� ������� �(logN)
	std::map<int, std::string> my_map;
	my_map.insert({ 1, "Vadim" });
	my_map.insert({ 2, "Dima" });
	my_map.insert({ 3, "Vlad" });
	my_map.insert({ 42, "Cot" });
	std::cout << "===================================================\n";
	std::cout << my_map[1] << std::endl;
	std::cout << my_map[42] << std::endl;

}