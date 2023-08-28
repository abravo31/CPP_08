#include "Span.hpp"

int main(){

    try {
        Span span2(15000);

        // Génération de nombres aléatoires
        srand(static_cast<unsigned int>(time(NULL)));
        std::vector<int> uniqueNumbers;
        uniqueNumbers.reserve(15000);

        while (uniqueNumbers.size() < 15000) {
            int num = rand() % 20000;
            if (std::find(uniqueNumbers.begin(), uniqueNumbers.end(), num) == uniqueNumbers.end()) {
                uniqueNumbers.push_back(num);
            }
        }

        // Ajout des nombres au Span
        for (size_t i = 0; i < uniqueNumbers.size(); ++i) {
            span2.addNumber(uniqueNumbers[i]);
        }
        std::cout << "Shortest span: " << span2.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span2.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

     std::cout << std::endl << "-------------------------------------------------------" << std::endl << std::endl;
    try {
        Span span(5);
        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);

        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}