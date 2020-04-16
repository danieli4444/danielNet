#ifndef NNcell_H_
#define NNcell_H_

class NNcell{
private:
    bool is_init;
public:
    NNcell();
    ~NNcell();
    NNcell(const NNcell &other);
    float weight;
    float bias;
    int get_weight();
    int set_weight(int new_weight);
    int get_bias();
    int set_bias(int new_weight);
};

#endif /* NNcell_H_ */


