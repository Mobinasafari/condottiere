

#include<iostream>
#include<ctime>
#include <fstream>
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
		void set_number_of_toozi_card( int input_number_of_toozi_card)
		{
			number_of_toozi_card = input_number_of_toozi_card ;
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
		int get_number_of_toozi_card()
		{
			return number_of_toozi_card;
		}
		int get_value()
		{
			return value ;
		}
		virtual void print( int &score)
		{
			cout << "A" << " " << score ;
			
		}
		
	protected :
		int value ;
		string name ;
		int number_of_card ;
		int number_of_toozi_card = 0 ;
		
};

class yello_card : public card{
	
	public :
		yello_card( string input_name , int input_number_of_card , int input_value) : card(input_name ,input_number_of_card , input_value)
		{
			
		}
		virtual void print(int &score)
		{
			cout << "yello_card" << "  " << score+value;
			score = score + value ;
		}
	
};
class perpule_card : public card{
	
	public :
		perpule_card( string input_name , int input_number_of_card , int input_value) : card(input_name , input_number_of_card , input_value)

		{
			
		}
	
		virtual void print( int &score)
		{
			cout << "perpule_card" << "  " << score;
		}
	
};
class Matarsak : public perpule_card {
	
	public :
		Matarsak( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}		
		virtual void print(int &score)
		{
			cout << "Matarsak" << "  " << score ;
		}
		
};
class Tablzan : public perpule_card {
	
	public :
		Tablzan( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print( int &score)
		{
			cout << "Tablzan" << "  " << score ;
		}
		
};
class Shahdokht : public perpule_card {
	
	public :
		Shahdokht( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print( int &score)
		{
			cout << "Shahdokht" << "  " << score;
		}
		
};
class Bahar : public perpule_card {
	
	public :
		Bahar( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print(int &score)
		{
			cout << "Bahar" << "  " << score;
		}
		
};
class Zemestan : public perpule_card {
	
	public :
		Zemestan( string input_name , int input_number_of_card , int input_value) : perpule_card(input_name , input_number_of_card , input_value)
		{
			
		}
		virtual void print(int &score)
		{
			cout << "Zemestan" << "  " << score ;
		}
		
};
class player{
	
	public :
		void set_name( string input_name )
		{
			name = input_name ;
		}
		void set_age( int input_age )
		{
			age = input_age ;
		}
		void set_color( string input_color)
		{
			color = input_color ;
		}
		void set_number_of_cards( int input_number_of_cards)
		{
			number_of_card = input_number_of_cards ;
		}
		void set_number_of_played_cards( int input_number_of_played_cards)
		{
			number_of_played_card = input_number_of_played_cards ;
		}
		void set_pass( int input_pass )
		{
			pass = input_pass ;
		}
		void set_score( int input_score )
		{
			score = input_score ;
		}
		
		string get_name()
		{
			return name ;
		}
		
		int get_age()
		{
			return age ;
		}
		
		string get_color()
		{
			return color ;
		}
		
