/// week05-2.cpp
/// 熟悉 stringstream
#include <iostream> /// cin, cout, getline 讀寫資料
#include <sstream> /// stringstream 需要它
#include <string> /// 我們的字串 string
using namespace std; ///小心,這行容易忘了加
int main()
{
    cout << "請輸入一段英文, 裡面可有空格: ";
    string s; /// 字串 s
    getline(cin, s); /// 一次讀入一整行,放入s
    cout << "讀到了s字串: " << s << endl;

    stringstream ss(s); ///將字串 s 變成 ss
    string word; /// 字串 word
    while ( ss >> word ) {
        cout << "有1個字: " << word << endl;
    }
}
