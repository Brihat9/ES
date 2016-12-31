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
static const char *ng0 = "C:/Users/user/Desktop/ES_LAB4/2/xor_nor.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2115884226_503743352(char *, unsigned char , unsigned char );


static void work_a_3715945856_2193661277_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 3392);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(18, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 3456);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t11 = *((unsigned char *)t7);
    t1 = (t0 + 1192U);
    t8 = *((char **)t1);
    t12 = *((unsigned char *)t8);
    t13 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t11, t12);
    t14 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t6, t13);
    t1 = (t0 + 3520);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t14;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2115884226_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 3584);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_3715945856_2193661277_init()
{
	static char *pe[] = {(void *)work_a_3715945856_2193661277_p_0};
	xsi_register_didat("work_a_3715945856_2193661277", "isim/bcd_gray_tb_isim_beh.exe.sim/work/a_3715945856_2193661277.didat");
	xsi_register_executes(pe);
}
