#include <iostream>
using namespace std;
int main() {

    // currentN 是正在统计的数, N 是输入的新数
    int N = 0, currentN = 0;

    // 读取第一个数, 并确保确实有数可以处理
    if (cin >> currentN) {
        int count = 1; // 保存当前正在处理的数出现的次数
        // 循环接收用户新的输入，并统计是否与 currentN 值相同
        while (cin >> N) {
            if (N == currentN) {
                ++count;
            } else {
                cout << currentN << " 出现了 " << count << " 次." << endl;
                // 记住新值
                currentN = N;
                count = 1;
            }
        }

        // 记住但因文件中的最后一个值的个数
        cout << currentN << " 出现了 " << count << " 次." << endl;
    }
    return 0;
}
