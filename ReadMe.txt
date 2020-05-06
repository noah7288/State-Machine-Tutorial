I. OVERVIEW


A State Machine can switch devices or programs between many "states." Many 
applications and devices use some sort of a finite state machine, with is a state
machine with a finite number of possible states and events it can recieve. A finite state
machine is easy to implement and works reliably.
 


II. HOW DOES IT WORK?

State machines work by having a number of predetermined states an application or
device can be in, as well as a number of events that can occur to switch it between
the states. States and events can be defined through an enum. 
typedef enum
{
    Device_is_off,
    Device_is_on,
} eSystemState;
Events can be used to swap between the states
case Device_is_off:
        {
            if (Switch_flip_on == eNewEvent)
            {
                eNextState = Device_is_on();
            }
        }

III. HOW IS THIS DATA STRUCTURE USEFUL?
 
States machines can be an effective and efficient way of swapping between 
states a device or application can be in, as well as handling what event has
ocurred and what state it need to swap to based on the event that occured.
They are simple to implement and work effectively.

IV. FURTHER READING

Work Cited:

https://aticleworld.com/state-machine-using-c/

Other sources:
https://en.wikipedia.org/wiki/Finite-state_machine
https://blog.markshead.com/869/state-machines-computer-science/