#ifndef SKILLSCHECKER_DATATYPES_H
#define SKILLSCHECKER_DATATYPES_H

#include <common.h>

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
