#include <iostream>
#include <libc.h>

int main()
{
    int x;
    x = 0;
    std::cin >> x;

    try
    {
        if(x == 0)
        throw  std::runtime_error("here");
        x++;
        std::cout << x<< std::endl;
    }
    catch(const std::exception &exep)
    {
        std::cerr << exep.what()<< std::endl;
    }

    
}

// #include <iostream>
// #include <stdexcept>
// using namespace std;
 
// int main()
// {
 
//     // try block
//     try {
//         int numerator = 10;
//         int denominator = 0;
//         int res;
 

//         if (denominator == 0) {
//             throw runtime_error(
//                 "Division by zero not allowed!");
//         }
 
//         // calculate result if no exception occurs
//         res = numerator / denominator;
//         //[printing result after division
//         cout << "Result after division: " << res << endl;
//     }
//     // catch block to catch the thrown exception
//     catch (const exception& e) {
//         // print the exception
//         cerr << "Exception " << e.what() << endl;
//     }
 
//     return 0;
// }
