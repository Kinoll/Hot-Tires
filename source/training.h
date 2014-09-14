#ifndef TRAINING_H
#define TRAINING_H

class training
{
private:
    int rider_id;
    int training_scheme;
    int coach;
public:
    training(int rider_id, int training_scheme,int coach);
    void perform();
};

#endif // TRAINING_H
