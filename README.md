# Zelkova

This is a lightweight build system focused on integration with C, a native dependency manager and structured project tree.

## Features/Goals

- Direct integration with C: Build recipes are defined in C, so if you are already using it or pretend to, there is no multi-language complexity.
- Well-established build recipe language: Since C is around 50 years old, it has a large ecosystem surrounding it, as well as good understanding about the language itself.
- Native dependency manager: The build system has an embedded dependency manager, so you do not require separate tools for them.
- Cross-platform: The build system works with no modifications on the recipes, regardless of the platform it is being run.
