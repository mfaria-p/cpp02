#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int					_value;
    static const int	_fractionalBits = 8;
public:
    Fixed(); //default constructor
    Fixed(const Fixed &fixed); //copy constructor
    ~Fixed(); //destructor
    Fixed &operator=(const Fixed &fixed); //copy assignment operator overload
    int getRawBits(void) const; //returns the raw value of the fixed-point number
    void setRawBits(int const raw); //sets the raw value of the fixed-point number
};

#endif