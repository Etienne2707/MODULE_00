#include "Fixed.hpp"



int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}


/*int main(void)
{

	{
		int i = 1234;
		int k = 0;
		Fixed a = Fixed(i) + Fixed(k);
		Fixed b = Fixed(i) - Fixed(k);
		Fixed c = Fixed(i) * Fixed(k);
		Fixed d = Fixed(i) / Fixed(k);

		std::cout << a << std::endl;
		std::cout << "verif :" << i + k << std::endl;
		std::cout << b << std::endl;
		std::cout << "verif :" << i - k << std::endl;
		std::cout << c << std::endl;
		std::cout << "verif :" << i * k << std::endl;
		std::cout << d << std::endl;
	}
	{
		Fixed a = Fixed(0);
		Fixed b = Fixed(10);

		std::cout << a++ << std::endl;
		std::cout << ++a << std::endl;
		std::cout << b << std::endl;
	}

	return 0;
}*/