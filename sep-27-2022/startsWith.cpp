#include <iostream>
bool startsWith (const std::string&, const std::string&);
int main ()
{
	std::string str_1 = "Hello World";
	std::string str_2 = "World";
	
	std::cout << startsWith(str_1,str_2) << std::endl;

	return 0;
	
}
bool startsWith (const std::string& str_1, const std::string& str_2)
{
	int i = 0;
	
	while (str_2[i] != '\0')
		{
			if (str_1[i] != str_2[i])
				{
					return false;
				}
			++i;
		}
	
	return true;
	
}
