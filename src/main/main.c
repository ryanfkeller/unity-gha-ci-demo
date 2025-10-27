#include <stdbool.h>
#include <stdio.h>
#include "logic.h"

int main() {
    // Struct to contain logic functions
    struct LogicFunc{
        bool (*fp)(bool, bool);
        char name[50];
    };

    // List of all our logic functions
    struct LogicFunc logic_funcs[] = {
        logic_and, "AND", 
        logic_or, "OR", 
        logic_nand, "NAND", 
        logic_nor, "NOR", 
        logic_xor, "XOR", 
        logic_xnor, "XNOR"
    };

    // Iterate through all logic functions
    for (int i = 0; i < sizeof(logic_funcs)/sizeof(logic_funcs[0]); i++) {
        printf("A B | (A %s B)\n", logic_funcs[i].name);
        printf("---------------\n");
        // Iterate through all input options
        for (int j = 0; j < 4; j++){
            bool a = j & 1;
            bool b = j & 2; 
            printf("%d %d | %d\n", a, b, logic_funcs[i].fp(a,b));
        }
        printf("\n");
    }
}

