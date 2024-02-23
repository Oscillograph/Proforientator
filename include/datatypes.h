#ifndef SKILLSCHECKER_DATATYPES_H
#define SKILLSCHECKER_DATATYPES_H

#include <common.hpp> // LOL, extension .hpp fixes autocompletion problems in Red Panda C++ 2.25+

namespace SkillsChecker
{
	struct Skill
	{
		std::string name;
		std::string group;
		uint32_t level;
	};
}

#endif
