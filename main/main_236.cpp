//
// Created by 金琪 on 2021/7/27.
//
#include <iostream>
#include "../solve/sln236.h"

using namespace std;

void printTreeNode(TreeNode *node) {
    if (node)
        cout << node->val << endl;
    else
        cout << "nullptr" << endl;
}


int main() {
    TreeNode node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8);
    node1.left = &node2;
    node1.right = &node3;
    node2.left = &node4;
    node2.right = &node5;
    node3.left = &node6;
    node3.right = &node7;
    auto ret1 = Solution().lowestCommonAncestor(&node1, &node4, &node5);
    auto ret2 = Solution().lowestCommonAncestor(&node1, &node4, &node6);
    auto ret3 = Solution().lowestCommonAncestor(&node1, &node4, &node8);
    printTreeNode(ret1);
    printTreeNode(ret2);
    printTreeNode(ret3);
}

