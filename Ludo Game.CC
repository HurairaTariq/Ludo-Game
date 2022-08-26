#include<SFML\Graphics.hpp>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
using namespace sf;

int diceRoll();
void array();
void inst();
	cout << "\t.............**MAIN MENUE**............\n" << endl;
	int a, b;
	cout << "\t\tPRESS 1 FOR INSTRUCTIONS\n" << endl;
	cout << "\t\tPRESS 2 TO PLAY THE GAME" << endl;
	cin >> a;
	if (a == 1)
	{
		inst();
		cout << endl << endl;
	}
	else if (a == 2);
	{
		cout << "PRESS 2 FOR TWO PLAYERS\n" << endl;
		cout << "PRESS 3 FOR THREE PLAYERS\n" << endl;
		cout << "PRESS 4 FOR FOUR PLAYERS\n" << endl;
		cin >> b;
			while (window.pollEvent(event))
			{

				if (event.type == Event::Closed)
				{
					window.close();
				}

				if (event.type == Event::MouseButtonPressed &&Mouse::isButtonPressed(Mouse::Left))
				{
					if (dices.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
					{
						roll = diceRoll();
						cout << "dice roll= " << roll << endl;
					}
					//if (i == 1)
					{
						motionred(window, r1s, r2s, r3s, r4s, sumRed, red, event, dices);
					}
					//else if (i == 2)
					{
						motionyellow(window, y1s, y2s, y3s, y4s, sumyellow, yellow, event, dices);
					}
					//else if (i == 3)
					{
						motiongreen(window, g1s, g2s, g3s, g4s, sumgreen, green, event, dices);
					}
					//else if (i == 4)
					{
						motionblue(window, b1s, b2s, b3s, b4s, sumblue, blue, event, dices);
					}
				}
			}


			cout << "X: " << Mouse::getPosition(window).x << "Y: " << Mouse::getPosition(window).y << endl;


			window.clear();
			window.draw(boards);
			if (b == 2)
			{
				window.draw(r1s);
				window.draw(r2s);
				window.draw(r3s);
				window.draw(r4s);
				window.draw(y1s);
				window.draw(y2s);
				window.draw(y3s);
				window.draw(y4s);
			}
			else if (b == 3)
			{
				window.draw(r1s);
				window.draw(r2s);
				window.draw(r3s);
				window.draw(r4s);
				window.draw(g1s);
				window.draw(g2s);
				window.draw(g3s);
				window.draw(g4s);
				window.draw(b1s);
				window.draw(b2s);
				window.draw(b3s);
				window.draw(b4s);
			}
			else if (b == 4)
			{
				window.draw(r1s);
				window.draw(r2s);
				window.draw(r3s);
				window.draw(r4s);
				window.draw(g1s);
				window.draw(g2s);
				window.draw(g3s);
				window.draw(g4s);
				window.draw(b1s);
				window.draw(b2s);
				window.draw(b3s);
				window.draw(b4s);
				window.draw(y1s);
				window.draw(y2s);
				window.draw(y3s);
				window.draw(y4s);
			}
			window.display();
		}
		//	}
	}
}
int diceRoll()
{
	srand(time(0));
	int dice = rand() % 6 + 1;
	//cout << dice<<endl;
	return 6;
}

void load(Texture &board, Texture &r1, Texture &g1, Texture &b1, Texture &y1)
{
	board.loadFromFile("board1.jpg");
	r1.loadFromFile("r1.png");
	b1.loadFromFile("b1.png");
	y1.loadFromFile("y1.png");
	g1.loadFromFile("g1.png");
}

void position_r(Sprite &r1s, Sprite &r2s, Sprite &r3s, Sprite &r4s)
{
	r1s.setPosition(Vector2f(380, 90));
	r2s.setPosition(Vector2f(450, 90));
	r3s.setPosition(Vector2f(380, 160));
	r4s.setPosition(Vector2f(450, 160));
}

void position_g(Sprite &g1s, Sprite &g2s, Sprite &g3s, Sprite &g4s)
{
	g1s.setPosition(Vector2f(860, 90));
	g2s.setPosition(Vector2f(930, 90));
	g3s.setPosition(Vector2f(860, 160));
	g4s.setPosition(Vector2f(930, 160));
}

void position_y(Sprite &y1s, Sprite &y2s, Sprite &y3s, Sprite &y4s)
{
	y1s.setPosition(Vector2f(860, 580));
	y2s.setPosition(Vector2f(930, 580));
	y3s.setPosition(Vector2f(860, 650));
	y4s.setPosition(Vector2f(930, 650));
}

