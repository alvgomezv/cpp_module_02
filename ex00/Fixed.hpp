#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					_value;
		static const int	_nBits = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif