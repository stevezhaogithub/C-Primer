#include <iostream>
using namespace std;

//  test comment
void test01() {
    cout << "/*"; // 合法
    cout << "*/"; // 合法
    // cout << /* "*/ " */; // 不合法
    cout << /* "*/ " /* " /*" */; // 合法
}

void test_while() {
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        val++;
    }
    cout << "sum of 1 to 10 is: " << sum << endl;
}

void test_while1() {
    int n = 10;
    while (n >= 0) {
        cout << n << ", ";
        --n;
    }
    cout << endl;
}
void test_while2() {
    cout << "请输入两个整数: " << endl;
    int m, n;
    cin >> m >> n;

    while (m <= n) {
        cout << m << ", ";
        ++m;
    }
    cout << endl;
}

void test_for1() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    cout << "sum = " << sum << endl;
}

void test2() {
    int sum = 0, value = 0;
    while (cin >> value) {
        sum += value;
    }
    cout << "sum = " << sum << endl;
    /*
        这个测试案例输入的时候需要输入 3 4 5 6 然后按下: control + D (unix 和
       macOS), control + Z (windows)
     */
}

void test3() {
    double sum = 0, num = 0;
    // ctrl + D or ctrl + Z 结束输入
    while (std::cin >> num) {
        sum += num;
    }
    cout << "sum = " << sum << endl;
}

int main() {
    //    test_while();
    //    test_while1();
    //    test_while2();
    //    test_for1();
    //    test2();
    test3();

    return 0;
}
