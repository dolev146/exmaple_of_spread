// #include

// varargs
// https://www.tutorialspoint.com/variable-number-of-arguments-in-cplusplus
// https://stackoverflow.com/questions/11513885/c-functions-with-variable-and-not-known-number-of-arguments/11514369#11514369
// https://stackoverflow.com/questions/1657883/variable-number-of-arguments-in-c/16338804#16338804

// #include <cstdarg>
// #include <iostream>

// // Base case for recursion
// template <typename T>
// inline T sum(T n)
// {
//     return n;
// }

// // Recursive case
// template <typename T, typename... Args>
// inline T sum(T n, Args... args)
// {
//     return n + sum(args...);
// }

// double average(int num, ...)
// {
//     va_list valist; // list of argumnets
//     double sum = 0.0;
//     int i;
//     va_start(valist, num); // initialize valist for num number of arguments
//     for (i = 0; i < num; i++)
//     { // access all the arguments assigned to valist
//         sum += va_arg(valist, int);
//     }
//     va_end(valist); // clean memory reserved for valist
//     return sum / num;
// }

// // int add(...)
// // {
// //     va_list valist; // list of argumnets
// //     int sum = 0;
// //     int i;
// //     va_start(valist, num); // initialize valist for num number of arguments
// //     for (i = 0; i < num; i++)
// //     { // access all the arguments assigned to valist
// //         sum += va_arg(valist, int);
// //     }
// //     return 0;
// // }

// int main()
// {
//     int a = sum(1, 2, 3, 4, 5);
//     std::cout << a << std::endl;
// }

/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief fprintf example and fscanf example
 * @version 0.1
 * @date 2022-05-30
 *
 * @copyright Copyright (c) 2022
 *
 */
// C Program for the above approach
// #include<stdio.h>
// int main()
// {
//     int i, n=2;
//     char str[50];

//     //open file sample.txt in write mode
//     FILE *fptr = fopen("sample.txt", "w");
//     if (fptr == NULL)
//     {
//         printf("Could not open file");
//         return 0;
//     }

//     for (i = 0; i < n; i++)
//     {
//         puts("Enter a name");
//         scanf("%[^\n]%*c", str);
//         fprintf(fptr,"%d.%s\n", i, str);
//     }
//     fclose(fptr);

//     return 0;
// }

// C Program to demonstrate fscanf
// #include <stdio.h>

// // Driver Code
// int main()
// {
//     FILE *ptr = fopen("sample.txt", "r");
//     if (ptr == NULL)
//     {
//         printf("no such file.");
//         return 0;
//     }

//     /* Assuming that abc.txt has content in below
//        format
//        NAME    AGE   CITY
//        abc     12    hyderabad
//        bef     25    delhi
//        cce     65    bangalore */
//     char buf[100];
//     char buf2[100];
//     int a;
//     while (fscanf(ptr, "%s%d%s", buf, &a, buf2) != EOF)
//     {
//         printf("%s %d %s\n", buf, a, buf2);
//     }

//     return 0;
// }
