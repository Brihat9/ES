/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/user/Desktop/ES_LAB4/2/small_ckt_behavorial.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_2949877100_2193661277_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;

LAB0:    xsi_set_current_line(16, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 3776);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = t9;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(18, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 3840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = t9;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 3904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = t9;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_2949877100_2193661277_init()
{
	static char *pe[] = {(void *)work_a_2949877100_2193661277_p_0};
	xsi_register_didat("work_a_2949877100_2193661277", "isim/small_ckt_tb_isim_beh.exe.sim/work/a_2949877100_2193661277.didat");
	xsi_register_executes(pe);
}
