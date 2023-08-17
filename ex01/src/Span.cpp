#include "Span.hpp"

//Conctructor
Span::Span( unsigned int N ) : _maxSize(N){
    std::cout << "Constructor with unsigned int parameter called" << std::endl;
}

//Copy constructor
Span::Span( const Span& copy ) : _maxSize(copy._maxSize), _elems(copy._elems){
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
    
    if (_elems.size() <= 1)
        throw std::runtime_error("Not enough elements in the Span.");
    
    std::vector<int> copy(_elems);
    std::sort(copy.begin(), copy.end());
    
    long shortest = std::numeric_limits<long>::max();
    for (unsigned int i = 0; i < copy.size() - 1; i++){
        if ( copy[i + 1] - copy[i] < shortest )
            shortest = copy[i + 1] - copy[i];
    }
    return (static_cast<unsigned int>(shortest));
}

unsigned int    Span::longestSpan(){

    if (_elems.size() <= 1)
        throw std::runtime_error("Not enough elements in the Span.");
    
    std::vector<int> copy(_elems);
    std::sort(copy.begin(), copy.end());
    
    long longest = *copy.rbegin() - *copy.begin();
    return (static_cast<unsigned int>(longest));

}