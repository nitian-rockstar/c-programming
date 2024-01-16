#include <stdio.h>

// Function with auto storage class
void autoFunction() {
    auto int localVar = 10;  // auto is the default storage class for local variables
    printf("Auto variable in autoFunction: %d\n", localVar);
}

// Function with register storage class
void registerFunction() {
    register int regVar = 20;  // register storage class suggests the compiler to store the variable in a register
    printf("Register variable in registerFunction: %d\n", regVar);
}

// Function with static storage class
void staticFunction() {
    static int staticVar = 30;  // static retains its value between function calls
    printf("Static variable in staticFunction: %d\n", staticVar);
    staticVar++;
}

// Function with extern storage class
 int externVar=25;  // Declaration of extern variable

// Function with no storage class specified (default is extern for functions)
void noStorageClassFunction() {
    printf("Extern variable in noStorageClassFunction: %d\n", externVar);
}

int main() {
    // Definition of extern variable
    // int externVar = 25;
    auto int localVarMain = 5;  // auto is the default storage class for local variables
    printf("Auto variable in main: %d\n", localVarMain);

    autoFunction();
    registerFunction();
    staticFunction();

    noStorageClassFunction();

    return 0;
}
