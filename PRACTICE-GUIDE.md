# Practice and Commit Guide

## Honest progress tracking
- Pending: no verified solution is recorded.
- In progress: an actual attempt is being developed.
- Solved: the exact solution is recorded and verified against the problem.
- Reviewed: the solution has been revisited and explained independently.

No solved submissions are recorded in this initial repository.
Two Sum #1 remains pending exact-solution verification.
Two Sum II #167 and Container With Most Water #11 are not marked solved.

## For each solution
Record the problem link, approach, exact code, test cases, and results.
Explain time and auxiliary-space complexity in terms of input size n.
State whether output storage is included in the space calculation.
Do not guess complexity or claim acceptance without evidence.

## Meaningful commits
Keep each commit focused on one problem or one learning change.

Examples (use only when the described work actually happened):
- docs(arrays): explain Two Sum approach and complexity
- fix(arrays): handle duplicate values in Two Sum
- test(arrays): add duplicate and negative-value cases

Before committing:
1. Run git diff and review every change.
2. Stage only the intended files with git add <path>.
3. Run git diff --cached to review what will be committed.
4. Commit with a message describing the actual change.
5. Push and check git status.

Never commit tokens, passwords, personal records, or environment files.
Ignore rules cannot detect secrets pasted inside source code or notes.
