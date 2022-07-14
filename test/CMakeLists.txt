# fetch googletest
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
FetchContent_MakeAvailable(googletest)


# test logic comparer
add_executable(
	test_standard_logic_tree
	test_standard_logic_tree.cpp
)
target_compile_features(
	test_standard_logic_tree
	PRIVATE cxx_std_17
)
target_link_libraries(
	test_standard_logic_tree
	PRIVATE gtest_main
	PRIVATE standard_logic_tree lexer logical_grammar syntax_parser
)


# google test discover
include(GoogleTest)
gtest_discover_tests(test_standard_logic_tree)
