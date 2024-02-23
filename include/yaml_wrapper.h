#include <../vendor/yaml_cpp/include/yaml-cpp/yaml.h>

namespace SkillsChecker
{
	class YamlWrapper
	{
		// YAML is just a string
		
		// basic workflow
		void NewDocument(); // create a new yaml document file
		void LoadDocument(); // load an existing yaml document from a file in memory
		void OpenDocument(); // open a yaml document in memory to read or to write
		void StartDocument(); // start the writing of yaml document
		void FinishDocument(); // finish the writing of yaml document
		void CloseDocument(); // close a yaml document in memory
		void SaveDocument(); // save a yaml document in a file
		void DisplayDocument(); // display a yaml document as formatted text
	};
}
