# Two Sum — verified submission

- [Problem](https://leetcode.com/problems/two-sum/)
- [Exact C solution](0001-two-sum.c)
- [Accepted submission](https://leetcode.com/problems/two-sum/submissions/2157200340)
- Accepted on: 2026-09-29
- Recorded result: 65/65 LeetCode test cases passed
- Verification: retrieved from the signed-in submission record; no new test run claimed.
- Independent mastery: not assessed.

## Approach

The outer loop chooses index i. The inner loop checks every later index j, so the same element is never reused. When nums[i] + nums[j] equals target, the function allocates two integers, stores the indices, sets returnSize to 2, and returns the result. It returns NULL if allocation fails or no pair is found.

## Complexity

- Worst-case time: O(n²), from checking up to n(n-1)/2 pairs.
- Auxiliary space: O(1). The two-integer output also has constant size.
- The caller must free the returned allocation after use.

## Practice to do

Trace [2,7,11,15] with target 9; [3,3] with target 6; and [-3,4,3,90] with target 0. Explain why the returned values are indices, why j starts at i+1, and why malloc is needed. These are suggested exercises, not completed-practice claims.
