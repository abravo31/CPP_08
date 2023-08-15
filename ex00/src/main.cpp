#include "easyfind.hpp"

int main (){
    try{
        int arr[] = {1, 2, 3, 4, 5};
        std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
        int toSearch = 3;

        std::vector<int>::iterator res = easyfind( vec, toSearch );
        if ( res != vec.end() ){
            std::cout << "Found value " << toSearch << " at index " << std::distance(vec.begin(), res) << std::endl;
        }
        toSearch = 6;
        res = easyfind(vec, toSearch); // This should throw an exception

    } catch ( const std::exception& e){
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
}