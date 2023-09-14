#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() 
{
	std::ofstream file("tut.txt", std::ios::app );
	std::string name, name1, date;
	int deposit;
<<<<<<< HEAD
	cout << "jesus" << endl;
=======
	cout << "christ" << endl;
>>>>>>> 8efece55d72161cf78055c4f6a63ce945d4f1bcc
	std::cin >> name >> name1 >> date >> deposit;
	file << name << " " << name1 << " " << date << " " << deposit << std::endl;
	file.close();
	cout << "huy" << endl;
}
