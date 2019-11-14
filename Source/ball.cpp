#include "ball.h"



ball::ball()
{
}


ball::~ball()
{
}

ball::ball(float cx, float cy)
{
	bx = cx;
	by = cy;
	ballX = bx;
	ballY = by;
	velX = velY = 0;
}

void ball::drawBall() 
{
	COORD coord;
	coord.X = int(ballX);
	coord.Y = int(ballY);
	SetConsoleCursorPosition(hOut, coord);
	cout << ' ';
	coord.X = int(bx);
	coord.Y = int(by);
	SetConsoleCursorPosition(hOut, coord);
	SetConsoleTextAttribute(hOut, 12);
	cout << '0';
	SetConsoleTextAttribute(hOut, 15);
	ballX = bx;
	ballY = by;
}  //vẽ trái bóng

void ball::velocityBall()
{
	velX = float(rand() % 3) - 1.5f;
	velY = 1;
}  //Khởi tạo vận tốc trái bóng

void ball::controlMaxSpeed()
{
	if (velX < -maxSpeed) {
		velX = -maxSpeed;
	}
	else if (velX > maxSpeed) {
		velX = maxSpeed;
	}
}  //Cài đặt vận tốc nhanh nhất của trái bóng

void ball::setVelBall()
{
	bx += velX;
	by += velY;
}  //Thay đổi tọa độ trái bóng theo vận tốc

void ball::resetBall()
{
	bx = float(width / 2 - 1);
	by = float(height / 2);
}  //đưa trái bóng trở lại vị trí giữa sân khi có người chơi giành chiến thắng

int ball::checkPlayerWin()
{
	if (int(by) >= height) {
		return 1;
	}
	else if (int(by) <= 0) {
		return 2;
	}
	else return 0;
}  //kiểm tra trái bóng đã chạm vào vị trí cao nhất hoặc thấp nhất (tương ứng với việc có người giành chiến thắng)

void ball::checkBallHitWall()
{
	if (int(bx) <= 1) {
		velX *= -1;
		bx = 1;
		velX = 1.0f;
	}
	else if (int(bx) >= width - 3) {
		velX *= -1;
		bx = float(width - 3);
		velX = -1.0f;
	}
}  //xử lí khi trái banh đụng trúng tường trái và tường phải
