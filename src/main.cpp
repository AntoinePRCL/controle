#include <iostream>
#include "Reel.h"

using namespace std;

void insert(Reel* prev,  Reel* n_cell) {
prev->next = n_cell;
}

void suppr(Reel* cell) {
cell->next = cell->next->next;
delete [] cell->next;
}

void print(Reel* head) {
	cout<< head->next->value;
	if (head->next->next) {
		cout<<" -> ";
		print(head->next);
	}
}


int main() {
int choix;
Reel* head = new Reel;
Reel* select;
do {
choix = 0;
cout<<endl<<endl<<"MENU"<<endl;
cout<<"1 - Ajouter un réel à la liste"<<endl;
cout<<"2 - Afficher la liste des réels"<<endl;
cout<<"3 - Supprimer un réel ayant une valeur donée"<<endl;
cout<<"4 - Supprimer tout les réels ayant une valeur donnée"<<endl;
cout<<"5 - Quitter"<<endl;
cin>>choix;

switch(choix){
	case 1 :
	{	cout <<"head "<<head<<endl;
		select = head;
		cout<<"select "<<select<<endl;
		int new_float;
		cout<<"Saisir la valeur du nouveau réel :";
		cin>>new_float;
		Reel* new_cell = new Reel();
		new_cell->value = new_float;
		new_cell->next = NULL;
		cout<<"new_cell "<<new_cell<<endl;
		if(select->next == nullptr) {
			select->next = new_cell;
			cout<< "select->next"<< select->next<<endl;
			select=select->next;
			cout<<"new select"<< select<<endl;
		}
		else{
			while ((select->value > new_cell->value )&&(select->next != NULL)) {
				cout<<"select2 "<<select<<endl;
				select = select->next;
			}
			if (select->next){
			new_cell->next=select->next;
			select->next = new_cell;
			}
		}
	}
	break;
	case 2:
	print(head);
	break;
	}
} while (choix != 5);
return 0;
}

