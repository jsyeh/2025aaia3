// week05-1.cpp
// LeetCode �ǲ߭p�e Built-In Functions ��1�D 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // ��r��,�ܦ����e�Ъ� cin iostream
        string word; // �r�ꪺ word
        //ss >> word; // �ܹ����e�Ъ� cin >> word
        //cout << "Ū��F" << word << "\n"; // ���ե�
        //ss >> word; // �ܹ����e�Ъ� cin >> word
        //cout << "Ū��F" << word << "\n"; // ���ե�
        while( ss >> word ) { // �@��Ū�i��
            // �̭����򳣤���
        }
        return word.length(); //�̫᪺�r������ //return 0; // �H�K
    }
};
