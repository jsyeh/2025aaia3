/// week04-6.cpp
/// �m�ߦU�� �u���Y�ۦp���}�C�v vector<int> a ����l��
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;    /// (1) �S�������l�ƪ��Ѽ�, ���׬O0
    cout << endl << "�}�C a �����׬O " << a.size() << endl;

    vector<int> b(3); /// (2) ���ӰѼ�, ���������ܦ�3
    cout << endl << "�}�C b �����׬O " << b.size() << endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3, 88); /// (3) ���׬O3, �̭�����88
    cout << endl << "�}�C c �����׬O " << c.size() << endl;
    for(int i=0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0}; /// C�y�����}�C
    vector<int> f( d, d+4 ); /// ��C���}�C���u�Y�ӽd��v�Ӫ�l�� 4��
    cout << endl << "�}�C f �����׬O " << f.size() << endl;
    for(int i=0; i<f.size(); i++) cout << f[i] << " ";

    vector<int> g( d, d+10 ); /// ��C���}�C���u�Y�ӽd��v�Ӫ�l�� 10��
    cout << endl << "�}�C g �����׬O " << g.size() << endl;
    for(int i=0; i<g.size(); i++) cout << g[i] << " ";
}
