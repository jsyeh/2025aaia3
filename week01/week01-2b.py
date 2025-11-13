# week01-2b.py 使用 Python 的版本1 使用 for 迴圈
# LeetCode 28. Find the Index of the First Occurrence in a String
# 在 haystack 乾稻草堆 裡找到 needle 針 (大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)