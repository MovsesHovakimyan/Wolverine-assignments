#include <iostream>
#include <map>
std::string toString (int);
int toEnum (const std::string&);
enum Color
{
	Red,Green,Blue,Black
};
int main ()
{
	std::string _color_name;
        std::cout << "Please enter color" << std::endl;
        std::getline (std::cin, _color_name);

        int _color_index;
        std::cout << "Please enter color index" << std::endl;
        std::cin >> _color_index;

        std::cout << toString(_color_index) << std::endl;
        std::cout << toEnum(_color_name) << std::endl;

        return 0;

}
std::string toString (int a)
{
	std::map<int,std::string> _str;
	
	_str[Color::Red] = "Red";
	_str[Color::Green] = "Green";
	_str[Color::Blue] = "Blue";
	_str[Color::Black] = "Black";
	
	return _str[a];
}
int toEnum (const std::string& str)
{
	std::map<std::string,int> _enum;
	
	_enum["Red"] = Color::Red;
	_enum["Green"] = Color::Green;
	_enum["Blue"] = Color::Blue;
	_enum["Black"] = Color::Black;
	
	return _enum[str];
}
