#include "main.h"
#include <stdio.h>
#include "node.h"

extern TreeNode **allNodes;
extern u_int64_t allNodesCount;

int main(int argc, char *argv[]) {
    allNodes = malloc(1024 * sizeof(TreeNode *));
    allNodesCount = 0;

    if (argc > 1) {
        FILE *input_file = fopen(argv[1], "r");
        if (input_file) {
            yyin = input_file;

            yyparse();

            fclose(input_file);

            printTreeNode();
        } else {
            printf("Error opening file: %s\n", argv[1]);
        }
    } else {
        printf("Usage: %s <input_file>\n", argv[0]);
    }
    return 0;
}
