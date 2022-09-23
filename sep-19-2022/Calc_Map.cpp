#include <iostream>
#include <map>

int _Add (int, int);
int _Sub (int, int);
int _Mul (int, int);
int _Div (int, int);

int main ()
{
	int num1 = 0;
	int num2 = 0;
	char op;
	
	std::cout << "Please enter numbers" << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	
	std::cout << "Please enter operator" << std::endl;
	std::cin >> op;
	
	std::map<char,int(*)(int,int)> _Calc;
	char oper [] = {'+','-','*','/'};
	
	_Calc['+'] = &_Add;
	_Calc['-'] = &_Sub;
	_Calc['*'] = &_Mul;
	_Calc['/'] = &_Div;
	
	std::cout << _Calc[op](num1, num2) << std::endl;
	
	return 0;
	
}
int _Add (int num1, int num2)
{
	return num1 + num2;
}
int _Sub (int num1, int num2)
{
        return num1 - num2;
}
int _Mul (int num1, int num2)
{
        return num1 * num2;
}
int _Div (int num1, int num2)
{
        return num1 / num2;
}