		int get_number_of_card()
		{
			return number_of_card ;
		}
		int get_number_of_played_card()
		{
			return number_of_played_card ;
		}
		int get_pass()
		{
			return pass;
		}
		int get_score()
		{
			return score;
		}
		int set_number_of_ostan_fath_shode( int input_number_of_ostan_fath_shode)
		{
			number_of_ostan_fath_shode = input_number_of_ostan_fath_shode;
		}
		int get_number_of_ostan_fath_shode()
		{
			return number_of_ostan_fath_shode ;
		}
		
		
		void set_arry( card* my_card , int andis)
		{
			Arry_of_hand_card[andis] = my_card ;
			//print_card();
		}
		
	
		void print_all_hand_cards( int andis , bool saving ) //save : prototaype 
		{
			if ( saving == false)
			{
				cout << "cards of player : " << andis + 1 << endl ;
			
				for( int i = 0 ; i < number_of_card -  number_of_played_card ; i++)
				{
					cout << Arry_of_hand_card[i] -> get_name() << "  ";
					//Arry_of_hand_card[i] -> print() ;
					//cout << "  ";		
				} 
			}
			else //save 
			{
				ofstream my_file1;
				my_file1.open("game.txt" , ios::app);
				my_file1 << endl << "number_of_cards_player " << andis+1 << "  " << number_of_card << endl;
				my_file1 << "cards_of_player " << andis + 1 << "   " << endl ;
				for( int i = 0 ; i < number_of_card -  number_of_played_card ; i++)
				{
					my_file1 << Arry_of_hand_card[i] -> get_name() << "  ";		
				} 
				my_file1 << endl ;
			}
			
			print_played_card(andis , saving);
			
		}
		void print_played_card(int andis , bool saving)
		{
			if ( saving == false)
			{
				cout << endl<< endl << "played card : " << endl ;
				for ( int i = 0 ; i < number_of_played_card ; i++)
				{
					cout << Arry_of_hand_played_card[i] -> get_name() << "  ";
				}
			}
			else 
			{
				ofstream my_file1;
				my_file1.open("game.txt" , ios::app);
				my_file1 << endl << "number_of_played_cards_player " << andis+1 << "  " << number_of_played_card << endl;
				my_file1 << "played_cards_of_player " << andis + 1 << "   " << endl ;
				for ( int i = 0 ; i < number_of_played_card ; i++)
				{
					my_file1 << Arry_of_hand_played_card[i] -> get_name() << "  ";
				}
			}
			
		}
		
		void play_this_card( string name , int andis_of_player )
		{
			
			bool find = 0 ;
			
			for ( int i = 0 ; i < number_of_card  ; i++)
			{
				
				if ( (  Arry_of_hand_card[i] -> get_name() == name ) && ( find == 0 )  )
				{
					//Arry_of_hand_card[i] -> set_name("0");
					cout << endl << "score : " << score << endl ;
					emtiaze(i);
					cout << endl << "score : " << score << endl ;
					add_played_card(i);
					delet( i );
					//cout << endl << "delet" << endl ;
					//number_of_card = number_of_card - 1 ;
					number_of_played_card++ ;
					find = 1;
					break;
				}	
			}
			if ( find == 0 )
			{
				cout << "you havent this card ! ";
			}
			
		}
		void add_played_card(int andis)
		{
			Arry_of_hand_played_card[number_of_played_card] = Arry_of_hand_card[andis] ;
		}
		
		void delet( int andis )
		{
			for ( int i = andis ; i < number_of_card - 1 ; i++)
			{
				Arry_of_hand_card[i] = Arry_of_hand_card[i+1] ;	
			}
		}
		
		void emtiaze( int andis )
		{
			Arry_of_hand_card[andis] -> print(score);
		}
		
	private :
		card *Arry_of_hand_card[20];
		card *Arry_of_hand_played_card[20];
		
		string name ;
		int age ;
		string color ;
		int number_of_card = 10 ;
		int number_of_played_card = 0 ;
		int pass = 0 ;
		int score = 0 ;
		int number_of_ostan_fath_shode = 0 ;
};
class ostan{
	
	public  :
		
		void set_name( string input_name )
		{
			name = input_name ;
		}
		void set_player_name( string input_player_name )
		{
			player_name = input_player_name ;
		}
		void set_status( int input_status )
		{
			status = input_status ;
		}
		void set_name_of_neighbors( string input_name_of_neighbor )
		{
			Arry_name_of_neighbors[number_of_neighbors] = input_name_of_neighbor;
			number_of_neighbors++ ;
		}
		void set_number_of_neighbors( int input_number_of_neighbors)
		{
			number_of_neighbors = input_number_of_neighbors ;
		}
		
