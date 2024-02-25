// #include <datatypes.h>
#include <yaml_wrapper.h>
#include <logger.h>

int main(int argc, char** argv) {
	
	std::string skillsFile = "../data/skillsDB.txt";
	Proforientator::SkillRegistry skillsRegistry;
	Proforientator::YamlWrapper YAMLWrapperObject;
	YAMLWrapperObject.SetSkillsRegistry(&skillsRegistry);
	YAMLWrapperObject.LoadDocument(skillsFile);
	// YAMLWrapperObject.SaveDocument("../data/skillsSave.txt");
	
	
	
	// Wait for input.
	
	// Process.
	
	// Display.
	CONSOLE_CAPTION_BLACK("Hello, user!");
	CONSOLE_GREY("This is grey.");
	CONSOLE_WHITE("This is white.");
	CONSOLE_YELLOW("This is yellow.");
	CONSOLE_DARKRED("This is dark red.");
	CONSOLE_RED("This is red.");
	CONSOLE_TEAL("This is teal.");
	CONSOLE_CYAN("This is cyan.");
	CONSOLE_BLUE("This is blue.");
	CONSOLE_MAGENTA("This is magenta.");
	CONSOLE_GREEN("This is green.");
	// Get back to waiting for input.
	
	return 0;
}
