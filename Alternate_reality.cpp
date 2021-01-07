#include<iostream>
using namespace std;
class Node
{
	public:
		string data;
		Node *c1, *c2, *l1, *l2;
		//int c=0;
		Node()
		{
		  
		}
		Node(string data)
		{
			this->data = data;
			this->c1=NULL;
                        this->c2=NULL;
                        this->l1=NULL;
                        this->l2=NULL;
		}		
};

class Tree:public Node
{
	public:
	Node *temp,*root,*listptr;
	Tree()
	{
		listptr=temp=root=NULL;
	}
        void create();
        void sample_play();
        int sample_display(Node *);
	void creater();
	void display(Node *);
	void player(Node *);
	void instructions();
};
void Tree::create(){
Node *newnode = new Node("You sit down on the edge of your bed and frown down at the progress you have made at packing.\nYou hate packing. You are about to spend the weekend with your friends to see the bears game.\nYou are really excited, not just about seeing the game, but also about getting out of the house for the weekend.\nYou hear a grumbling noise and realize it's your stomach. You are starving, but you also think you should finish packing. What do you do?\n ");
root=newnode;
temp=newnode; //choice 1
temp->l1 = new Node("I'm starving. Let's eat!\n\n[Read after you make your choice]\nYour hunger is driving you crazy, so you walk downstairs and put your dinner in the microwave.\nWhat you don't know is a magnet fell from the fridge into your dinner.\nYou run back upstairs to keep packing until your food is ready.\nYou suddenly hear an explosion from the magnet in the microwave.\nYou start to run downstairs and see the kitchen is on fire! What do you do?\n");
listptr=root->l1;
temp->l2 = new Node("I really should finish packing.\n\n[Read after you make your choice]\nYou decide it would be best to finish packing, so you grab a few CDs at random and put them in your suitcase.\nThen you continue folding your clothes and put them in your suitcase.\nWhen you finally finish packing you go downstairs and see your friend Tom.\nWhat's up?He says.\nNothing much, can't wait to get the hell out of here.You reply.\nWell everyone's waiting outside for us, you ready to go?\nYeah. Let's go.You say.\nYou and Tom walk outside and you see Ryan, Mary, Jake, and your girlfriend.\nSo who's driving?Ryan asks.\n");

temp=temp->l1; //left tree 
temp->l1 = new Node("Try to find a way out through the kitchen.\n\n[Read after you make your choice]\nYou build up your courage and run down the stairs.You manage to reach the other side of the kitchen.\nYou reach for the door when the entire room is engulfed in flames.\nIn your last few seconds of life, you desperately try to open the window and escape, and you see your friend Tom's car coming to pick you up.\nSuddenly it is hit by a semi. You scream in agony before your screams die down and you die along with them.\n");
temp->l2 = new Node("Run upstairs.\n\n[Read after you make your choice]\nYou freak out and run upstairs. You look around desperately for a way out.\nThe window! You sprint to the window and push it open and jump out.\nYou fall two stories and land in your backyard.\nYou stand up and run to the front yard just as your friends pull into the driveway.\nYour friend Tom gets out of the car and asks,The Hell's your problem?\nForget it!You yell.\nJust get in the car!We have to leave before my parents get here!\nYou both get in the car and leave.\n");
temp=temp->l1;
temp->l1 = new Node("END");
temp->l2 = new Node("Try Again");
temp=temp->l2;
temp->l1=NULL;
temp->l2=root;
temp=listptr;
temp=temp->l2;
temp->l1 = new Node("To the hotel\n\n[Read after you make your choice]\nWhen you get to the hotel you walk into the lobby and Jake says,Wow,this place is huge! 200 stories!\nRyan pushes the call button for the glass elevator.\nYou have always hated elevators. You just don't like the idea of a few cables being the only thing keeping you from falling to your death.\nYour room is on 180th floor.The doors close and the elevator goes up.\nYou close your eyes as it goes up and open them after hearing a DING noise. You breathe a sigh of relief as the door opens.\nMary starts walking out. When she's halfway out of the door, the elevator starts to drop and she is chopped in half.\nBlood splatters all over everyone and Jake falls backwards and hits his head on the glass.\nThe glass breaks and he is sucked out.\nTom pushes open the emergency exit and jumps out on top of the elevator.\nJust as he does the cable snaps and he falls forward into it and is electrocuted to death.\nEveryone falls from the open space and dies.\nOh shit! I'm gonna die! You think. THIS CANNOT BE FUCKING HAPPENING!\nThe elevator hits the ground and explodes. Then suddenly..."); 
temp->l2 = new Node("END");
temp=temp->l1;
temp->l1= new Node("You are back in the lobby and you can hear Jake say,Wow this place is huge! 200 stories!\nYou realize that everyone is about to get on the elevator. But you still have a chance.\nNOBODY GET ON THE ELEVATOR! THE ELEVATORS GONNA CRASH! WE ARE ALL GONNA DIE!,you scream.\nHey shut up! You're not funny!Jake says\I'M NOT KIDDING! Why would I joke about that!?\nAll of a sudden, screams are heard.\nGET DOWN!You scream and dive away from the door.Everyone dives after you.\nThen a loud explosion is heard and the door to the elevator is blown off and flies inches over you and your friend's heads.");
temp->l2=new Node("END");
temp=temp->l1;
temp->l1=new Node("Three days later...\n\nYou are in your room lying on your bed. You are trying to fight back tears but failing miserably.\nYou haven't talked to anyone since the crash and just been in your room.\nThe premonition keeps replaying over and over again in your head. It had felt so real.\nYou hear a knock on the door. You quickly wipe your tears off on the blanket.\nThe door opens and Tom, Ryan, and your girlfriend walk in.\nYou're worried about Mary as she died first in your premonition. What do you do?");
temp->l2=new Node("END");
temp=temp->l1;
temp->l1=new Node("Go check on Mary.\n\n[Read after you make your choice]\nYou get up and go to where she works - the 2nd floor parking lot.\nYou see her car coming up the spirals to get up to her parking spot.\nYou call out her name and she looks up at you and suddenly her car starts going back down the spirals.\nAt first you think she's trying to get away from you, but then you hear her screaming your name.\nYou start running as fast as you can down the spiral.STOP THE CAR!You scream to her.\nTHE BRAKES AREN'T WORKING!She screams back.\nTHEN JUMP OUT!You scream.\nYou see her reach for the door handle.She pulls the handle but the door won't open.\nThen she really starts to panic.IT WON'T OPEN! I'M STUCK!\nHer car gets to the bottom of the spiral.She backs up into the street and her car suddenly stops in front of the truck driving at her.\nThe truck swerves to the right in front of a semi.You run to Mary's car and smash her window with your elbow.\nYou see the semi swerve to the left and the semi drives at Mary's car. You grab Mary and dive out of the way.\nJust as you do the semi hits her car. You and her land on the sidewalk.\nOh my God! You think. The  design! It's true! Ryan said that if you intervene it will skip them\nand go to the next person on the list...Jake!You get up and start to run.\nMary yells. You turn towards her.I'm sorry, but I have to go.");
temp->l2=new Node("Stay here. She's fine\n\n[Read after you make your choice]\nEND");
temp=root;
listptr=root->l2;
temp=temp->l2;  //right tree
temp->l1=new Node("Offer to drive.\n\n[Read after you make your choice]\nYou get in the car and start driving to the hotel.\nOn the way there Jake asks, Can we stop and get something to eat?I'm starving.\nNo,we should get to the hotel early so we have time to unpack.Tom argues.\nHey, It's up to you, you're driving.Ryan says to you.");
temp->l2=new Node("Wait for someone else to offer\n\n[Read after you make your choice]\nRyan offers to drive and everyone gets in the car and you leave for the hotel.");
temp=temp->l1;
temp->l1=new Node("Stop and eat\n\n[Read after you make your choice]\nI'm hungry too, let's eat.You say and pull into the parking lot of Burger King.\nYou order your favorite meal-A double whopper and fries.\nAfter everyone is finished, you get back in the car and leave for the hotel.");
temp->l2=new Node("Drive directly to the hotel\n\n[Read after you make your choice]\nWhen you get to the hotel you walk into the lobby and Jake says,Wow,this place is huge! 200 stories!\nRyan pushes the call button for the glass elevator.\nYou have always hated elevators. You just don't like the idea of a few cables being the only thing keeping you from falling to your death.\nYour room is on 180th floor.The doors close and the elevator goes up.\nYou close your eyes as it goes up and open them after hearing a DING noise. You breathe a sigh of relief as the door opens.\nMary starts walking out. When she's halfway out of the door, the elevator starts to drop and she is chopped in half.\nBlood splatters all over everyone and Jake falls backwards and hits his head on the glass.\nThe glass breaks and he is sucked out.\nTom pushes open the emergency exit and jumps out on top of the elevator.\nJust as he does the cable snaps and he falls forward into it and is electrocuted to death.\nEveryone falls from the open space and dies.\nOh shit! I'm gonna die! You think. THIS CANNOT BE FUCKING HAPPENING!\nThe elevator hits the ground and explodes.\n\nEND"); 
temp=temp->l1;
temp->l1=new Node("Once you get there you see a bunch of police cars outside the hotel.\nYou can hear two cops talking.You only hear the words elevator and crash.\nYou now know the elevator crashed.What you don't know is that\nif you hadn't stopped and eaten, you would have been on the elevator.\n\nCongratulations!You have cheated death before it even had a chance to come at you!\nBut be careful,some actions can have mortal consequences...\n\nEND");
temp->l2=new Node("Try Again");
temp->l2->l1=root;
temp=listptr;
temp=temp->l2;
temp->l1=new Node("When you get to the hotel you walk into the lobby and Jake says,Wow,this place is huge! 200 stories!\nRyan pushes the call button for the glass elevator.\nYou have always hated elevators. You just don't like the idea of a few cables being the only thing keeping you from falling to your death.\nYour room is on 180th floor.The doors close and the elevator goes up.\nYou close your eyes as it goes up and open them after hearing a DING noise. You breathe a sigh of relief as the door opens.\nMary starts walking out. When she's halfway out of the door, the elevator starts to drop and she is chopped in half.\nBlood splatters all over everyone and Jake falls backwards and hits his head on the glass.\nThe glass breaks and he is sucked out.\nTom pushes open the emergency exit and jumps out on top of the elevator.\nJust as he does the cable snaps and he falls forward into it and is electrocuted to death.\nEveryone falls from the open space and dies.\nOh shit! I'm gonna die! You think. THIS CANNOT BE FUCKING HAPPENING!\nThe elevator hits the ground and explodes.\n\nEND"); 
temp=root;
}

