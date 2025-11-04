#include <iostream>
using namespace std;
int main() {
    cout << "/*"; // 合法
    cout << "*/"; // 合法
    // cout << /* "*/ " */; // 不合法
    cout << /* "*/ " /* " /*" */; // 合法
    return 0;
}