void position_b(Sprite &b1s, Sprite &b2s, Sprite &b3s, Sprite &b4s)
{
	b1s.setPosition(Vector2f(380, 580));
	b2s.setPosition(Vector2f(450, 580));
	b3s.setPosition(Vector2f(380, 650));
	b4s.setPosition(Vector2f(450, 650));
}


void initalizearray(Vector2f arr[])
{
	Vector2f red[56] = { Vector2f(337, 320), Vector2f(390, 320), Vector2f(443, 320), Vector2f(496, 320), Vector2f(549, 320), Vector2f(606, 270), Vector2f(606, 217), Vector2f(606, 164), Vector2f(606, 111), Vector2f(606, 58), Vector2f(606, 5), Vector2f(659, 5), Vector2f(712, 5), Vector2f(712, 58), Vector2f(712, 111), Vector2f(712, 164), Vector2f(712, 217), Vector2f(712, 270), Vector2f(760, 320), Vector2f(813, 320), Vector2f(866, 320), Vector2f(919, 320), Vector2f(972, 320), Vector2f(1025, 320), Vector2f(1025, 373), Vector2f(1025, 426), Vector2f(972, 426), Vector2f(919, 426), Vector2f(866, 426), Vector2f(813, 426), Vector2f(760, 426), Vector2f(707, 476), Vector2f(707, 529), Vector2f(707, 582), Vector2f(707, 635), Vector2f(707, 688), Vector2f(707, 741), Vector2f(654, 741), Vector2f(601, 741), Vector2f(601, 688), Vector2f(601, 635), Vector2f(601, 582), Vector2f(601, 529), Vector2f(601, 476), Vector2f(549, 426), Vector2f(496, 426), Vector2f(443, 426), Vector2f(390, 426), Vector2f(337, 426), Vector2f(294, 426), Vector2f(284, 373), Vector2f(337, 373), Vector2f(390, 373), Vector2f(443, 373), Vector2f(496, 373), Vector2f(549, 373) };
	for (int i = 0; i < 56; i++)
		arr[i] = red[i];
}

