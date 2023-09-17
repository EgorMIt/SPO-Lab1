//
// Created by Egor Mitrofanov on 17.09.2023.
//

#ifndef SPO_LAB1_NODE_H
#define SPO_LAB1_NODE_H

typedef struct TreeNode TreeNode;

struct TreeNode {
    char *type;
    TreeNode *left;
    TreeNode *right;
    char *value;
    int id;
};

void printTreeNode();

TreeNode *createNode(char *type, TreeNode *left, TreeNode *right, char *value);

#endif //SPO_LAB1_NODE_H
