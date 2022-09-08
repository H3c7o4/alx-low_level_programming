#include<stdio.h>
int main()
{
	    char charType;
	    int intType;
	    Long int Long_intType;
	    Long Long int Long_Long_intType;
	    float floatType;
		        

        // sizeof evaluates the size of a variable
	    printf("Size of char: %zu byte\n", sizeof(charType));
            printf("Size of int: %zu bytes\n", sizeof(intType));
            printf("Size of Long int: %zu byte\n", sizeof(Long_intType));
            printf("Size of Long Long int: %zu byte\n", sizeof(Long_Long_intType));
            printf("Size of float: %zu bytes\n", sizeof(floatType));
	    return 0;
}
