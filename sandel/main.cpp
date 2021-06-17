#include "t3.h"
#include <iostream>

ArbBin *a;
int nrNoduri, vectorNoduri[500], nrs = 0;
void creare(ArbBin *(&a), int k)
{
		if (a != NULL)
			if (a->val == k)
				cout << "nod prezent" << endl;
			else
				if (a->val < k)
					creare(a->dr, k);
				else
					creare(a->st, k);
		else
		{
			a = new ArbBin;
			a->val = k;
			a->st = a->dr = NULL;
		}
}




void nrNoduriSpeciale(ArbBin *a)
{
	if (a)
	{
		nrNoduriSpeciale(a->st);
		if ((a->st->val) % 2 == 0 && (a->dr->val) % 2 == 0)
			nrs++;
		nrNoduriSpeciale(a->dr);
	}
}

void parc(ArbBin *a)
{

	if (a)
	{
		parc(a->st);
		//cout << a->val << " ";
		if (a->st->val % 2 == 0 && a->dr->val % 2 == 0 && a->st->st != NULL && a->dr->dr != NULL)
			nrs++;
		parc(a->dr);
	}
}

//nod* combinareSortareListe(int nrListe, nod* liste[MAX_LISTE]);

//compConexe CompConexe(grafListaMuchii graf, int ordinCompConexe);

ArbBin* maxArbBin(int nrNoduri, int nrMuchii, int muchii[2][MAX_MUCHII]);

int main()
{
	int nrNoduri;
	cin >> nrNoduri;
	for (int i = 1; i <= nrNoduri; i++)
	{
		cin >> vectorNoduri[i];
		creare(a, vectorNoduri[i]);
	}
	//parc(a);
	cout << '\n';
	nrNoduriSpeciale(a);
	cout << nrs;
	return 0;

}