		string get_name()
		{
			return name ;
		}
		string get_player_name()
		{
			return player_name ;
		}
		int get_status()
		{
			return status ;
		}
		int get_number_of_neighbors()
		{
			return number_of_neighbors  ;
		}
		/*
		void print()
		{
			cout << endl <<  name << " " << number_of_neighbors << endl ;
			for ( int i = 0 ; i < number_of_neighbors ; i++)
			{
				cout << Arry_name_of_neighbors[i] << "  ";
			}
		}*/
		string get_one_name( int andis )
		{
			return Arry_name_of_neighbors[andis] ;
		}
	
	private :
		
		int status = 0 ;
		string name ;
		string player_name ;
		string Arry_name_of_neighbors[6];
		int number_of_neighbors = 0 ;
};

class control{
	
	public :
		void start_game( int number_of_players)
		{
			int end_of_game = 0 ;
			
			Players_Initializer( number_of_players );
			ostan_initializer();
			/*for ( int i = 0 ; i < 14 ; i++)
			{
				vector_of_ostans[i].print();
			}*/
			toozi(number_of_players);
			who_is_starter( number_of_players );
			
			while ( end_of_game == 0 )
			{
				int stutus = start_game1( number_of_players);
	        	recavery(number_of_players , stutus );
			}     
		}
	
	void Players_Initializer( int number_of_players )
	{	
		string Name ;
		int Age ;
		
		for ( int i = 0 ; i < number_of_players ; i++)
		{
			cout << "enter name and age of player "<< i+1 << " : " ;
			cin >> Name ;
			cin >> Age ;
			playerArry[i].set_age( Age );
			playerArry[i].set_name( Name );				
		}			
	}
	
