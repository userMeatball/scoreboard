#include <iostream>
#include <string>

class Player
{
	public:
		Player() : m_uname{"unknownPlayer"} {}

		Player(int score) : m_score{score} {}

	private:
		std::string m_uname {};
		int m_score;
};
		
class Team
{
	public:
		Team(int score): m_score{score} {}

		int getScore()
		{
			return m_score;
		}
	
	private:
		int m_score {0};
};

int main()
{


	return 0;
}
