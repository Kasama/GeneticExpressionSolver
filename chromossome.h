#ifndef CHROMOSOME_H
#define CHROMOSOME_H

typedef struct chromo CHROMOSSOME;

CHROMOSSOME* newRandomChromossome(int nGenes);
void destroyChromossome(CHROMOSSOME* chromo);

#endif /* CHROMOSOME_H */
