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
            unsigned int    shortestSpan();
            unsigned int    longestSpan();

    private:
            const unsigned int  _maxSize;
            std::vector<int>    _elems;
};

#endif