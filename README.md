# Build commands

bazel build //...
bazel run //:main

bazel build //... -s
bazel build //... -s --copt=-O0


