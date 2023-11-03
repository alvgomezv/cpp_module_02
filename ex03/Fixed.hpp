#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_nBits = 8;
	
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);

		Fixed	operator+(const Fixed& other);
		Fixed	operator-(const Fixed& other);
		Fixed	operator*(const Fixed& other);
		Fixed	operator/(const Fixed& other);

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		bool	operator>(const Fixed& other);
		bool	operator<(const Fixed& other);
		bool	operator>=(const Fixed& other);
		bool	operator<=(const Fixed& other);
		bool	operator==(const Fixed& other);
		bool	operator!=(const Fixed& other);

		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed& min(Fixed &one, Fixed &two);
		static Fixed& max(Fixed &one, Fixed &two);
		static const Fixed& min(Fixed const &one, Fixed const &two);
		static const Fixed& max(Fixed const &one, Fixed const &two);
};

std::ostream	&operator<<(std::ostream &out, const Fixed& other);

#endif