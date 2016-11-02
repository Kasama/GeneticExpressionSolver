#include "chromossome.h"
#include <stdlib.h>

typedef char GENE;

struct chromo {
	int nGenes;
	GENE* genes;
	int fitness;
};

GENE newRandomGene() {
	GENE = 
}

CHROMOSSOME* newRandomChromossome(int nGenes){
	CHROMOSSOME* ret;
	int i;
	ret = malloc(sizeof(CHROMOSSOME*));

	ret->nGenes = nGenes;
	ret->fitness = -1;
	ret->genes = malloc(sizeof(GENE)*nGenes);
	for (i = 0; i < nGenes; i++){
		ret->genes[i] = newRandomGene();
	}

	return ret;
}
void destroyChromossome(CHROMOSSOME* chromo);
