//������

#include <iostream>
#include <string> // ����������, ������������ �������� � ������� string ( c�������� ���������� )


std::string repeat_str(std::string str, int num) {
	std::string tmp;
	for (int i = 0; i < num; i++)
		tmp += str;
	return tmp;
}


bool is_spam(std::string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	std::string spams[]{
		"100%free",
		"sales increase",
		"only today"
	};

	for (int i = 0; i < 3; i++)
		if (str.find(spams[i]) < str.length())
			return true;
			return false;
}


int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;

		// ��������� �������
		/*char char_str[4]{'H', 'i','!', '\n'};

			
			for (int i = 0; i < 4; i++)
				std::cout << char_str[i];



			char char_str2[]{ "Hello, world!" };
		std::cout << char_str2 << '\n';
		std::cout << char_str2[4] << '\n';*/



		//��������� ���������� String
		/*std::string str; // �������� ��������� ���������� ���� string
		std:: cout << str;
		str = "Hello, world";
		std::cout << str << '\n'; // Hello, world


		str = str = " Bye world";
		std::cout << "--------------\n";
		std::cout << str << '\n';
		std::cout << str + " WOW"; */




		//������ ������
		/*std::string name;
		std::cout << "������� ���: ";
		//std::cin >> name;   // ���� �� ���������� �����������
		std::getline(std::cin, name);
		std::cout << "������, " << name << "!\n";
		std::cout << "������� �������: ";
		short age;
		std::cin >> age;
		std::cout << age << '\n';

		std::cin.ignore();

		std::cout << "������� ���������: ";
		std::string pos;
		std::getline(std::cin, pos);
		std::cout <<  "������ ������ ����! " << pos << "....\n";

		std::cout << "���� ������ " << name[0] << ".\n";*/

		//������ �����
		std::string str = "Hello, world!";

		//length and size. ���������� ����� ������

		//std::cout << str.length() << '\n'; //  ���� � ���� ��� size
		//std::cout << str.size() << '\n'; // ���� � ���� ��� length

		//insert // ������� ����������� ����� ������
		/*str.insert(3, "!!!");
		std::cout << str << '\n';*/

		//replace - ������ ����� ������ ����� ����������
		/*str.replace(3, 5, "123");
		std::cout << str << '\n';*/


		// ����� find - ����� ������� ��������� ��������� � ������, ���������� ������ ��������

	/*	std::cout << str.find("o") << '\n';
		std::cout << str.find("lo") << '\n';
		std::cout << str.find("l", 5) << '\n';*/


		// ����� rfind - ����� ���������� ��������� ��������� � ������
		/*std::cout << str.rfind("o") << '\n';
		std::cout << str.rfind("wo") << '\n';
		std::cout << str.rfind("l", 5) << '\n';*/

		//����� substr - ���������� ���������, ������������ � ���������� �������
		/*std::cout << str.substr(3) << '\n';
		std::cout << str.substr(3, 5) << '\n';*/

		/*std::cout << "������� �����: \n";
		std::cin >> n;
		n++;
		str = std::to_string(n);
		std::cout << str + '\n';*/

		//������ � �����
		/*std::cout << "������� �����: ";
		std::getline(std::cin, str);
		int num = std::stoi(str);
		num++;
		std::cout << num << '\n';*/

		//to upper (.toupper)

		/*for (int i = 0; i < str.length(); i++)
			str[i] = toupper(str[i]);
		std::cout << str << '\n';*/

		// to lower ( .tolower )
		/*for (int i = 0; i < str.length(); i++)
			str[i] = tolower(str[i]);
		std::cout << str << '\n';*/

		//������ 1. ���������� ������
		/*std::cout << "Task 1\n������� ������ ";
		getline(std::cin, str);
		std::cout << repeat_str(str, 5) << '\n';*/


		//������ 2. ����������� �����
		std::cout << "������ 2\n ������� ���������: ";
		getline(std::cin, str);
		if (is_spam(str))
			std::cout << "��������� ����!\n";
		else
			std::cout << "���� �� ���������!\n";





	return 0;
}

