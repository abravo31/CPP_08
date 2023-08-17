#include "Span.hpp"

//Conctructor
explicit Span::Span( unsigned int N ) : _maxSize(N){
    std::cout << "Constructor with unsigned int parameter called" << std::endl;
}

//Copy constructor
Span::Span( const Span& copy ) : _elems(copy._elems), _maxSize(copy._maxSize){
    std::cout << "Copy Constructor called" << std::endl;
}

//Destructor
Span::~Span( void ){
    std::cout << "Destructor called" << std::endl;
}

// Assignement operator
Span&  Span::operator = ( const Span& src ){

    if( this != &src )
        _elems = src._elems;
    return *this;
}
        
// Member function
void    Span::addNumber( unsigned int numberToAdd ){

    if ( _elems.size() >= _maxSize )
        throw std::runtime_error("Maximum capacity reached.");
    _elems.push_back(numberToAdd);
}

unsigned int    Span::shortestSpan(){
    
}

unsigned int    longestSpan();