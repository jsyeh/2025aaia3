// week03-3b.cpp �G�X�@����2�ؤ�k �������N�n�F
// LeetCode �ǲ߭p�e 283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; // �������� nums[k] = nums[i], �A k++
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
