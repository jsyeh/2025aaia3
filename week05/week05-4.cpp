// week05-4.cpp
// LeetCode �ǲ߭p�e Built-In Function ��2�D 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i<s.length(); i++) { // �C�@�Ӧr��
            s[i] = tolower( s[i] ); // �ܦ��p�g
        } // �C�Ӧr��, ���ܦ��p�g (���㪩�n #include <ctype.h> )
        // �άO�� #include <cctype> ��ӬO�P�@���ɮװ�
        return s; // ���װe�X�h
    }
};
