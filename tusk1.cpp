#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() 
{
	std::ofstream file("tut.txt", std::ios::app );
	std::string name, name1, date;
	int deposit;
	std::cin >> name >> name1 >> date >> deposit;
	file << name << " " << name1 << " " << date << " " << deposit << std::endl;
	file.close();
	cout << "huy" << endl;
}
