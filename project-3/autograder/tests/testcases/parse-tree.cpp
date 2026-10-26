
#include <vector>
#include <string>
using namespace std;


// Struct for tree in first-child, next-sibling representation
struct ParseTreeNode {
    char val;
    ParseTreeNode* left_child;
    ParseTreeNode* right_child;
};

ParseTreeNode* build_parse_tree(const string& expr);

int main() {

    return 0;
}
