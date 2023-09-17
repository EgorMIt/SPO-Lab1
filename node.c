//
// Created by Egor Mitrofanov on 17.09.2023.
//

#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TreeNode **allNodes;
u_int64_t allNodesCount;

TreeNode *createNode(char *type, TreeNode *left, TreeNode *right, char *value) {
    TreeNode *node = malloc(sizeof(TreeNode));
    node->type = type;
    node->left = left;
    node->right = right;
    char *buf = malloc(1024 * sizeof(char));
    strcpy(buf, value);
    node->value = buf;
    allNodes[allNodesCount] = node;
    allNodesCount++;
    return node;
}

void printNodeId(TreeNode *node, int isRoot) {
    printf("node%d", node->id);
    if (isRoot == 1) {
        printf("{");
    } else {
        printf("([");
    }
    printf("Type: %s, Id: %d", node->type, node->id);
    if (strlen(node->value) > 0) {
        printf(", Value: %s", node->value);
    }
    if (isRoot == 1) {
        printf("}");
    } else {
        printf("])");
    }
}

void printNode(TreeNode *node) {
    if (node->left) {
        printNodeId(node, 0);
        printf(" --> ");
        printNodeId(node->left, 0);
        printf("\n");

        printNode(node->left);
    }
    if (node->right) {
        printNodeId(node, 0);
        printf(" --> ");
        printNodeId(node->right, 0);
        printf("\n");

        printNode(node->right);
    }
}

void printTreeNode() {
    for (int i = 0; i < allNodesCount; ++i) {
        allNodes[i]->id = i;
    }
    printf("```mermaid\nflowchart TB\n");
    printNode(allNodes[allNodesCount - 1]);

    printNodeId(allNodes[allNodesCount - 1], 1);
    printf("\n```\n");
}