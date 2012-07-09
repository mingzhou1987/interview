
using namespace std;

enum suit{Hongtao, Heitao, Fangkui, Meihua};

class card
{
private:
	int value;
	suit color;
public:
	card(int num, suit colour):value(num),color(suit)
	{

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
class cardGame
{


};