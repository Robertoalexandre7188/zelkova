# Contributing to Zelkova
 
Thank you for your interest in contributing! This document explains how to report problems, suggest improvements, and submit changes.
 
By participating, you agree to follow our [Code of Conduct](CODE_OF_CONDUCT.md).
 
## Ways to contribute
 
- Report bugs
- Suggest features or improvements
- Improve the documentation, including manpages and examples
- Fix bugs or implement features through pull requests
- Help answer questions from other users

## Reporting bugs
 
Before opening an issue, please search the existing issues to see if it has already been reported.
 
When filing a bug, include:
 
- A clear and descriptive title
- The version or commit of Zelkova you are using
- Your operating system, compiler, and toolchain versions
- Steps to reproduce the problem, ideally a minimal example
- What you expected to happen and what actually happened
- Relevant logs, error messages, or backtraces
**Security vulnerabilities must not be reported through public issues.** See [SECURITY.md](SECURITY.md) instead.
 
## Suggesting features
 
Open an issue describing the problem you want to solve, why existing functionality is not enough, and, if possible, how you imagine the solution. For large changes, please discuss them in an issue **before** writing code so that effort is not wasted.
 
## Development setup
 
1. Fork the repository and clone your fork:
```
   git clone https://github.com/Robertoalexandre7188/zelkova.git
   cd zelkova
```
 
2. Install the build requirements:
    - Python v3.14
    - Ninja
    - CMake v3.31 or above
    - Either the GNU or LLVM toolchain for C

3. Build the project:
```
   cmake -B .cache
   cmake --build .cache
```
 
4. Run the tests:
```
   ctest --test-dir .cache
```
 
## Submitting changes
 
1. Create a branch from `stable` with a descriptive name:
```
   git switch -c fix/short-description
```
 
2. Make your changes, keeping each commit focused on a single logical change.
3. Add or update tests for any change in behavior.
4. Update the documentation (manpages, guides, and comments) if needed.
5. Make sure the build and all tests pass locally.
6. Push your branch and open a pull request against `stable`.
7. Fill in the pull request template and respond to review feedback.

Pull requests are merged once they pass the required checks and have been reviewed.
 
### Commit messages
 
- Use the imperative mood in the subject line ("Fix buffer overflow", not "Fixed" or "Fixes")
- Keep the subject line to about 50 characters
- Leave a blank line, then explain *what* and *why* in the body, wrapped at about 72 characters
- Reference related issues, e.g. `Fixes #123`

### Signed commits
 
Signing commits is [encouraged/required]. See [GitHub's documentation on commit signature verification](https://docs.github.com/authentication/managing-commit-signature-verification) for setup instructions.
 
## Coding guidelines
 
- Follow the existing code style of the surrounding code
- Keep changes small and focused; avoid unrelated reformatting
- Write clear comments for non-obvious logic
- Avoid introducing new dependencies unless there is a strong reason
 
## Documentation
 
Documentation is part of the project. If your change affects behavior, public interfaces, or build instructions, please update the relevant documentation in the same pull request.
 
## Licensing
 
By submitting a contribution, you agree that it will be licensed under the same license as the project: The MIT license. See [LICENSE](LICENSE) for details.
 
## Questions
 
If you are unsure about anything, feel free to open an issue or start a discussion. I am happy to help.
