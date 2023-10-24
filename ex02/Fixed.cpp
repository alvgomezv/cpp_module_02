#include"Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	return;
}

Fixed::Fixed(const int number)
{
	this->_value = (number << Fixed::_nBits);
}

Fixed::Fixed(const float number)
{
	this->_value = (int)roundf(number * (1 << Fixed::_nBits));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	this->_value = other.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed& other) //new one
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) //new one
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) //new one
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) //new one
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool	Fixed::operator>(const Fixed& other) //new one
{
	if (this->_value > other._value)
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& other) //new one
{
	if (this->_value < other._value)
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& other) //new one
{
	if (this->_value >= other._value)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& other) //new one
{
	if (this->_value <= other._value)
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& other) //new one
{
	if (this->_value == other._value)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& other) //new one
{
	if (this->_value != other._value)
		return true;
	return false;
}

Fixed	&Fixed::operator++(void) //new one
{
	(this->_value)++;
	return (*this);
}

Fixed	&Fixed::operator--(void) //new one
{
	(this->_value)--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed aux = *this;
	(this->_value)++;
	return (aux);
}

Fixed	Fixed::operator--(int)
{
	Fixed aux = *this;
	(this->_value)--;
	return (aux);
}


int		Fixed::getRawBits(void) const
{
	return this->_value;
}
void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return((float)this->_value / (1 << Fixed::_nBits));
}

int		Fixed::toInt(void) const
{
	return ((int)(roundf((float)this->_value / (1 << Fixed::_nBits))));
}

std::ostream	&operator<<(std::ostream &out, const Fixed& other)
{
	out << other.toFloat();
	return out;
}


