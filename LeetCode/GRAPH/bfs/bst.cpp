#include <iostream>

// Define the TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if (root == NULL )
        {
            return 0;
        }
          
        if (root->val <= high && root->val >=low)
         return root->val+ rangeSumBST(root->left , low , high);
        else 
         return root->val+ rangeSumBST(root->right , low , high);
        
    }
};

int main() {
    // Create a simple binary search tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    // Define the range
    int low = 7;
    int high = 15;

    // Create an instance of the Solution class
    Solution solution;

    // Call the rangeSumBST function
    int result = solution.rangeSumBST(root, low, high);

    // Print the result
    std::cout << "Sum of values in the range [" << low << ", " << high << "] is: " << result << std::endl;

    // Don't forget to free the allocated memory to avoid memory leaks
    // You may want to implement a function to delete the tree nodes

    return 0;
}
