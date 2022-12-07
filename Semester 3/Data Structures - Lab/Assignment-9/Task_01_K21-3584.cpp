#include <iostream>
using namespace std;

class node
{
    int data;
    node* left;
    node* right;
    int height;
    node(int key)
    {
        this->data = key;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
    friend class Tree;
};

class Tree
{
    node* root;
    int max(int x, int y)
    {
        if (x > y) return x;
        else return y;
    }
    int height_of_tree(node* n)
    {
        if (n == nullptr)
            return 0;
        return n->height;
    }
    int getBalance(node* n)
    {
        if (n == nullptr) return 0;
        return height_of_tree(n->left) - height_of_tree(n->right);
    }
    node* rightRotation(node* n)
    {
        node* x = n->left;
        node* y = x->right;
        x->right = n;
        n->left = x;
        n->height = max(height_of_tree(n->left), height_of_tree(n->right)) + 1;
        x->height = max(height_of_tree(x->left), height_of_tree(x->right))+1;
        return x;
    }
    node* leftRotation(node* n)
    {
        node* x = n->right;
        node* y = x->left;
        // Rotation 
        x->left = n;
        n->right = y;
        n->height = max(height_of_tree(n->left), height_of_tree(n->right)) + 1;
        x->height = max(height_of_tree(x->left), height_of_tree(x->right)) + 1;
        return x;
    }
    node* newNode(int data)
    {
        node* new_node = new node(data);
        return new_node;
    }
    node* insertNode(node* n, int key)
    {
        if (n == nullptr)
            return newNode(key);
        if (key > n->data)
            n->right = insertNode(n->right, key);
        else if (key < n->data)
            n->left = insertNode(n->left, key);
        else
            return n;
        n->height = max(height_of_tree(n->left), height_of_tree(n->right)) + 1;
        int balanceFactor = getBalance(n);

        if (balanceFactor > 1)
        {
            //left left
            if (key < n->left->data)
                return rightRotation(n);
            else if (key > n->left->data) //left right
                n->left = leftRotation(n->left);
                return rightRotation(n);
        }
        else if (balanceFactor < -1)
        {
            if (key > n->right->data)
            return leftRotation(n);
            else if (key < n->right->data)
            {
                n->right = rightRotation(n->right);
                return leftRotation(n);
            }

        }
        return n;
    }
    void i_ord(node* root)
    {
        if (root == nullptr) return;
        i_ord(root->left);
        cout << root->data << "->";
        i_ord(root->right);
    }
    
    node* find_min(node* root)
    {
        while (root->left != nullptr)
        {
            root = root->left;
        }
        return root;

    }
    node* del_node(node* root, int key)
    {
        if (root == nullptr) return root;
        else if (key < root->data)
            root->left = del_node(root->left, key);
        else if (key > root->data)
            root->right = del_node(root->right, key);
        else
        {
            if (!root->left && !root->right)
            {
                delete root;
                root = nullptr;
                
            }
            else if (!root->left)
            {
                node* temp = root;
                root = root->right;
                delete temp;
                
            }
            else if (!root->right)
            {
                node* temp = root;
                root = root->left;
                delete temp;
                
            }
            else
            {
                node* temp = find_min(root->right);
                root->data = temp->data;
                root->right = del_node(root->right, temp->data);
            }
        }
        /*---Balancing---*/
        if (root)
        root->height = max(height_of_tree(root->left), height_of_tree(root->right)) + 1;
        int balanceFactor = getBalance(root);
        if (balanceFactor > 1)
        {
            printf("Not balanced");
        }
        return root;
    }
    public:
        Tree():root(nullptr)
        {
        }
        void insert(int key)
        {
            root = insertNode(root, key);
        }
        void inorder()
        {
            i_ord(root);
        }
        void deleteNode(int key)
        {
            root = del_node(root, key);
        }
};

int main(void)
{
    Tree t1;
    /*A) Inserting 1, 2, 3 */
    for (int i = 1; i <= 3; i++)
    {
        t1.insert(i);
    }
    printf("AVL Tree inorder traversal: ");
    t1.inorder();
    printf("\n");
    /*B) Delete 2*/
    printf("Deleting root node 2\n");
    t1.deleteNode(2);
    printf("Tree after deletion of 2\n");
    t1.inorder();
    /*C) Inser 4 5 6 7 8*/
    printf("\nInserting 4, 5, 6, 7, 8\n");
    for (int i = 4; i <= 8; i++)
    {
        t1.insert(i);
    }
    printf("Tree after inserting 4, 5, 6, 7, 8\n");
    t1.inorder();
    /*D) Delete 5 8*/
    printf("\nDeleting 8 and 5\n");
    t1.deleteNode(8);
    t1.deleteNode(5);
    printf("Tree after deleting 8 and 5\n");
    t1.inorder();
    printf("\n");
}