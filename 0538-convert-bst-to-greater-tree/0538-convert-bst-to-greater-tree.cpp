
class Solution {
public:
    int sum = 0;

    TreeNode* convertBST(TreeNode* root) {
        if (root == NULL)
            return NULL;

        // Visit the right subtree first
        convertBST(root->right);

        // Update the current node
        sum += root->val;
        root->val = sum;

        // Visit the left subtree
        convertBST(root->left);

        return root;
    }
};

