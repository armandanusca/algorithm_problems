#ifndef T3_H_INCLUDED
#define T3_H_INCLUDED
#define MAX_NODURI 500
#define MAX_MUCHII 500
#define MAX_LISTE 100
using namespace std;

int nrNoduriSpeciale(int vectorNoduri[MAX_NODURI], int nrNoduri) ;

struct nod {
	int tval;
	nod* urm;
};
nod* combinareSortareListe(int nrListe, nod* liste[MAX_LISTE]);

struct compConexe {
	int nrComponente;
	int componente[100][100];
};
struct grafListaMuchii {
	int nrNoduri;
	int nrMuchii;
	int muchii[2][MAX_MUCHII];
};
compConexe CompConexe(grafListaMuchii graf, int ordinCompConexe);

struct ArbBin {
	int val;
	ArbBin* st;
	ArbBin* dr;
};
ArbBin* maxArbBin(int nrNoduri, int nrMuchii, int muchii[2][MAX_MUCHII]);


#endif // T3_H_INCLUDED
