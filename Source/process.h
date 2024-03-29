#ifndef PROCESS_H
#define PROCESS_H
#include "pad.h"
class process:public pad
{
public:
	process();
	~process();
	void reset1(ball & b, pad & player1, pad & player2, int & player1_score, int & player2_score, bool started);
	void reset2(ball & b, pad & you, pad & comp, int & you_score, int & comp_score, bool started);
	void menu();
	void control1();
	void control2();
	void checkBallHitPad1(pad &, ball &);
	void checkBallHitPad2(pad &, ball &);
	void setVelCompPad(pad &, ball& );
};

#endif // !PROCESS_H



