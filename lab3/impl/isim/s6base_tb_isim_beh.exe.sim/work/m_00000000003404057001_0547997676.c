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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/src/verilog-rtl/DPRAM.v";
static int ng1[] = {778593656, 0, 793135442, 0, 1684108385, 0, 796092781, 0, 11822, 0};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2704);
    xsi_vlogfile_readmemh(t1, 144, t2, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2704);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2704);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 1344U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t13, 18, t4, t12, t17, 2, 1, t19, 7, 2);
    t18 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 18, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t11 = (t0 + 1664U);
    t12 = *((char **)t11);
    t11 = (t0 + 2704);
    t15 = (t0 + 2704);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2704);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1344U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 7, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}

static void Always_51_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2704);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2704);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1984U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 18, t6, t10, t13, 2, 1, t15, 7, 2);
    t14 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 18, 0LL);
    goto LAB2;

}


extern void work_m_00000000003404057001_0547997676_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_43_1,(void *)Always_51_2};
	xsi_register_didat("work_m_00000000003404057001_0547997676", "isim/s6base_tb_isim_beh.exe.sim/work/m_00000000003404057001_0547997676.didat");
	xsi_register_executes(pe);
}
