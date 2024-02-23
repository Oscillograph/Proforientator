#include <../vendor/yaml_cpp/include/yaml-cpp/yaml.h>
// #include <common.h>
#include <datatypes.h>
#include <fileio.h>

// most of these are yet examples of what should be done

namespace YAML {
	template<>
	struct convert<SkillsChecker::Skill> {
		static Node encode(const SkillsChecker::Skill& rhs) {
			Node node;
			node.push_back(rhs.name.c_str());
			node.push_back(rhs.group.c_str());
			node.push_back(rhs.level);
			return node;
		}
		
		static bool decode(const Node& node, SkillsChecker::Skill& rhs) {
			if (!node.IsSequence() || (node.size() != 3))
				return false;
			rhs.name = std::string(node[0].as<char*>());
			rhs.group = std::string(node[1].as<char*>());
			rhs.level = node[2].as<int>();
			return true;
		}
	};
}


namespace SkillsChecker
{
	YAML::Emitter& operator<<(YAML::Emitter& out, const Skill& rhs){
		out << YAML::Flow;
		out << YAML::BeginSeq << rhs.name.c_str() << rhs.group.c_str() << rhs.level << YAML::EndSeq;
		return out;
	}
	
	
	class YamlWrapper
	{
	public:
		// YAML is just a string
		
		// basic workflow
		void NewDocument(); // create a new yaml document file
		bool LoadDocument(const std::string& filename) // load an existing yaml document from a file in memory
		{
			std::string text = FileIO::GetRawText(filename);
			YAML::Node data = YAML::Load(text);
			if (!data["Skill"]){
				return false;
			}
			
			std::string skillName = data["Skill"].as<std::string>();
			
			auto entities = data["Skills"];
			if (entities) {
				for (auto entity : entities) {
					std::string name;
					auto nameNode = entity["Skill"];
					if (nameNode)
						name = nameNode["Name"].as<std::string>();
				}
			}
		}
		
		void OpenDocument(); // open a yaml document in memory to read or to write
		void StartDocument(); // start the writing of yaml document
		void FinishDocument(); // finish the writing of yaml document
		void CloseDocument(); // close a yaml document in memory
		bool SaveDocument(const std::string& filename) // save a yaml document in a file
		{
			YAML::Emitter out;
			out << YAML::BeginMap;
			out << YAML::Key << "Skill" << YAML::Value << "Unnamed";
			out << YAML::Key << "Group" << YAML::Value << "Unnamed";
			out << YAML::Key << "Level" << YAML::Value << 0; 
			out << YAML::EndMap;
			
			return FileIO::WriteRawText(filename, out.c_str());
		}
		
		void DisplayDocument(); // display a yaml document as formatted text
		

		
	private:
		std::string m_Contents;
	};
}
