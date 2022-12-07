#include <iostream>
using namespace std;
class node
{
public:
    int key;
    string name;
    node *leftTree;
    node *rightTree;
};

class BinaryTree
{
    node *root;
    node *del_node(node *root, int lower, int upper)
    {
        if (root == nullptr)
            return root;
        root->leftTree = del_node(root->leftTree, lower, upper);
        root->rightTree = del_node(root->rightTree, lower, upper);

        node* curr = root;

        if (root->key < lower)
        {
            root = root->rightTree;
            delete curr;
        }
        else if (root->key > upper)
        {
            root = root->leftTree;
            delete curr;
            
        }

        return root;
    }
    void i_ord(node* root)
    {
        if (root==nullptr)
            return;
        i_ord(root->leftTree);
        cout << root->key << "->";
        i_ord(root->rightTree);
    }

public:
    BinaryTree() : root(nullptr)
    {
    }
    BinaryTree(int key, string name)
    {
        root = new node();
        root->key = key;
        root->name = name;
    }
    void addNodes(int key, string name)
    {
        node *temp = new node();
        temp->key = key;
        temp->name = name;
        if (root == nullptr)
        {
            root = new node();
            root->key = key;
            root->name = name;
            root->leftTree = nullptr;
            root->rightTree = nullptr;
        }
        else
        {
            node *trav = root;
            while (true)
            {
                if (temp->key > trav->key && trav->rightTree == nullptr)
                {
                    trav->rightTree = temp;
                    break;
                }
                else if (temp->key < trav->key && trav->leftTree == nullptr)
                {
                    trav->leftTree = temp;
                    break;
                }
                else if (trav->leftTree != nullptr && temp->key < trav->key)
                {
                    trav = trav->leftTree;
                }
                else
                {
                    trav = trav->rightTree;
                }
            }
        }
    }
    void in_order()
    {
        i_ord(root);
    }

    void deleteNodes(int lower, int upper)
    {
        node *trav = root;
        root = del_node(trav, lower, upper);
    }
};

int main(void)
{
    BinaryTree b1;
    b1.addNodes(15, "15");
    b1.addNodes(10, "10");
    b1.addNodes(20, "20");
    b1.addNodes(8, "8");
    b1.addNodes(12, "12");
    b1.addNodes(16, "16");
    b1.addNodes(25, "25");
    int lower, upper;
    cout << "Inpur the lower and upper limit of values to remove: ";
    cin >> lower >> upper;
    b1.deleteNodes(lower, upper);
    b1.in_order();
}