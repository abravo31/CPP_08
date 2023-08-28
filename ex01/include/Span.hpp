#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
# include <limits>
# include <ctime>
# include <cstdlib>
# include <set>

class Span{
    public:
        //Conctructor
            explicit Span( unsigned int N );

        //Copy constructor
            Span( const Span& copy );

        //Destructor
            ~Span( void );

        // Assignement operator
            Span&   operator = ( const Span& src );
        
        // Member function
            void            addNumber( unsigned int numberToAdd );

            template <class InputIterator>
            void            addRangeIterators( InputIterator first, InputIterator last );

            unsigned int    shortestSpan();
            unsigned int    longestSpan();

    private:
            const unsigned int  _maxSize;
            std::vector<int>    _elems;
};

template <class InputIterator>
void    Span::addRangeIterators( InputIterator first, InputIterator last ){

    this->_elems.insert(this->_elems.end(), first, last);
    if (this->_elems.size() > this->_maxSize)
        throw std::out_of_range("Maximum number of items reached.");
}

#endif