void moveFirstIndexRed(RenderWindow &window, Sprite &r1s, Sprite &r2s, Sprite &r3s, Sprite &r4s, int sum[], Vector2f red[])
{
	if (roll == 6)
	{
		if (r1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homeRed[0] == true)
			{
				r1s.setPosition(Vector2f(red[0]));
				homeRed[0] = false;
			}
		}
		else if (r2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homeRed[1] == true)
			{

				r2s.setPosition(Vector2f(red[0]));
				homeRed[1] = false;
			}
		}
		else if (r3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homeRed[2] == true){
				r3s.setPosition(Vector2f(red[0]));
				homeRed[2] = false;
			}
		}
		else if (r4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homeRed[3] == true)
			{
				r4s.setPosition(Vector2f(red[0]));
				homeRed[3] = false;
			}
		}
	}
}
void moveTokenRed(RenderWindow &window, Sprite &r1s, Sprite &r2s, Sprite &r3s, Sprite &r4s, int sum[], Vector2f red[])
{

	if (r1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeRed[0] == false && roll <= 6)
		{
			sumRed[0] = sumRed[0] + roll;
			int r1 = sumRed[0];
			r1s.setPosition(Vector2f(red[0 + r1]));
			if (sumRed[1] > 55)
				r1s.setPosition(Vector2f(-100, 100));

		}
	}

	else if (r2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeRed[1] == false && roll <= 6)
		{
			sumRed[1] = sumRed[1] + roll;
			int r2 = sumRed[1];
			r2s.setPosition(Vector2f(red[0 + r2]));
			if (sumRed[1] > 55)
				r2s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (r3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeRed[2] == false && roll <= 6)
		{

			sumRed[2] = sumRed[2] + roll;
			int r3 = sumRed[2];
			r3s.setPosition(Vector2f(red[0 + r3]));
			if (sumRed[1] > 55)
				r3s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (r4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeRed[3] == false && roll <= 6)
		{
			sumRed[3] = sumRed[3] + roll;
			int r4 = sumRed[3];
			r4s.setPosition(Vector2f(red[0 + r4]));
			if (sumRed[1] > 55)
				r4s.setPosition(Vector2f(-100, 100));
		}
	}
}
void moveFirstIndexyellow(RenderWindow &window, Sprite &y1s, Sprite &y2s, Sprite &y3s, Sprite &y4s, int sum[], Vector2f yellow[])
{
	if (roll == 6)
	{
		if (y1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homeyellow[0] == true){
				y1s.setPosition(Vector2f(yellow[0]));
				homeyellow[0] = false;
			}
		}
		else if (y2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homeyellow[1] == true)
			{

				y2s.setPosition(Vector2f(yellow[0]));
				homeyellow[1] = false;
			}
		}
		else if (y3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homeyellow[2] == true){
				y3s.setPosition(Vector2f(yellow[0]));
				homeyellow[2] = false;
			}
		}
		else if (y4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homeyellow[3] == true)
			{
				y4s.setPosition(Vector2f(yellow[0]));
				homeyellow[3] = false;
			}
		}
	}
}
void moveTokenyellow(RenderWindow &window, Sprite &y1s, Sprite &y2s, Sprite &y3s, Sprite &y4s, int sum[], Vector2f yellow[])
{

	if (y1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeyellow[0] == false && roll <= 6)
		{
			sumyellow[0] = sumyellow[0] + roll;
			int y1 = sumyellow[0];
			y1s.setPosition(Vector2f(yellow[0 + y1]));
			if (sumyellow[0] > 55)
				y1s.setPosition(Vector2f(-100, 100));
		}
	}

	else if (y2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeyellow[1] == false && roll <= 6)
		{
			sumyellow[1] = sumyellow[1] + roll;
			int y2 = sumyellow[1];
			y2s.setPosition(Vector2f(yellow[0 + y2]));
			if (sumyellow[1] > 55)
				y2s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (y3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeyellow[2] == false && roll <= 6)
		{

			sumyellow[2] = sumyellow[2] + roll;
			int y3 = sumyellow[2];
			y3s.setPosition(Vector2f(yellow[0 + y3]));
			if (sumyellow[2] > 55)
				y3s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (y4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeyellow[3] == false && roll <= 6)
		{
			sumyellow[3] = sumyellow[3] + roll;
			int y4 = sumyellow[3];
			y4s.setPosition(Vector2f(yellow[0 + y4]));
			if (sumyellow[3] > 55)
				y4s.setPosition(Vector2f(-100, 100));
		}
	}
}
void moveFirstIndexgreen(RenderWindow &window, Sprite &g1s, Sprite &g2s, Sprite &g3s, Sprite &g4s, int sum[], Vector2f green[])
{
	if (roll == 6)
	{
		if (g1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homegreen[0] == true)
			{
				g1s.setPosition(Vector2f(green[0]));
				homegreen[0] = false;
			}
		}
		else if (g2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homegreen[1] == true)
			{
				g2s.setPosition(Vector2f(green[0]));
				homegreen[1] = false;
			}
		}
		else if (g3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homegreen[2] == true)
			{
				g3s.setPosition(Vector2f(green[0]));
				homegreen[2] = false;
			}
		}
		else if (g4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homegreen[3] == true)
			{
				g4s.setPosition(Vector2f(green[0]));
				homegreen[3] = false;
			}
		}
	}
}
void moveTokengreen(RenderWindow &window, Sprite &g1s, Sprite &g2s, Sprite &g3s, Sprite &g4s, int sum[], Vector2f green[])
{

	if (g1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homegreen[0] == false && roll <= 6)
		{
			sumgreen[0] = sumgreen[0] + roll;
			int r1 = sumgreen[0];
			g1s.setPosition(Vector2f(green[0 + r1]));
			if (sumgreen[0] > 55)
				g1s.setPosition(Vector2f(-100, 100));
		}
	}

	else if (g2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homegreen[1] == false && roll <= 6)
		{
			sumgreen[1] = sumgreen[1] + roll;
			int r2 = sumgreen[1];
			g2s.setPosition(Vector2f(green[0 + r2]));
			if (sumgreen[1] > 55)
				g2s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (g3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homegreen[2] == false && roll <= 6)
		{
			sumgreen[2] = sumgreen[2] + roll;
			int r3 = sumgreen[2];
			g3s.setPosition(Vector2f(green[0 + r3]));
			if (sumgreen[2] > 55)
				g3s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (g4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homegreen[3] == false && roll <= 6)
		{
			sumgreen[3] = sumgreen[3] + roll;
			int r4 = sumgreen[3];
			g4s.setPosition(Vector2f(green[0 + r4]));
			if (sumgreen[3] > 55)
				g4s.setPosition(Vector2f(-100, 100));
		}
	}
}
void moveFirstIndexblue(RenderWindow &window, Sprite &b1s, Sprite &b2s, Sprite &b3s, Sprite &b4s, int sum[], Vector2f blue[])
{
	if (roll == 6)
	{
		if (b1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homeblue[0] == true)
			{
				b1s.setPosition(Vector2f(blue[0]));
				homeblue[0] = false;
			}
		}
		else if (b2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homeblue[1] == true)
			{
				b2s.setPosition(Vector2f(blue[0]));
				homeblue[1] = false;
			}
		}
		else if (b3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			if (homeblue[2] == true)
			{
				b3s.setPosition(Vector2f(blue[0]));
				homeblue[2] = false;
			}
		}
		else if (b4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			if (homeblue[3] == true)
			{
				b4s.setPosition(Vector2f(blue[0]));
				homeblue[3] = false;
			}
		}

	}
}
void moveTokenblue(RenderWindow &window, Sprite &b1s, Sprite &b2s, Sprite &b3s, Sprite &b4s, int sum[], Vector2f blue[])
{
	if (b1s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeblue[0] == false && roll <= 6)
		{
			sumblue[0] = sumblue[0] + roll;
			int r1 = sumblue[0];
			b1s.setPosition(Vector2f(blue[0 + r1]));
			if (sumblue[0] > 55)
				b1s.setPosition(Vector2f(-100, 100));
		}
	}

	else if (b2s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeblue[1] == false && roll <= 6)
		{
			sumblue[1] = sumblue[1] + roll;
			int r2 = sumblue[1];
			b2s.setPosition(Vector2f(blue[0 + r2]));
			if (sumblue[1] > 55)
				b2s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (b3s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeblue[2] == false && roll <= 6)
		{
			sumblue[2] = sumblue[2] + roll;
			int r3 = sumblue[2];
			b3s.setPosition(Vector2f(blue[0 + r3]));
			if (sumblue[2] > 55)
				b3s.setPosition(Vector2f(-100, 100));
		}
	}
	else if (b4s.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
	{
		if (homeblue[3] == false && roll <= 6)
		{
			sumblue[3] = sumblue[3] + roll;
			int r4 = sumblue[3];
			b4s.setPosition(Vector2f(blue[0 + r4]));
			if (sumblue[3] > 55)
				b4s.setPosition(Vector2f(-100, 100));
		}
	}
}
void motionred(RenderWindow &window, Sprite &r1s, Sprite &r2s, Sprite &r3s, Sprite &r4s, int sum[], Vector2f red[], Event& event, Sprite&dices)
{
	if (roll == 6)
	{
		moveFirstIndexRed(window, r1s, r2s, r3s, r4s, sum, red);
	}
	moveTokenRed(window, r1s, r2s, r3s, r4s, sum, red);

}

