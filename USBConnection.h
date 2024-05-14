#include <stack>

class USBConnection {
private:
    static std::stack<int> ids;
    int ID;
    // Private constructor
    USBConnection(int id) : ID(id) {}

public:
    // Destructor
    ~USBConnection() {
        ids.push(ID);
    }

    // Static function to create new objects
    static USBConnection* create() {
        if (ids.empty()) {
            return nullptr;
        } else {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id);
        }
    }
};

// Initialize the stack
std::stack<int> USBConnection::ids({3, 2, 1});