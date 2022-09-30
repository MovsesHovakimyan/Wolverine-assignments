#include <iostream>
std::string rtrim (std::string&);
int main ()
{
	std::string str = "Hello ";
	
	rtrim(str);
	
	std::cout << str << "*" <<std::endl;
	
	return 0;
	
}
std::string rtrim (std::string& str)
{
	int size = str.size();
	for (int i = 0; i < size; ++i)
		{
			if (str[i] == ' ')
				{
					str[i] = '\0';
					return str;
				}
		}

	return str;

}
