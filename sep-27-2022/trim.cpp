#include <iostream>
std::string trim (std::string&);
int main ()
{
	std::string str = " Hello ";
	
	trim(str);
	
	std::cout << str << std::endl;
	
	return 0;

}
std::string trim (std::string& str)
{
	int count = 0;
	int i = 0;
	
	while (str[count] == ' ')
		{
			++count;
		}
	str.erase(i,count);
	
	while (str[i] != '\0')
		{
			if (str[i] == ' ')
				{
					str[i] = '\0';
					
					return str;
				}
			++i;
		}
	
	return str;
	
}
