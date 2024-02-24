#include <datatypes.h>
#include <yaml_wrapper.h>
#include <logger.h>

int main(int argc, char** argv) {
	
	std::string skillsFile = "../data/skillsDB.txt";
	SkillsChecker::YamlWrapper YAMLWrapperObject;
	YAMLWrapperObject.LoadDocument(skillsFile);
	
	
	
	// Wait for input.

	// Process.
	
	// Display.
	CONSOLE_LOG("Hello, user!");
	// Get back to waiting for input.
	
	return 0;
}
