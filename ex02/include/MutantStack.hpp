#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

public:
            typedef typename Container::iterator iterator;
            typedef typename Container::const_iterator const_iterator;

        //Conctructor
            MutantStack( const Container& cont = Container() ) : std::stack<T, Container>(cont){
                std::cout << "Default Constructor called" << std::endl;
            }

        //Copy constructor
            MutantStack( const MutantStack& copy ) : std::stack<T, Container>(copy) {
                std::cout << "Copy Constructor called" << std::endl;
            }

        //Destructor
            ~MutantStack( void ){
                std::cout << "Destructor called" << std::endl;
            }

        // Assignement operator
            MutantStack&   operator = ( const MutantStack& src ){
                if (this != &src)
                    std::stack<T, Container>::operator=(src);
                return *this;
            }
        
        using std::stack<T, Container>::c;
        
        // Member function

            iterator begin() { return c.begin(); }
            iterator end() { return c.end(); }

            const_iterator begin() const { return c.begin(); }
            const_iterator end() const { return c.end(); }

};

#endif