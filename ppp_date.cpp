﻿#include "ppp_date.h"

ppp_sate::ppp_sate()
    :PRN(""),position_x(0),position_y(0),position_z(0),clock(0),
    elevation(0),azimuth(0),P1(0),P2(0),L1(0),L2(0),
    trop_delay(0),trop_map(0),relativity(0),sagnac(0),tide_effect(0),
    antenna_height(0),antenna(0),offsetL1(0),offsetL2(0),windup(0),
    P3(0),L3(0)
{

}


ppp_epoch::ppp_epoch()
    :sate_number(0),year(0),month(0),day(0),
     hour(0),minute(0),second(0),GPSS(0),zhd(0)
{

}


ppp_file::ppp_file()
{

}