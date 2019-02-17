#include <stdio.h>
#include "../headers/MyFunctions.h"

int main(int argc, char const *argv[]){
  int firstvalue = 5, secondvalue = 15, result = 0;
    int * p1, * p2;

    //Example 1 - Assign a memory location to a pointer
    p1 = &firstvalue;   // Assign the memory address of the variable firstvalue to p1
    p2 = &secondvalue;  // Assign the memory address of the variable secondvalue to p2
    printf("Example 1 - Assign a memory location to a pointer\n");
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n\n", *p2);

    //Example 2 - Assign a value to a memory location being pointed at by a pointer
    *p1 = 10;   // Assign the value 10 to the memory location that p1 is pointing to
    printf("Example 2  - Assign a value to a memory location being pointed at by a pointer\n");
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n\n", *p2);

    //Example 3 - Assign a value being pointed at by a pointer to a memory location pointed to by another pointer
    *p2 = *p1;  // Assign the value located in the memory spot to which p2 is pointing
    printf("Example 3 - Assign a value being pointed at by a pointer to a memory location pointed to by another pointer\n");
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n\n", *p2);

    //Example 4 - Assign the memory location p2 is pointing at to p1
    p1 = p2;  //Assign the memory location p2 is pointing at to p1
    printf("Example 4 - Assign the memory location p2 is pointing at to p1\n");
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n\n", *p2);

    //Example 5 - Assing the 20 to the memory location pointed at by p1 (p2 is also pointing to the same location)
    *p1 = 20; //Assing the 20 to the memory location pointed at by p1 (p2 is also pointing to the same location)
    printf("Example 5 - Assing the value 20 to the memory location pointed at by p1 (p2 is also pointing to the same location)\n");
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n\n", *p2);

    // Example 6 - What happened to firstvalue and secondvalue?
    printf("Example 6 - What happened to firstvalue and secondvalue?\n");
    printf("p1 = %d\n", firstvalue);
    printf("p2 = %d\n\n", secondvalue);

    //Example 7 - Function call pass pointer address
    result = AddVariables(p1, p2); //
    printf("Example 7 - AddVaribles function call pass pointer address\n");
    printf("p1 = %d\n", *p1);
    printf("p2 = %d\n\n", *p2);
    printf("result = %d\n\n", result);

    //Example 8 - AddVariable function call pass variable address
    result = AddVariables(&firstvalue, &secondvalue); //
    printf("Example 8 - AddVaribles function call pass variable address\n");
    printf("p1 = %d\n", firstvalue);
    printf("p2 = %d\n\n", secondvalue);
    printf("result = %d\n\n", result);

  return 0;
}
