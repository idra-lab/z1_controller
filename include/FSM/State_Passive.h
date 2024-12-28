#ifndef Z1_CONTROLLER_PASSIVE_H
#define Z1_CONTROLLER_PASSIVE_H

#include "FSM/FSMState.h"

class State_Passive : public FSMState{
public:
    State_Passive(CtrlComponents *ctrlComp);
    void enter();
    void run();
    void exit();
    int checkChange(int cmd);
};

#endif  // PASSIVE_H