#ifndef NSGA2_H
#define NSGA2_H

#include "population.h"


class Nsga2
{
    public:
        Nsga2();
        virtual ~Nsga2();
    protected:
    private:
        Population *old_pop;
        Population *new_pop;
};

#endif // NSGA2_H
