// #include <common.hpp>
#include <datatypes.h>
#include <yaml_wrapper.h>
#include <logger.h>

int main(int argc, char** argv) {
	
	// Wait for input.
	std::string k;
	std::cin >> k;
	// Process.
	uint32_t i = 42;
	// Display.
	CONSOLE_LOG("Hello, user!\n", i, "\n", k.c_str());
	// Get back to waiting for input.
	
	return 0;
}
