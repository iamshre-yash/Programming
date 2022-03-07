class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s1 = min(strs)
        s2 = max(strs)
        for i, l in enumerate(s1):
            if l != s2[i]:
                return s1[:i]
        return s1