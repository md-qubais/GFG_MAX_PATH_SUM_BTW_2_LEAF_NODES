/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;   
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
public:
    int max_sum(Node*root){
        if(!root) return 0;
        return max(max_sum(root->left),max_sum(root->right))+root->data;
    }
    int maxPathSum(Node* root){
    }
};

