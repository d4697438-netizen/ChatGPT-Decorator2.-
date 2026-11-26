# ChatGPT Decorator v1.0 (starter)

This is a starter Geode mod project. The first milestone is a simple menu button
that opens an informational popup. It is **not yet an AI decorator**.

## Files
- `mod.json`: mod metadata
- `CMakeLists.txt`: Geode SDK build configuration
- `src/main.cpp`: adds a Decorator button to the main menu

## Build
Follow the official Geode SDK build setup and then run `geode build` from the project directory.
For Android, the SDK/NDK and platform binaries must be installed and configured.

The GitHub workflow in `.github/workflows/build.yml` is a starter placeholder;
it needs a correctly provisioned runner/toolchain and SDK setup before it can produce a
valid Android `.geode` artifact.
