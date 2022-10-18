//Шаблон

#include <iostream>
#include <string> // библиотека, позваоляющая работать с классом string ( cтроковые переменные )


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

		// Строковые массивы
		/*char char_str[4]{'H', 'i','!', '\n'};

			
			for (int i = 0; i < 4; i++)
				std::cout << char_str[i];



			char char_str2[]{ "Hello, world!" };
		std::cout << char_str2 << '\n';
		std::cout << char_str2[4] << '\n';*/



		//Строковые переменные String
		/*std::string str; // создание строковой переменной типа string
		std:: cout << str;
		str = "Hello, world";
		std::cout << str << '\n'; // Hello, world


		str = str = " Bye world";
		std::cout << "--------------\n";
		std::cout << str << '\n';
		std::cout << str + " WOW"; */




		//Выводы строки
		/*std::string name;
		std::cout << "Введите имя: ";
		//std::cin >> name;   // ввод до ближайшего разделителя
		std::getline(std::cin, name);
		std::cout << "Привет, " << name << "!\n";
		std::cout << "Введите возраст: ";
		short age;
		std::cin >> age;
		std::cout << age << '\n';

		std::cin.ignore();

		std::cout << "Введите должность: ";
		std::string pos;
		std::getline(std::cin, pos);
		std::cout <<  "Всегда мечтал быть! " << pos << "....\n";

		std::cout << "Пока мистер " << name[0] << ".\n";*/

		//Методы строк
		std::string str = "Hello, world!";

		//length and size. Возвращают длину строки

		//std::cout << str.length() << '\n'; //  одно и тоже что size
		//std::cout << str.size() << '\n'; // одно и тоже что length

		//insert // вставка содержимого внутр строки
		/*str.insert(3, "!!!");
		std::cout << str << '\n';*/

		//replace - замена части строки новым содержимым
		/*str.replace(3, 5, "123");
		std::cout << str << '\n';*/


		// Метод find - поиск первого вхождения подстроки в строку, возвращает индекс элемента

	/*	std::cout << str.find("o") << '\n';
		std::cout << str.find("lo") << '\n';
		std::cout << str.find("l", 5) << '\n';*/


		// Метод rfind - поиск последнего вхождения подстроки в строку
		/*std::cout << str.rfind("o") << '\n';
		std::cout << str.rfind("wo") << '\n';
		std::cout << str.rfind("l", 5) << '\n';*/

		//метод substr - возвращает подстроку, начинающуюся с переданной позиции
		/*std::cout << str.substr(3) << '\n';
		std::cout << str.substr(3, 5) << '\n';*/

		/*std::cout << "Введите число: \n";
		std::cin >> n;
		n++;
		str = std::to_string(n);
		std::cout << str + '\n';*/

		//Строка в число
		/*std::cout << "Введите число: ";
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

		//Задача 1. Повторение строки
		/*std::cout << "Task 1\nВведите строку ";
		getline(std::cin, str);
		std::cout << repeat_str(str, 5) << '\n';*/


		//Задача 2. Обнаружение СПАМа
		std::cout << "Задача 2\n Введите сообщение: ";
		getline(std::cin, str);
		if (is_spam(str))
			std::cout << "Обнаружен спам!\n";
		else
			std::cout << "Спам не обнаружен!\n";





	return 0;
}

