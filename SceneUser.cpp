#include "SceneUser.h"

SceneUser::SceneUser()
{
	m_name = "Kevin";
}
SceneUser::SceneUser(std::string name)
{
	m_name = name;
}
SceneUser::~SceneUser()
{}
std::string SceneUser::GetName()
{
	return m_name;
}
void SceneUser::SetName(std::string name)
{
	m_name = name;
}

