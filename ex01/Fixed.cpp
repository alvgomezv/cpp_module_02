#include"Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int number) //new one
{
	this->_value = (number << Fixed::_nBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) //new one
{
	this->_value = (int)roundf(number * (1 << Fixed::_nBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->_value;
}
void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const //new one 
{
	return((float)this->_value / (1 << Fixed::_nBits));
}

int		Fixed::toInt(void) const //new one
{
	return ((int)(roundf((float)this->_value / (1 << Fixed::_nBits))));
}

std::ostream	&operator<<(std::ostream &out, const Fixed& other) //new one
{
	out << other.toFloat();
	return out;
}


