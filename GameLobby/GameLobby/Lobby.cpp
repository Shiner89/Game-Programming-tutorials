#include "Lobby.h"
Lobby::Lobby() :
	m_pHead(0)
{}

Lobby::~Lobby()
{
	Clear();
}

void Lobby::AddPlayer()
{
	//create a new player node
	cout << "Please enter the name of the new player: ";
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);
	cout << *pNewPlayer;
	cout << " mem loc add of pNewPlayer is " << &pNewPlayer << "\n";
	cout << "pNewPlayer value is " << pNewPlayer << "\n";

	//if list is empty, make head of list this new player
	if (m_pHead == 0)
	{
		cout << " Lobby is empty \n";

		m_pHead = pNewPlayer;
		cout << "m_pHead now points to location " << m_pHead << "\n";
	}
	//otherwise find the end of the list and add the player there
	else
	{
		cout << "List is not empty \n";
		Player* pIter = m_pHead;
		while (pIter->GetNext() != 0)
		{
			cout << "m_pHead currently points to mem location " << pIter << "\n";
			pIter = pIter->GetNext();
		}
		cout << "m_pHead currently points to mem location " << pIter << "\n";
		pIter->SetNext(pNewPlayer);
	}
}

void Lobby::RemovePlayer()
{
	if (m_pHead == 0)
	{
		cout << "The game lobby is empty.  No one to remove!\n";
	}
	else
	{
		Player* pTemp = m_pHead;
		cout << "About to remove a player mem loc " << m_pHead << "\n";
		m_pHead = m_pHead->GetNext();
		cout << "m_pHead now points to the object at mem loc " << m_pHead << "\n";
		delete pTemp;
	}
}
void Lobby::ListPlayer()
{
	//if list is empty, make head of list this new player
	if (m_pHead == 0)
	{
		cout << " Lobby is empty \n";


	}
	//otherwise find the end of the list and add the player there
	else
	{
		cout << "Hear are the players in the lobby \n";
		Player* pIter = m_pHead;
		while (pIter->GetNext() != 0)
		{
			cout << pIter->GetName();
			cout << "m_pHead currently points to mem location " << pIter << "\n";
			pIter = pIter->GetNext();
		}
	}
}


void Lobby::Clear()
{
	while (m_pHead != 0)
	{
		RemovePlayer();
	}
}
ostream& operator<<(ostream& os, const Player& aPlayer)
{
	os << "\nPlayer's details are:\n";
	os << aPlayer.m_Name << endl;
	return os;
}