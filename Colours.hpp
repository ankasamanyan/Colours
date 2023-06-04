#ifndef	COLOURS_H
	#define COLOURS_H
#include <iostream>
# define CPP_IS_PAIN	1
# define RESET			"\033[0m"
# define BLACK			"\033[0;30m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define YELLOW			"\033[0;33m"
# define PURPLE			"\033[0;34m"
# define PINK			"\033[0;35m"
# define SKY			"\033[0;36m"
# define ORANGE			"\033[38;2;255;165;0m"
# define ON_RED 		"\033[41m"
# define ON_PURPLE		"\033[44m"
# define ON_PINK		"\033[45m"
# define RESET_LINE 	RESET << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

void	printMsg(std::string stringy, std::string colour);

#endif

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}