	void card_initializer( int number_of_players)
	{
		yello_card yellow1( "1" , 10 , 1) ;
		card_Arry[0] = &yellow1 ;
		
		yello_card yellow2( "2" , 8 , 2) ;
		card_Arry[1] = &yellow2 ;
		
		yello_card yellow3( "3" , 8 , 3) ;
		card_Arry[2] = &yellow3 ;
		 
		yello_card yellow4( "4" , 8 , 4) ;
		card_Arry[3] = &yellow4 ; 
		
		yello_card yellow5( "5" , 8 , 5) ;
		card_Arry[4] = &yellow5 ;
		
		yello_card yellow6( "6" , 8 , 6) ;
		card_Arry[5] = &yellow6 ; 
		
		yello_card yellow10( "10" , 8 , 10) ;
		card_Arry[6] = &yellow10 ;
		
		
		Matarsak matarsak("matarsak" , 16 , 0);
		card_Arry[7] = &matarsak ;
		
		
		Tablzan tablzan("tablzan" , 6 , 3);
		card_Arry[8] = &tablzan ;
		
		Shahdokht shahdokht("shahdokht" , 3 , 5);
		card_Arry[9] = &shahdokht ;
		
		Bahar bahar("bahar" , 3 , 4);
		card_Arry[10] = &bahar ;
		
		Zemestan zemestan("zemestan" , 3 , 2);
		card_Arry[11] = &zemestan ;
		
		
		start_game(number_of_players);
		//ran time 		
	}
	void ostan_initializer()
	{
		
		vector_of_ostans[0].set_name("BELLA");
        vector_of_ostans[0].set_name_of_neighbors("CALINE");
        vector_of_ostans[0].set_name_of_neighbors("PLADACI");
        vector_of_ostans[0].set_name_of_neighbors("BORGE");
        
        vector_of_ostans[1].set_name("CALINE");
        vector_of_ostans[1].set_name_of_neighbors("BELLA");
        vector_of_ostans[1].set_name_of_neighbors("PLADACI");
        vector_of_ostans[1].set_name_of_neighbors("BORGE");
        vector_of_ostans[1].set_name_of_neighbors("ENNA");
        vector_of_ostans[1].set_name_of_neighbors("ATELA");
        
        vector_of_ostans[2].set_name("ENNA");
        vector_of_ostans[2].set_name_of_neighbors("CALINE");
        vector_of_ostans[2].set_name_of_neighbors("DIMASE");
        vector_of_ostans[2].set_name_of_neighbors("BORGE");
        vector_of_ostans[2].set_name_of_neighbors("ATELA");


        vector_of_ostans[3].set_name("ATELA");
        vector_of_ostans[3].set_name_of_neighbors("CALINE");
        vector_of_ostans[3].set_name_of_neighbors("DIMASE");
        vector_of_ostans[3].set_name_of_neighbors("ENNA");
        
        

        vector_of_ostans[4].set_name("PLADACI");
        vector_of_ostans[4].set_name_of_neighbors("BELLA");
        vector_of_ostans[4].set_name_of_neighbors("CALINE");
        vector_of_ostans[4].set_name_of_neighbors("BORGE");
        vector_of_ostans[4].set_name_of_neighbors("MORINA");
        vector_of_ostans[4].set_name_of_neighbors("ROLLO");
        

        vector_of_ostans[5].set_name("BORGE");
        vector_of_ostans[5].set_name_of_neighbors("CALINE");
        vector_of_ostans[5].set_name_of_neighbors("PLADACI");
        vector_of_ostans[5].set_name_of_neighbors("MORINA");
        vector_of_ostans[5].set_name_of_neighbors("OLIVADI");
        vector_of_ostans[5].set_name_of_neighbors("DIMASE");
        vector_of_ostans[5].set_name_of_neighbors("ENNA");
        

        vector_of_ostans[6].set_name("DIMASE");
        vector_of_ostans[6].set_name_of_neighbors("ATELA");
        vector_of_ostans[6].set_name_of_neighbors("ENNA");
        vector_of_ostans[6].set_name_of_neighbors("BORGE");
        vector_of_ostans[6].set_name_of_neighbors("OLIVADI");
        

        vector_of_ostans[7].set_name("MORINA");
        vector_of_ostans[7].set_name_of_neighbors("PLADACI");
        vector_of_ostans[7].set_name_of_neighbors("BORGE");
        vector_of_ostans[7].set_name_of_neighbors("OLIVADI");
        vector_of_ostans[7].set_name_of_neighbors("ARMENTO");
        vector_of_ostans[7].set_name_of_neighbors("TALMONE");
        vector_of_ostans[7].set_name_of_neighbors("ROLLO");
        

        vector_of_ostans[8].set_name("OLIVADI");
        vector_of_ostans[8].set_name_of_neighbors("MORINA");
        vector_of_ostans[8].set_name_of_neighbors("BORGE");
        vector_of_ostans[8].set_name_of_neighbors("DIMASE");
        vector_of_ostans[8].set_name_of_neighbors("LIA");
        vector_of_ostans[8].set_name_of_neighbors("ARMENTO");
    

        vector_of_ostans[9].set_name("ROLLO");
        vector_of_ostans[9].set_name_of_neighbors("PLADACI");
        vector_of_ostans[9].set_name_of_neighbors("MORINA");
        vector_of_ostans[9].set_name_of_neighbors("TALMONE");
        vector_of_ostans[9].set_name_of_neighbors("ELINIA");


        vector_of_ostans[10].set_name("TALMONE");
        vector_of_ostans[10].set_name_of_neighbors("ROLLO");
        vector_of_ostans[10].set_name_of_neighbors("MORINA");
        vector_of_ostans[10].set_name_of_neighbors("ARMENTO");
        vector_of_ostans[10].set_name_of_neighbors("ENNA");
        

    	vector_of_ostans[11].set_name("ARMENTO");
        vector_of_ostans[11].set_name_of_neighbors("TALMONE");
        vector_of_ostans[11].set_name_of_neighbors("MORINA");
        vector_of_ostans[11].set_name_of_neighbors("OLIVADI");
        vector_of_ostans[11].set_name_of_neighbors("LIA");


    	vector_of_ostans[12].set_name("LIA");
        vector_of_ostans[12].set_name_of_neighbors("OLIVADI");
        vector_of_ostans[12].set_name_of_neighbors("ARMENTO");
        

        vector_of_ostans[13].set_name("ELINIA");
        vector_of_ostans[13].set_name_of_neighbors("ROLLO");
        vector_of_ostans[13].set_name_of_neighbors("TALMONE");

	}
	void toozi( int number_of_players)
	{
		int random ;
		srand( time (0)) ;
	    for ( int i = 0 ; i < number_of_players ; i++)
	    {
	    	playerArry[i].set_number_of_cards( 10 + playerArry[i].get_number_of_ostan_fath_shode() );
		}
	    
	    for ( int i = 0 ; i < number_of_players ; i++)
	    {
	    	int j = 0 ;
	    	while (  j < playerArry[i].get_number_of_card() )
	    	{
	    		random = rand() % 12 ;
	    		
	    		if (card_Arry[random] -> get_number_of_card() != card_Arry[random] -> get_number_of_toozi_card() )
	    		{
	    			playerArry[i].set_arry( card_Arry[random] , j );
	    			int num = card_Arry[random] -> get_number_of_toozi_card() + 1 ;
	    			card_Arry[random] -> set_number_of_toozi_card( num );
	    			j++ ;
				}		
			}	    	
		}
	}
	
