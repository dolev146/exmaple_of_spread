// #include

// varargs
// https://www.tutorialspoint.com/variable-number-of-arguments-in-cplusplus
// https://stackoverflow.com/questions/11513885/c-functions-with-variable-and-not-known-number-of-arguments/11514369#11514369
// https://stackoverflow.com/questions/1657883/variable-number-of-arguments-in-c/16338804#16338804

#include <cstdarg>
#include <iostream>

// Base case for recursion
template <typename T>
inline T sum(T n)
{
    return n;
}

// Recursive case
template <typename T, typename... Args>
inline T sum(T n, Args... args)
{
    return n + sum(args...);
}

double average(int num, ...)
{
    va_list valist; // list of argumnets
    double sum = 0.0;
    int i;
    va_start(valist, num); // initialize valist for num number of arguments
    for (i = 0; i < num; i++)
    { // access all the arguments assigned to valist
        sum += va_arg(valist, int);
    }
    va_end(valist); // clean memory reserved for valist
    return sum / num;
}

// int add(...)
// {
//     va_list valist; // list of argumnets
//     int sum = 0;
//     int i;
//     va_start(valist, num); // initialize valist for num number of arguments
//     for (i = 0; i < num; i++)
//     { // access all the arguments assigned to valist
//         sum += va_arg(valist, int);
//     }
//     return 0;
// }

int main()
{
    int a = sum(1, 2, 3, 4, 5);
    std::cout << a << std::endl;
}