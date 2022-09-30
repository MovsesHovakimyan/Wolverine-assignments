#include <iostream>
std::string toLowerCase (std::string&);
int main ()
{
	std::string str = "HELLo";
	
	toLowerCase(str);
	
	std::cout << str << std::endl;
	
	return 0;
	
}
std::string toLowerCase (std::string& str)
{
	int i = 0;
	
	while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += 32;
				}
			++i;
		}
	
	return str;
	
}
