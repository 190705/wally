#include <kipr/botball.h>
//about 230 ticks = 1 inch of movement
//max claw pressure 1600

void arm_up();
void arm_down();
void claw_close();
void claw_open();
void wally_forward(int distance);
void wally_backward(int distance);
void wally_left();
void wally_right();
int main()
{
    printf("!!!!!!!!!!WAAAAAALLLLLLY!!!!!!!!!\n");
    arm_up();
    //arm_down();
    claw_close();
    //claw_open();
    wally_forward(5520);
    wally_left();
    wally_forward(4500);
    wally_right();
    wally_forward(3000);
    wally_right();
    claw_close();
    arm_down();
    claw_open();
    wally_forward(4720);// was 32400
    arm_up();
    wally_forward(50);
    wally_forward(4670);
    claw_close();
    arm_up();
    claw_open();
    arm_down();
    wally_right();
    wally_forward(5520);
    wally_left();
    wally_forward(1365);
    
    




    // go forward out of s box to black line


    // turn left


    // turn right at next black line



    // go forward and turn 



    // open claw 



    //drop arm


    // drive forward




    // close claw



    // lift the arm




    // open claw





    return 0;
}

void arm_up()
{
    while(digital(0) == 0)
    {
        motor(2,100);    
    }
    ao();
    cmpc(2);
}

void arm_down()
{
    while(get_motor_position_counter(2) > -6200)
    {
        motor(2,-100);
    }
    ao();
}  
void claw_close()
{
    enable_servos();
    set_servo_position(0,2047);
    msleep(500);
}


void claw_open()
{
    enable_servos();
    set_servo_position(0,1200);
    msleep(500);
}

void wally_forward(int distance)
{
    cmpc(0);
    while(get_motor_position_counter(0) < distance)
    {
        motor(0,60);
        motor(3,57);
    }
    ao();
}
void wally_left()
{
    cmpc(0);
    while(get_motor_position_counter(0) < 963)
    {
        motor(0,60);
        motor(3,-60);
    }
    ao();
}  
void wally_right()
{
    cmpc(3);
    while(get_motor_position_counter(3) < 950)
    {
        motor(0,-60);
        motor(3,60);
    }
    ao();
}
void wally_backward(int distance)
{
    cmpc(0);
    while(get_motor_position_counter(0) < distance)
    {
        motor(0,-50);
        motor(3,-50);
    }
    ao();
}





