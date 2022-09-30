#include <iostream>
std::string ltrim (std::string&);
int main ()
{
	std::string str = " Hello";
		
	ltrim(str);

	std::cout << str << std::endl;
	
	return 0;
	
}
std::string ltrim (std::string& str)
{	
	int count = 0;
	int i = 0;

	while (str[count] != '\0')
		{
			if (str[count] != ' ')
				{
					str.erase(i,count);

					return str;
				}
			++count;		
		}
	
	
	return str;
	
} 