int Tree::sample_display(Node *root){
cout << root->data << endl;
if(root->l1 == NULL && root->l2 == NULL){  
return 0;
}
if(root->l1)
cout << "1. " << root->l1->data << endl;
if(root->l2)
cout << "2. " << root->l2->data << endl;
cout << "Please enter your next option: ";
int n;
cin >> n;
return n;
}

void Tree::sample_play()
{
int n=sample_display(root);
temp=root;
do{
if(n==1){
temp=temp->l1;
}else {
temp=temp->l2;}
n=sample_display(temp);
if(n==0){
cout << "Thank you for playing Hope you had good time\n";
}
}while(n);
}


void Tree::display(Node *currentnode)
{
	if(currentnode!=NULL)
	{
		cout<<currentnode->data<<"\n";
		display(currentnode->c1);
		display(currentnode->c2);
		cout<<"\n";
	}
}

void Tree::creater()
{
	//int l;
	char ans;
	string s;
	int n;
	do{
		fflush(stdin);	
		cout<<"\nEnter the data: ";
		getline(cin,s);	
		Node *newnode = new Node(s);		
		if(root==NULL)
		{						
			root=newnode;
			cout << "Main Question Created\n";			
		}
		else
		{
			//c++;
			temp=root;
			while(1)
			{
			if(temp){
				cout << "Current Question is: " << temp->data << endl;	
//				for(l=c;l>0;l--)
//				{
//					cout<<" ";
//				}
				if(temp->c1)
					
					cout << "option 1: "<< temp->c1->data << endl;
				else
					cout << "option 1: NULL\n";
				if(temp->c2)
					cout << "option 2: "<< temp->c2->data << endl;
				else
					cout << "option 2: NULL\n";	
			}
			if(!temp->c1 && temp->c2)
				cout<<"Do you want to move towards option 2 or add to option 1: ";
			else if(!temp->c2 && temp->c1)
				cout<<"Do you want to move towards option 1 or add to option 2: ";
			else if(temp->c2 && temp->c1)
				cout<<"Toward which option you want to move?(Option 1 or 2): ";
			else
				cout<<"Do you want to add to option 1 or 2: ";
			cin>>n;			
			if(n==1)
			{
				if(temp->c1==NULL)
				{
					cout << "Option/Question added to Option 1\n";
					temp->c1=newnode;
					display(root);
					break;
				}
				else
				{
					temp=temp->c1;
					cout << "Subtree of " << temp->data << endl;
					display(temp);
				}
			}
			else
			{
				if(temp->c2==NULL)
				{
					cout << "Option/Question added to Option 2\n";
					temp->c2=newnode;
					display(root);
					break;
				}
				else
				{
					temp=temp->c2;
					cout << "Subtree of " << temp->data << endl;
					display(temp);
				}
			}
		}
		}
		system("CLS");
		cout << "Current tree is\n";
		display(root);
		cout<<"\n\nDo you want to add options to the Game?(y/n)";
		cin>>ans;
	}while(ans=='y');
	display(root);
}
void Tree::player(Node *node)
{	
	int ch;
	temp=node;
	cout<<temp->data<<"\n";
	cout<<"1."<<temp->c1->data<<"    ";
	cout<<"2."<<temp->c2->data;
	cout<<"\nwhat do you choose?";
	cin>>ch;
	if(ch==1)
	{
		temp=temp->c1;
	}
	else
	temp=temp->c2;
	player(temp);
}
void Tree::instructions()
{
    cout<<"\nWelcome to Alternate Reality Game!!!!\n";
    cout<<"------------------------------------------------------------------------------------------\n";
    cout<<"*Pick option 2 to create your own story\n";
    cout<<"*Pick option 3 to play your own story\n";
    cout<<"*Pick option 4 to play a sample game\n";
    cout<<"------------------------------------------------------------------------------------------\n";
    cout<<"CREATOR MODE\n";
    cout<<"Instructions to follow\n";
    cout<<"1.You cannot have more than two options when creating the game on your own\n";
    cout<<"2.Read the built-in instructions that appear on the screen carefully\n";
    cout<<"\nSteps to follow\n";
    cout<<"1.Enter the first question to create your story\n";
    cout<<"2.Add option if you would like to extend the story\n";
    cout<<"------------------------------------------------------------------------------------------\n";
    cout<<"PLAYER MODE\n";
    cout<<"Instructions to follow\n";
    cout<<"1.This mode won't work if you have not created the story\n";
    cout<<"2.You cannot change the options once story has been created\n";
    cout<<"3.You must finish the game\n\n";
    cout<<"Steps to follow\n";
    cout<<"1.Play the game according to the options created in creator mode\n";
    cout<<"2.Choose among the options given\n";
    cout<<"------------------------------------------------------------------------------------------\n";
    cout<<"SAMPLE GAME\n";
    cout<<"The game starts automatically. Please read all the statements carefully before making your choice.\n";
    cout<<"------------------------------------------------------------------------------------------\n";
}
int main()
{
	Tree t,l;
	int ch1,ans,ch;
	do
	{
		cout<<"choose the mode\n1.Instructions\n2. Creator mode\n3. Player mode\n4. Sample Game: ";
		cin>>ch1;
		switch(ch1)
		{
			case 1:t.instructions();
			break;
			     
			case 2: 
			cout<<"Create the game here!\n";
			cout<<"start!";
			t.creater();
			break;
			
			case 3:
			t.player(t.root);
			break;

                        case 4:
                        cout<<"Start of Sample Game\n\n";
                        cout<<"Death has been around since the beginning of time.\n";
	                cout<<"For every death there is a life and for every life there is a death.";
	                cout<<"\nBut what if you could cheat Death? What if when you cheated death was actually when you were meant to die?\n";
	                cout<<"This game is about how cheating death is just delaying the inevitable and you will eventually die.";
	                cout<<"\nDo you want to risk your life(1) or run away(0)?";
	                cin>>ch;
	                if(ch==1)
	                {
	                  l.create();
	                  l.sample_play();
                        }
	                else
	                {
	                exit(0);
                        }
                        break;
                }
		cout<<"do you want to choose again?(0/1)";
		cin>>ans;	
	}while(ans==1);
}
