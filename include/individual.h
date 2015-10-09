#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H


class Individual
{
    public:
        Individual();
        virtual ~Individual();
    protected:
    private:
        vector<double> realvar;
        vector<unsigned short> binvar;
        vector<double> xbinvar;
};

#endif // INDIVIDUAL_H
