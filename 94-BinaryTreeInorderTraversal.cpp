//Leetcode #94 - Given the root of a binary tree, return the inorder traversal of its nodes' values.
//Alexg 5/5/24

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> outArray;
        if(root)stepDeeper(outArray, root);
        return outArray;
    }
    void stepDeeper(vector<int>& arr, TreeNode* cur){
        if(cur->left) stepDeeper(arr, cur->left);
        arr.push_back(cur->val);
        if(cur->right) stepDeeper(arr, cur->right);
    }
};
