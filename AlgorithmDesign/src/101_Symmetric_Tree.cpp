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
    bool isSymmetric(TreeNode* root) {

        /**
         * https://leetcode.com/problems/symmetric-tree/
         *
         * TC: O(N)
         * SC: O(H)
         */
        return helper(root, root);
    }

private:
    bool helper(TreeNode* left, TreeNode* right) {

        if (!left || !right) {
            return left == right;
        }

        if (left->val != right->val) {
            return false;
        }

        return helper(left->left, right->right) &&
               helper(left->right, right->left);
    }
};