#include <iostream>
std::string toUpperCase (std::string&);
int main ()
{
	std::string str = "Hello";
	
	toUpperCase(str);
	
	std::cout << str << std::endl;
	
	return 0;
	
}
std::string toUpperCase (std::string& str)
{
	int i = 0;
	
	while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			++i;
		} 
	
	return str;
}
