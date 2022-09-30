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
	toString(Color::Green);
	toEnum("Red"); 
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
