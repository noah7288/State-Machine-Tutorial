#include <stdio.h>

//States of a simple device, such as a light
typedef enum
{
    Device_is_off,
    Device_is_on,
    


} eSystemState;

//Events that can happen to the simple device
typedef enum
{

    Switch_flip_on,
    Switch_flip_off,
    

} eSystemEvent;

//Event Handlers
eSystemState PowerStateOne(void)
{
    return Device_is_off;
}
eSystemState PowerStateTwo(void)
{
    return Device_is_on;
}



int main(int argc, char* argv[])
{

    eSystemState eNextState = Device_is_off;
    eSystemEvent eNewEvent;

    while (1)
    {
        //a function to read hypothetical Events
        eSystemEvent eNewEvent = Event();
        //switches between all the states, in this case two
        switch (eNextState)
        {
        case Device_is_off:
        {
            if (Switch_flip_on == eNewEvent)
            {
                eNextState = Device_is_on();
                //fliping the switch on turns the device on
            }
        }
        break;
        case Device_is_on:
        {
            if (Switch_flip_off == eNewEvent)
            {
                eNextState = Device_is_off();
                //fliping the switch off turns the device off
            }
        }
        break;
        default:
            break;

        }
    }

    return 0;
}