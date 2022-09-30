#include <iostream>
#include <vector>
#include <map>
std::vector<std::string> split (const std::string&, const std::string&);
int main ()
{
	std::string str;
	std::string div;
	
	std::cout << "Please enter string." << std::endl;
	std::getline (std::cin, str);

	std::cout << "Please enter separators." << std::endl;
	std::getline (std::cin, div);
	
	split(str,div);
	
	return 0; 
	
}
std::vector<std::string> split (const std::string& str, const std::string& div)
{
	std::vector<std::string> new_str;
	std::string str_d;
	new_str.push_back(str_d);
	
	int size_str = str.size();
	int size_div = div.size();
	
	std::map<char,bool> test;
	
	for (int i = 0; i < size_div; ++i)
		{
			test[div[i]] = true;
		}
	for (int i = 0, j = 0; i < size_str; ++i)
		{
			if (!test[str[i]])
				{
					new_str[j] += str[i];
				}
			else
				{
					++j;
					std::string str_i;
					new_str.push_back(str_i);
				}
		}
	
	for (int i = 0; i < new_str.size(); ++i)
		{
			std::cout << new_str[i] << std::endl;
		}	
	
	return new_str;
	
}