	int who_is_starter( int number_of_players )
	{
		int age_of_starter = playerArry[0].get_age() ;
		
		starter = 1 ;
		
		for ( int i = 0 ; i < number_of_players ; i++ )
		{
			if ( playerArry[i].get_age()  < age_of_starter )
			{
				starter = i+1 ;
			}
		}
		cout << endl << "starter : "<< starter << endl ;
		//return starter;
		cout << "player " << starter << " determine the war province : " ;
		//cin >> gang ;
		get_gang();
	}
	
	
	int start_game1( int number_of_players)
	{
		bool pass = 0 ;
		bool have_card = 0 ;
		
		while ( pass == 0 && have_card == 0 )
		{
			pass = 1 ;
			
			for ( int i = 0 ; i < number_of_players ; i++)
			{
				if ( playerArry[i].get_pass() == 0 )
				{
					pass = 0 ;
				}
			}
			//have_card = 1 ;
			int counter_of_players_that_dont_have_card = 0 ;
			
			for ( int i = 0 ; i < number_of_players ; i++)
			{
				if ( playerArry[i].get_number_of_card() == playerArry[i].get_number_of_played_card() )
				{
					counter_of_players_that_dont_have_card++ ;
				}	
			}
			if (counter_of_players_that_dont_have_card == number_of_players - 1 )
			{
				have_card = 1 ;
			}
			else
			{
				have_card = 0 ;
			}
			
			if ( pass == 0 && have_card == 0 )
			{
				one_door_game(number_of_players);
			}
		}
		if ( have_card == 1 )
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	
	void one_door_game( /* int starter ,*/ int number_of_players )
	{
		for ( int i = starter-1 ; i < starter-1 + number_of_players ; i++ ) //baraye charkheshi boodan
		{
			if ( i < number_of_players )
			{
				if ( playerArry[i].get_pass() == 0 )
				{
					play_card( i , number_of_players);
				}
				else 
				{
					cout << endl << "player " << i+1 << " you have passed " << endl << endl << "_________________________________________"	<< endl ;
				}
			}
			else
			{
				if ( playerArry[i-number_of_players].get_pass() == 0 )
				{
					play_card( i-number_of_players , number_of_players );
				}
				else 
				{
					cout << endl << "player " << i-number_of_players+1 << " you have passed " << endl << endl << "_________________________________________"	<< endl ;
				}
			}
			
		}	
	}
	
	void play_card( int playerr , int number_of_players )
	{
		
		cout << endl << "player " << playerr + 1 << endl << endl ;
		print_hand_cards( playerr );
		
		string card_name ;
		
		if ( playerArry[playerr].get_pass() == 1 )
		{
			cout << endl << "you have passed " ;
		}
		
		else if ( playerArry[playerr].get_number_of_card() != playerArry[playerr].get_number_of_played_card() ){
		
			cout << endl << endl << "choise your card to play11 : "  ;
			cin >> card_name ;
			if ( card_name == "s")
			{
				save(number_of_players);
			}
		}
		else 
		{
			cout << endl << "you havent card !" << endl ;
		}
		
		if ( card_name == "pass")
		{
			cout << endl << "you passed " << endl ;
			playerArry[playerr].set_pass(1);
		}
		
		else {
		
			playerArry[playerr].play_this_card( card_name , playerr);
		}
		cout << endl << "_________________________________________"	<< endl ;		
	}
	
	void print_hand_cards( int andis )
	{
		playerArry[andis].print_all_hand_cards(andis , saving);
	}
	
	void this_rand_winner()
	{
		
	}
	
	void recavery(int number_of_players , int stutus)
	{
		if ( stutus ==  1 )
		{
			//cart nadare
			toozi(number_of_players);
			for ( int i = 0 ; i < number_of_players ; i++)
			{
				playerArry[i].set_number_of_played_cards(0) ;
			}
		}
		
		if ( stutus == 2 )
		{
			//hame pass dadan
			for ( int i = 0 ; i < number_of_players ; i++)
			{
				playerArry[i].set_pass(0);
			}
			cout << endl <<"*********************  next rand  ************************  " << endl ;
			
			Determine_the_winner(number_of_players);
		}	
	}
	
	void Determine_the_winner( int number_of_players )
	{
		starter = 1 ;
		//playerArry[2].set_score(3);
		for ( int i = 0 ; i < number_of_players ; i++)
		{
			if ( playerArry[i].get_score() > playerArry[starter-1].get_score() )
			{
				starter = i + 1 ;
			}
		}
		cout << "the winner is player " << starter ;
		end_rand(number_of_players);
	}
	
	void end_rand(int number_of_players)
	{
		for ( int i = 0 ; i < number_of_players ; i++)
		{
			playerArry[i].set_score(0);
		}
		//playerArry[starter-1].set_number_of_cards( playerArry[starter-1].get_number_of_card() + 1 );
		
		playerArry[starter-1].set_number_of_ostan_fath_shode(playerArry[starter-1].get_number_of_ostan_fath_shode()+1);
		
		for ( int i = 0 ; i < 14 ; i++)
		{
		//	cout << vector_of_ostans[i].get_name();
			if (vector_of_ostans[i].get_name() == gang)
			{
				vector_of_ostans[i].set_player_name( playerArry[starter-1].get_name());
				cout << endl<< "fateh ostan " << vector_of_ostans[i].get_name() << " : " << vector_of_ostans[i].get_player_name() << endl ;
				//cout << endl << playerArry[starter-1].get_number_of_ostan_fath_shode() ;
			}
			//cout << "mmmmm"<<vector_of_ostans[i].get_player_name();
		}
		
		check_win();
		
		cout << endl << "player " << starter << " determine the war province : " ;
		//cin >> gang ;
		get_gang();
		
	}
	int get_gang() //Emtiaziiiiiiii  //jaygozin cin >> gang 
	{
		bool result = false ;
		bool finded  = false ;
		int count = 0 ;
		int maincount = 0 ;
		int andis = 0 ;
					
		while ( result == false  )
		{
			cin >> gang ;
			
			for ( int i = 0 ; i < 14 ; i++)
			{
				if (gang == vector_of_ostans[i].get_name() )
				{
					finded = true ;
					result = true ;
					break ;
				}
			}
			
			if ( finded == false )
			{
				//cout << gang.size();
				for ( int i = 0 ; i < 14 ; i++) 
				{
					count = 0 ;
					maincount = 0 ;
					andis = 0 ;
					
					for ( int j = 0 ; j < gang.size() ; j++ )
					{
						for ( int k = 0 ; k < vector_of_ostans[i].get_name().size() ; k++)
						{
							if ( gang[j] == vector_of_ostans[i].get_name()[k])
							{
								count++ ;
								//cout << gang[j] ;
								break ;	
							}
						}
					}
					//cout << endl <<  "count : " << count << endl ;
					
					//if ( count >= vector_of_ostans[i].get_name().size() - 2)
					if (( count >= gang.size() - 1 ) && ( count >= vector_of_ostans[i].get_name().size() - 1))
					{
						cout <<endl <<  "did you mean "<< vector_of_ostans[i].get_name() << "? " << endl ;
						string input ;
						cin >> input ;
						if ( input == "yes")
						{
							gang = vector_of_ostans[i].get_name() ;
							result = true ;
							break ;
						}	
					}
				}
				
			}
			if ( result == false)
			{
				cout << endl << "Enter again : " ;
			}
			
		}
	}
	void check_win()
	{
		check1();
		check2();
	}
	void check1()
	{
		string ostan_name ;
		int andis_ostan ;
		int counter = 1 ;
		
		for ( int i = 0 ; i < 14 ; i++)
		{
			if ( vector_of_ostans[i].get_name() == gang )
			{
				andis_ostan = i ;
			}
		}
		
		for ( int i = 0 ; i < vector_of_ostans[andis_ostan].get_number_of_neighbors() ; i++ )
		{
			ostan_name = vector_of_ostans[andis_ostan].get_one_name(i) ;
			
			for ( int i = 0 ; i < 14 ; i++ )
			{
				if ( vector_of_ostans[i].get_name() == ostan_name )
				{
					if ( vector_of_ostans[i].get_player_name() == playerArry[starter-1].get_name() ) 
					{
						counter++ ;
					}
				}
			}
		}
		

		if ( counter == 3 )
		{
			cout << endl << endl << " ___END OF GAME____" << endl;
			cout << endl <<  "The winner of this game is player : " << starter << endl ;
			cout << "Player "<< starter << " conquered 3 neighboring provincec and wins the game.";
			exit(0);
		}
		
	}
	void check2()
	{
		if ( playerArry[starter-1].get_number_of_ostan_fath_shode() == 5 )
		{
			cout << endl << endl << " ___END OF GAME____" << endl << endl ;
			cout << "The winner of this game player : " << starter << endl ;
			cout << "Player "<< starter << "conquered 5 non_adjacent provincec and wins the game.";
			exit(0);
		}	
	}
	void save(int number_of_players) //save
	{
		saving = true ;
		ofstream my_file1;
		my_file1.open("game.txt");
		my_file1 << "number_of_players  " << number_of_players << endl ;
			
		for ( int i = 0 ; i < number_of_players ; i++)
		{
			my_file1 << "player " << i+1 << "  " << playerArry[i].get_name() << "  " << playerArry[i].get_age() << "  " << playerArry[i].get_pass()<< "  " << playerArry[i].get_score() <<"  " <<playerArry[i].get_number_of_ostan_fath_shode() << endl ;
			
		}
		for (int i = 0 ; i < number_of_players ; i++)
		{
			//my_file1 << "number_of_cards_player " << i+1 << "  " << playerArry[i].get_number_of_card() << endl;
			playerArry[i].print_all_hand_cards(i , saving);
		}
		
		my_file1.close();
		exit(0);
	}
	
	private :
		
		card *card_Arry[100];
		player playerArry[6];
		ostan vector_of_ostans[14];
		
		int starter ;
		string gang;
		bool saving = false ;   //save
};
int main()
{
	control object ;
	
	int number_of_players ;
	cout << "enter number_of_players :";
	cin >> number_of_players ;
	cout << endl ;
	
	object.card_initializer(number_of_players);
	
	//object.print_card_player( number_of_players);

	int a ;
	cin >> a ;
	
	
}









