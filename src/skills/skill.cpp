#include "skill.h"

Skill::Skill(SkillAttribute attribute)
{
    _Name = attribute.Name;
    _Desc = attribute.Desc;
    _Duration = attribute.Duration;
    _SkillType = static_cast<SkillType> (attribute.SkillType.SkillType) ;
    _SkillValues = new SkillValues(attribute.Values, attribute.SkillType.ClassType, attribute.Lear);
    _Active = attribute.Active;
}
