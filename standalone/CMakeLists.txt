# standard logic adapter
add_executable(
	standard_logic_adapter
	standard_logic_adapter.cpp
)
target_compile_features(
	standard_logic_adapter
	PRIVATE cxx_std_17
)
target_link_libraries(
	standard_logic_adapter
	PRIVATE lexer syntax_parser logical_grammar standard_logic_tree
)
