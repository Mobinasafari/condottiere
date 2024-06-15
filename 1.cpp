#include<iostream>
#include<ctime>
using namespace std ;

class card{
	
	public :
		card( int number )
		{
			num  = number ;
		}
		int get_num()
		{
			return num ;
		}
		virtual void print()
		{
			cout << "A" ;
		}
		
	protected :
		int num ;
		
};

class yello_card : public card{
	
	public :
		yello_card(int number) : card( number )
		{
			
		}
		virtual void print()
		{
			cout << "yello_card" ;
		}
	
};
class perpule_card : public card{
	
	public :
		perpule_card( int number) : card( number ){}
	
		virtual void print()
		{
			cout << "perpule_card" ;
		}
	
};
class player{
	
	public :
		void set_name(string input_name)
		{
			name = input_name ;
		}
		void set_arry( card* my_card)
		{
			Arry_of_hand_card[0] = my_card ;
			print_card();
		}
		void print_card() 
		{
			Arry_of_hand_card[0] -> print();
		}
	private :
		card *Arry_of_hand_card[10];
		string name ;
};

class control{
	public :
	void card_initializer()
	{
		yello_card yellow(10) ;
		card_Arry[0] = &yellow ;
		
		
		perpule_card purple(5) ;
		card_Arry[1] = &purple ;
		
		toozi();
			
	}
	void toozi()
	{
		int random ;
		srand( time (0)) ;
	    random = rand() % 2;
	    
	    playerArry[0].set_arry( card_Arry[random] );
	    
	    random = rand() % 2; 
	    
	    playerArry[1].set_arry( card_Arry[random] );
	    
	}
	private :
		card *card_Arry[5];
		player playerArry[2];
		
};
int main()
{
	control object ;
	
	object.card_initializer();
	
}















