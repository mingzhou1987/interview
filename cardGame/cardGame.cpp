#include <iostream>
using namespace std;

enum suit{Hongtao = 1, Heitao, Fangkui, Meihua};
class card
{
private:
	int value;
	suit color;
public:
	card(int num, suit colour):value(num),color(colour){}
	card()
	{ 
	  value = 1;
	  color = Hongtao;
	}
	
	card(const card& sour):value(sour.value),color(sour.color){}
	card& operator=(const card& sour)
	{
		this->value = sour.value;
		this->color = sour.color;
		return *this;
	}
	int getValue()
	{
		return value;
	}
	suit getColor()
	{
		return color;
	}
};

void swap(card a[], int i, int j)
{
	if(i != j)
	{
		card *tmp = &a[i];
		a[i] = a[j];
		a[j] = *tmp; 
	}
}

class cardGame
{
private:
	card deck[52];
public:
	cardGame()
	{
		for(int i = 1; i <= 13; i++)
			for(int j = 1; j <= 4 ; j++)
			{
				suit m;
				switch(j)
				{
				case 1:
					m = Hongtao;
					break;
				case 2:
					m = Heitao;
					break;
				case 3:
					m = Fangkui;
					break;
				case 4:
					m = Meihua;
					break;
				}
				deck[i*j - 1] = card(i, m);
			}
	}
};


void main()
{
	cardGame *p = new cardGame();
}
