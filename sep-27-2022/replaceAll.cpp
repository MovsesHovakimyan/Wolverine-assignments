#include <iostream>
std::string& replaceAll (std::string& , const std::string& , const std::string&);
int main ()
{
	std::string str_1 = "Hello World";
	std::string str_2 = "l";
	std::string str_3 = "ch";
	
	replaceAll(str_1, str_2, str_3);
	
	std::cout << str_1 << std::endl;
	
	return 0;
}
std::string& replaceAll (std::string& str_1, const std::string& str_2, const std::string& str_3)
{
	
	int size_1 = str_1.size();
	int size_2 = str_2.size();
	std::string new_str;
	
	for (int i = 0, j = 0; i < size_1; ++i)
		{
			if (str_1[i] == str_2[j])
				{
					++j;
					continue;
				}
			if (size_2 == j)
				{
					j = 0;
					new_str += str_3;
					--i;
				}
			else
				{
					new_str += str_1[i];
				}
		}
	
	str_1 = new_str;

	return str_1;
	
}
