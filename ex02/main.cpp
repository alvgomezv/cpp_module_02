#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10);
	Fixed d(6.25f);

	std::cout << (c > d) << std::endl;		//1
	std::cout << (c < d) << std::endl;		//0
	std::cout << (c >= d) << std::endl;		//1
	std::cout << (c <= d) << std::endl;		//0
	std::cout << (c == d) << std::endl;		//0
	std::cout << (c != d) << std::endl;		//1
	std::cout << std::endl;

	std::cout << (c + d) << std::endl;		//16.25
	std::cout << (c - d) << std::endl;		//3.75
	std::cout << (c * d) << std::endl;		//62.5
	std::cout << (c / d) << std::endl;		//1.60156
	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}