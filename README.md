# Bazel Test
This is a simple bazel test.


## Google Test
```shell
DEBUG: Rule 'com_google_googletest' indicated that a canonical reproducible form can be obtained by modifying arguments sha256 = "5cf189eb6847b4f8fc603a3ffff3b0771c08eec7dd4bd961bfd45477dd13eb73"
DEBUG: Repository com_google_googletest instantiated at:
  /home/goshawk111/workspace/bazel-test/WORKSPACE:3:13: in <toplevel>
Repository rule http_archive defined at:
  /home/goshawk111/.cache/bazel/_bazel_goshawk111/821da0ba031df23ac0a8df3c9e9b1e1a/external/bazel_tools/tools/build_defs/repo/http.bzl:353:31: in <toplevel>
INFO: Analyzed 3 targets (0 packages loaded, 0 targets configured).
INFO: Found 2 targets and 1 test target...
INFO: Elapsed time: 0.475s, Critical Path: 0.03s
INFO: 1 process: 1 internal.
INFO: Build completed successfully, 1 total action
PASSED: //test:hello_test (see /home/goshawk111/.cache/bazel/_bazel_goshawk111/821da0ba031df23ac0a8df3c9e9b1e1a/execroot/__main__/bazel-out/k8-fastbuild/testlogs/test/hello_test/test.log)
INFO: From Testing //test:hello_test
==================== Test output for //test:hello_test:
Running main() from gmock_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from FuncTest
[ RUN      ] FuncTest.BasicAssertions
[       OK ] FuncTest.BasicAssertions (2 ms)
[----------] 1 test from FuncTest (2 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (3 ms total)
[  PASSED  ] 1 test.
================================================================================
//test:hello_test                                               (cached) PASSED in 0.2s

Executed 0 out of 1 test: 1 test passes.
INFO: Build completed successfully, 1 total action
```
