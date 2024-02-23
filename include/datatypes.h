#ifndef PROFORIENTATOR_DATATYPES_H
#define PROFORIENTATOR_DATATYPES_H

#include <common.h>
#include <unordered_map>

struct Skill;
struct SkillGroup;
struct SkillRegistry;
struct Job;

namespace SkillsChecker
{
	struct Skill
	{
		Skill(const std::string& n, const std::string& g, uint32_t l)
		: name(n), group(g), level(l) {};
		
		std::string name = "";
		std::string group = "";
		uint32_t level = 0;
	};
	
	struct SkillGroup
	{
		SkillGroup();
		~SkillGroup()
		{
			node = nullptr;
			for (auto m : children)
			{
				m = nullptr;
			}
		}
		
		std::string name = "";
		Skill* node = nullptr;
		std::vector<Skill*> children = {};
	};
	
	struct SkillRegistry
	{
		SkillRegistry();
		~SkillRegistry()
		{
			for (auto m : m_SkillsRegistry)
			{
				delete m;
			}
			
			for (auto m : m_GroupsRegistry)
			{
				delete m.second;
			}
		}
		
		void AddSkill(Skill* skill)
		{
			m_SkillsRegistry.push_back(skill);
			m_GroupsRegistry[skill->group]->children.push_back(skill);
		}
		
		void RemoveSkill(Skill* skill)
		{
			for (auto it = m_GroupsRegistry[skill->group]->children.begin();
				it != m_GroupsRegistry[skill->group]->children.end();
				it++)
			{
				if (*it == skill)
				{
					*it = nullptr;
					break;
				}
			}
			
			for (auto it = m_SkillsRegistry.begin(); it != m_SkillsRegistry.end(); it++)
			{
				if (*it == skill)
				{
					*it = nullptr;
					m_SkillsRegistry.erase(it);
					break;
				}
			}
		}
		
		void RemoveSkill(const std::string& name)
		{
			std::string group = "";
			for (auto it = m_SkillsRegistry.begin(); it != m_SkillsRegistry.end(); it++)
			{
				if ((*it)->name == name)
				{
					group = (*it)->group;
					for (auto itg = m_GroupsRegistry[group]->children.begin();
						itg != m_GroupsRegistry[group]->children.end();
						itg++)
					{
						if ((*itg)->name == name)
						{
							*itg = nullptr;
							break;
						}
					}
				}
				*it = nullptr;
				m_SkillsRegistry.erase(it);
				break;
			}
		}
		
	private:
		std::unordered_map<std::string, SkillGroup*> m_GroupsRegistry = {};
		std::vector<Skill*> m_SkillsRegistry = {};
	};
	
	struct Job
	{
	public:
		Job();
		Job(const std::vector<Skill*>& reqs) : m_Requirements(reqs) {};
		~Job()
		{
			for (auto it = m_Requirements.begin(); it != m_Requirements.end(); it++)
			{
				delete *it;
				*it = nullptr;
			}
		}
		
		void AddSkill(Skill* skill)
		{
			m_Requirements.push_back(skill);
		}
		
		void RemoveSkill(Skill* skill)
		{
			for (auto it = m_Requirements.begin(); it != m_Requirements.end(); it++)
			{
				if (*it == skill)
				{
					delete *it;
					m_Requirements.erase(it);
					break;
				}
			}
		}
		
		void RemoveSkill(const std::string& name)
		{
			for (auto it = m_Requirements.begin(); it != m_Requirements.end(); it++)
			{
				if ((*it)->name.c_str() == name.c_str())
				{
					delete *it;
					m_Requirements.erase(it);
					break;
				}
			}
		}
		
	private:
		std::vector<Skill*> m_Requirements = {};
	};
}

#endif
