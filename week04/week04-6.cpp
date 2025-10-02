/// week04-6.cpp
/// 練習各種 「伸縮自如的陣列」 vector<int> a 的初始化
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;    /// (1) 沒有任何初始化的參數, 長度是0
    cout << endl << "陣列 a 的長度是 " << a.size() << endl;

    vector<int> b(3); /// (2) 有個參數, 對應長度變成3
    cout << endl << "陣列 b 的長度是 " << b.size() << endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3, 88); /// (3) 長度是3, 裡面都塞88
    cout << endl << "陣列 c 的長度是 " << c.size() << endl;
    for(int i=0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0}; /// C語言的陣列
    vector<int> f( d, d+4 ); /// 用C的陣列的「某個範圍」來初始化 4格
    cout << endl << "陣列 f 的長度是 " << f.size() << endl;
    for(int i=0; i<f.size(); i++) cout << f[i] << " ";

    vector<int> g( d, d+10 ); /// 用C的陣列的「某個範圍」來初始化 10格
    cout << endl << "陣列 g 的長度是 " << g.size() << endl;
    for(int i=0; i<g.size(); i++) cout << g[i] << " ";
}
