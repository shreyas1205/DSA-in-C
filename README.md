# DSA in C

Shreyas's data structures and algorithms practice in C. Independent of NaviGuard.

[LeetCode profile](https://leetcode.com/u/ZDHjG5Gj5W/) · [Practice and commit guide](PRACTICE-GUIDE.md)

## Verified submissions

Seven accepted C submissions were retrieved directly from my signed-in LeetCode submission history and imported on 2026-10-20 (India time). The solution bodies are preserved as submitted, with a final newline added. Acceptance was checked against the existing LeetCode records; no fresh submissions or local test runs are claimed. Acceptance does not establish independent mastery.

| Problem | C source | Submission evidence | Accepted date | Recorded tests |
|---|---|---|---|---|
| [1. Two Sum](https://leetcode.com/problems/two-sum/) | [Code](Arrays/0001-two-sum.c) | [Accepted](https://leetcode.com/problems/two-sum/submissions/2157200340) | 2026-09-29 | 65/65 |
| [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [Code](Arrays/0011-container-with-most-water.c) | [Accepted](https://leetcode.com/problems/container-with-most-water/submissions/2157198971) | 2026-09-29 | 65/65 |
| [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [Code](Arrays/0026-remove-duplicates-from-sorted-array.c) | [Accepted](https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2160794450) | 2026-10-03 | 362/362 |
| [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [Code](Arrays/0053-maximum-subarray.c) | [Accepted](https://leetcode.com/problems/maximum-subarray/submissions/2159285124) | 2026-10-01 | 210/210 |
| [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [Code](Arrays/0121-best-time-to-buy-and-sell-stock.c) | [Accepted](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2158295158) | 2026-09-30 | 213/213 |
| [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [Code](Arrays/0217-contains-duplicate.c) | [Accepted](https://leetcode.com/problems/contains-duplicate/submissions/2159310997) | 2026-10-01 | 79/79 |
| [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [Code](Arrays/0283-move-zeroes.c) | [Accepted](https://leetcode.com/problems/move-zeroes/submissions/2160778038) | 2026-10-03 | 75/75 |

Submission pages may require signing in to LeetCode. Two Sum II (#167) has no verified submission here and is not marked solved: [problem link](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/).

## Complexity notes

Here n is the input array length. Space means auxiliary space; Two Sum also returns a fixed two-integer output, which is O(1).

| Problem | Approach | Worst-case time / library-dependent bound | Auxiliary space |
|---|---|---|---|
| #1 | Check every pair | O(n²) | O(1) |
| #11 | Two pointers | O(n) | O(1) |
| #26 | Read/write pointers | O(n) | O(1) |
| #53 | Kadane's algorithm | O(n) | O(1) |
| #121 | Track minimum price and best profit | O(n) | O(1) |
| #217 | qsort then scan adjacent elements | T_qsort(n) + O(n) | S_qsort(n) + O(1) |
| #283 | Swap nonzero values forward | O(n) | O(1) |

- #217: qsort changes the input array. Its time and workspace depend on the C library implementation; C does not guarantee a particular sorting algorithm or complexity. Assuming an O(n log n) sort, total time is O(n log n). Do not claim constant total auxiliary space without checking that implementation.
- #26 and #283 change the input array in place. #26 assumes a nonempty sorted array, matching its problem constraints.
- #53 and #121 read the first element and assume a nonempty input, matching their problem constraints.
- #1 returns heap memory; a standalone caller must free the returned array.
- These are LeetCode function submissions, not standalone programs with main().

## Topic progress

| Folder | Recorded evidence | Mastery |
|---|---|---|
| Arrays | 7 accepted submissions stored | Not assessed |
| Strings | No submissions recorded | Not assessed |
| Linked-Lists | No submissions recorded | Not assessed |
| Stacks-and-Queues | No submissions recorded | Not assessed |
| Trees | No submissions recorded | Not assessed |
| Graphs | No submissions recorded | Not assessed |
| Dynamic-Programming | #53 uses Kadane's recurrence; source stored in Arrays | Not assessed |

## Next practice

Explain each solution without reading it, trace edge cases, and record an independent re-solve before marking it reviewed or mastered. Keep future commits focused on one actual problem, correction, test, or explanation.
