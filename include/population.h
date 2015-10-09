#ifndef POPULATION_H
#define POPULATION_H

#include "individual.h"

class Population
{
    public:
        Population();
        virtual ~Population();
    protected:
    private:
        vector<Individual*> individuals;
};

#endif // POPULATION_H