void motionyellow(RenderWindow &window, Sprite &y1s, Sprite &y2s, Sprite &y3s, Sprite &y4s, int sum[], Vector2f yellow[], Event & event, Sprite&dices)
{
	if (roll == 6)
	{
		moveFirstIndexyellow(window, y1s, y2s, y3s, y4s, sum, yellow);
	}
	moveTokenyellow(window, y1s, y2s, y3s, y4s, sum, yellow);

}
void motiongreen(RenderWindow &window, Sprite &g1s, Sprite &g2s, Sprite &g3s, Sprite &g4s, int sum[], Vector2f green[], Event & event, Sprite &dices)
{
	if (roll == 6)
	{
		moveFirstIndexgreen(window, g1s, g2s, g3s, g4s, sum, green);
	}
	moveTokengreen(window, g1s, g2s, g3s, g4s, sum, green);

}
void motionblue(RenderWindow &window, Sprite &b1s, Sprite &b2s, Sprite &b3s, Sprite &b4s, int sum[], Vector2f blue[], Event & event, Sprite & dices)
{
	if (roll == 6)
	{
		moveFirstIndexblue(window, b1s, b2s, b3s, b4s, sum, blue);
	}
	moveTokenblue(window, b1s, b2s, b3s, b4s, sum, blue);
}
void inst()
{
	ifstream fin;
	char ch;

	fin.open("ludo.txt");
	while (!fin.eof())
	{
		fin.get(ch);
		cout << ch;
	}

	fin.close();

}