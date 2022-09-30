#include <iostream>
bool endsWith (const std::string&, const std::string&);
int main ()
{
	std::string str_1 = "Hello World";
	std::string str_2 = "Hello";
	
	std::cout << endsWith(str_1, str_2) << std::endl;
	
	return 0;
}
bool endsWith (const std::string& str_1, const std::string& str_2)
{
	int size_1 = str_1.size();
	int size_2 = str_2.size();
	
	while (size_2 >= 0)
		{
			if (str_2[size_2] != str_1[size_1])
				{
					return false;
				}
			--size_1;
			--size_2;
		}
	
	return true;
	
}
