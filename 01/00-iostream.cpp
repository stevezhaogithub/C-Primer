/*
    1. iostream 库下面有两个基础类型
    - istream
    - ostream

    2. ostream 类型的对象
    - cout
    - cerr
    - clog

    3. istream 类型的对象
    - cin


    cout: ostream 类型
    cerr: ostream 类型
    clog: ostream 类型

    cin: istream 类型
*/

#include <iostream>
using namespace std;
int main() {
    int ret;
    cout << "---cout---" << endl;
    cerr << "---cerr---" << endl;
    clog << "---log---" << endl;
    cin >> ret;
    return 0;
}
