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
static const char *ng0 = "C:/Users/user/xilinx_project/6/mux2to1_dataflow.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_0972602110_3990940387_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    static char *nl0[] = {&&LAB7, &&LAB7, &&LAB6, &&LAB5, &&LAB7, &&LAB7, &&LAB7, &&LAB7, &&LAB7};

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t5, t7);
    t2 = (t0 + 1032U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t2 = (t0 + 1352U);
    t11 = *((char **)t2);
    t12 = *((unsigned char *)t11);
    t13 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t12);
    t14 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t8, t13);
    t2 = (char *)((nl0) + t14);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(12, ng0);

LAB10:    t2 = (t0 + 2992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB5:    xsi_set_current_line(13, ng0);
    t15 = (t0 + 3072);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t15);
    goto LAB4;

LAB6:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB8:    t3 = (t0 + 2992);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_0972602110_3990940387_init()
{
	static char *pe[] = {(void *)work_a_0972602110_3990940387_p_0};
	xsi_register_didat("work_a_0972602110_3990940387", "isim/mux4to1_tb_isim_beh.exe.sim/work/a_0972602110_3990940387.didat");
	xsi_register_executes(pe);
}
