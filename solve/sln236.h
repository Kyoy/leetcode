//
// Created by 金琪 on 2021/7/27.
//

#pragma once
#include "../include/TreeNode.h"
class Solution {
public:
    // 根据函数功能进行正向逻辑推理（二叉树公共祖先只是功能之一）
    // p和q均在root下，返回最近公共祖先
    // p和q都不在root下，返回nullptr
    // p和q仅有一个在root下，返回root
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root)
            return nullptr;
        if (root == p || root == q)
            return root;

        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (!left)
            return right;
        if (!right)
            return left;
        // if (left && right)
        //     return root;
        return root;
    }
};
