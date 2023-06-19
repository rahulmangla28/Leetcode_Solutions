class Solution {
public:
    int addMinimum(string word) {
        int k = 0, prev = 'z';
        for (char& c: word) {
            k += c <= prev;
            prev = c;
        }
        return k * 3 - word.size();
    }
};

// Intuition
// Same problem:
// Find out the minimum k where word is subsequence of "abc" repeated k times.

// Since "abc" is increasing,
// so we can split the original work into k strict increasing subarray.


// Explanation
// Initial the prev as a big char,
// then iterate each char c in word.
// If c <= prev, it means we need to start a new "abc",
// then we increase k++.

// Finally we find k, word is subsequence of "abc" repeated k times.
// We return k * 3 - n.
