# Practice and Commit Guide


## Honest progress tracking
- Pending: no verified solution is recorded.
- In progress: an actual attempt is being developed.
- Solved: the exact solution is recorded and verified against the problem.
- Reviewed: the solution has been revisited and explained independently.


Seven accepted C submissions, including #1 and #11, have now been retrieved and recorded with source links in [README.md](README.md).
Two Sum II #167 has no verified submission here and is not marked solved.
Accepted is an online-judge result, not proof of independent mastery. No independent review or mastery is claimed.


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
2. Stage only the intended files with `git add <path>`.
3. Run git diff --cached to review what will be committed.
4. Commit with a message describing the actual change.
5. Push and check git status.


Never commit tokens, passwords, personal records, or environment files.
Ignore rules cannot detect secrets pasted inside source code or notes.

