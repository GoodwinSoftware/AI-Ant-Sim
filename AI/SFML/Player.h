#ifndef PLAYER_H
#define PLAYER_H

enum PlayerStates {
	idle = 0,
	AvoidPredator,
	SearchForFood,
	RetrievingFood,
	FollowScent,
};

class Player
{
public:
	Player();
	~Player();
	void AvoidPredator();
	void SearchForFood();
	void RetrievingFood();
private:
	bool m_bIsCarryingItem;
};

#endif