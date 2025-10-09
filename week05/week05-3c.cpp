/// week05-3c.cpp Part1:Input,Part2:Output
/// Part3: stringstream Part4: reverse反過來
/// Part5:火車頭 +車廂 +車廂 +車廂
/// CPE 第2題 UVA 483 倒過來
#include <iostream>
#include <sstream> /// Part 3: stringstream 的檔案是 sstream
#include <algorithm> /// Part 4: reverse 的演算法
using namespace std;
int main()
{
    string line; /// 一行字的字串 Part 1: Input
    while ( getline(cin, line) ) { ///讀進來
        stringstream ss(line); /// Part 3: 用 stringstream斷字
        string word; /// 字放這裡
        ss >> word; ///火車頭在這裡
        reverse( word.begin(), word.end() );
        cout << word; /// 「火車頭」沒有空格
        while ( ss >> word ) { /// Part 3: 用 ss 斷字
            reverse( word.begin(), word.end() ); /// Part 4
            cout << " " << word; /// +車廂
            ///cout << "讀到了 " << word << endl; /// Part 3
        }
        cout << endl; ///cout << line << endl; /// Part 2: Output
    }
}
