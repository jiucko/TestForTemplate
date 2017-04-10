#include <string>


class SceneUser
{
public:
	SceneUser();
	SceneUser(std::string name);
	~SceneUser();
	 std::string GetName();
	 void SetName(std::string name);
	 template<typename T1, typename... T2> std::string Sum2(T1 &&p, T2&&... arg)
	 {
		 std::string ret = p + Sum2(arg...);

		 return ret;
	 }
	 std::string Sum2()
	 {
		 return "";
	 }
	 template<typename T1, typename ...T2>std::string stitchStr(int type, T1&& p, T2&&... arg)
	 {
		 std::string ret = Sum2(p, arg...);
		 return ret;
	 }
protected:
private:
	std::string m_name;
};
