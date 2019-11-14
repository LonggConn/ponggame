#ifndef BALL_H
#define BALL_H
#include "border.h"
class ball:public border
{
protected:
	double maxSpeed = 1.8;
	float ballX, ballY;
public:
	float bx, by, velX, velY;
	ball();
	~ball();
	ball(float cx, float cy);
	void drawBall();
	void velocityBall();
	void controlMaxSpeed();
	void setVelBall();
	void resetBall();
	int checkPlayerWin();
	void checkBallHitWall();
};


#endif // !BALL_H


