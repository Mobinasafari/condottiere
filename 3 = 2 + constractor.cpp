

#include<iostream>
#include<ctime>
using namespace std ;

class card{
	
	public :
		card( string input_name , int input_number_of_card , int input_value)
		{
			set_name(  input_name )	;
			set_number_of_card( input_number_of_card );
			set_value(input_value);
		}
			
		void set_name( string input_name )
		{
			name = input_name ;
		}
		void set_number_of_card( int input_number_of_card)
		{
			number_of_card = input_number_of_card ;
		}
		void set_value( int input_value )
		{
			value = input_value ;
		}
		string get_name()
		{
			return name ;
		}
		int get_number_of_card()
		{
			return number_of_card;
		}
		int get_value()
		{
			return value ;
		}
		virtual void print()
		{
			cout << "A" ;
		}
		
	protected :
		int value ;
		string name ;
		int number_of_card ;
		
};

class yello_card : public card{
	
	public :
		yello_card( string input_name , int input_number_of_card , int input_value) : card(input_name ,input_number_of_card , input_value)
		{
			
		}
		virtual void print()
		{
			cout << "yello_card" << "  ";
		}
	
};
class perpule_card : public card{
	
	public :
		perpule_card( string input_name , int input_number_of_card , int input_value) : card(input_name , input_number_of_card , input_value)

		{
			
		}
	
		virtual void print()
		{
			cout << "perpule_card" << "  ";
		}
	
};
class Matarsak : public perpule_card {
	
	public :
		Matarsak( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}		
		virtual void print()
		{
			cout << "Matarsak" << "  ";
		}
		
};
class Tablzan : public perpule_card {
	
	public :
		Tablzan( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print()
		{
			cout << "Tablzan" << "  ";
		}
		
};
class Shahdokht : public perpule_card {
	
	public :
		Shahdokht( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print()
		{
			cout << "Shahdokht" << "  ";
		}
		
};
class Bahar : public perpule_card {
	
	public :
		Bahar( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print()
		{
			cout << "Bahar" << "  ";
		}
		
};
class Zemestan : public perpule_card {
	
	public :
		Zemestan( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print()
		{
			cout << "Zemestan" << "  ";
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
			cout << Arry_of_hand_card[0] -> get_name() << " ";
			cout << Arry_of_hand_card[0] -> get_number_of_card() << " ";
			
		}
	private :
		card *Arry_of_hand_card[10];
		string name ;
};

class control{
	public :
	void card_initializer()
	{
		yello_card yellow("sarbaz" , 10 , 1) ;
		card_Arry[0] = &yellow ;
		
		
		perpule_card purple("purpule" , 58 , 1) ;
		card_Arry[1] = &purple ;
		
		Matarsak matarsak("matarsak" , 16 , 0);
		card_Arry[2] = &matarsak ;
		
		
		Tablzan tablzan("tablzan" , 6 , 3);
		card_Arry[3] = &tablzan ;
		
		Shahdokht shahdokht("shahdokht" , 3 , 5);
		card_Arry[4] = &shahdokht ;
		
		Bahar bahar("bahar" , 3 , 4);
		card_Arry[5] = &bahar ;
		
		Zemestan zemestan("zemestan" , 3 , 2);
		card_Arry[6] = &zemestan ;
		
		toozi();
			
	}
	void toozi()
	{
		int random ;
		srand( time (0)) ;
	    random = rand() % 7;
	    
	    playerArry[0].set_arry( card_Arry[random] );
	    
	    random = rand() % 7; 
	    
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











