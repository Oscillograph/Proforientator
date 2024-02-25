// #include <datatypes.h>
#include <yaml_wrapper.h>
#include <logger.h>

int main(int argc, char** argv) {
//	CONSOLE_CAPTION_BLACK("Hello, user!");
	
	// load database
	std::string skillsFile = "../data/skillsDB.txt";
	Proforientator::SkillRegistry skillsRegistry;
	Proforientator::YamlWrapper YAMLWrapperObject;
	YAMLWrapperObject.UseSkillRegistry(&skillsRegistry);
	YAMLWrapperObject.LoadDocument(skillsFile);
	
	
	
	// Wait for input.
	
	// Process.
	
	// Display.
	CONSOLE_CAPTION_BLACK("- - - - - - - - - - - - - - - - - ------- - - - - - - - - - - - - - - - - - - -");
	CONSOLE_CAPTION_BLACK("- - - - - - - - - - - Skills map - - - - - - - - - - - -");
	CONSOLE_GREY("Skill not aquaried");
	CONSOLE_WHITE("Skill aquired.");
	CONSOLE_CYAN("Skill is almost perfect.");
	
	CONSOLE_CAPTION_BLACK("- - - - - - - - - - - - - - - - - ------- - - - - - - - - - - - - - - - - - - -");
	CONSOLE_CAPTION_BLACK("- - - - - - - - -  Job requirements  - - - - - - - - - -");
	CONSOLE_RED("Skill doesn't match requirements.");
	CONSOLE_YELLOW("Skill matches requirements.");
	CONSOLE_GREEN("Skill excedes requirements.");
	
	// Get back to waiting for input.
	
	// save database
	YAMLWrapperObject.SaveDocument(skillsFile);
	
	return 0;
}
