#ifndef Z1_CONTROLLER_JOINTSPACE_H
#define Z1_CONTROLLER_JOINTSPACE_H

#include "FSM/FSMState.h"

class State_JointSpace : public FSMState{
public:
    State_JointSpace(CtrlComponents *ctrlComp);
    ~State_JointSpace(){}
    void enter();
    void run();
    void exit();
    int checkChange(int cmd);
private:
    std::vector<double> jointSpeedMax;
};

#endif  // JOINTSPACE_H