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
static const char *ng0 = "C:/Git/Title_to_be_defined/lab3/src/verilog-tb/verilog-tasks.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {3U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "-------------------------------------------------------";
static const char *ng7 = "";
static const char *ng8 = "          #####     ##     ####    ####";
static const char *ng9 = "          #    #   #  #   #       #";
static const char *ng10 = "          #    #  #    #   ####    ####";
static const char *ng11 = "          #####   ######       #       #";
static const char *ng12 = "          #       #    #  #    #  #    #";
static const char *ng13 = "          #       #    #   ####    ####";
static const char *ng14 = "-------------------------------------------------------\n";
static const char *ng15 = "          ######    ##       #    #";
static const char *ng16 = "          #        #  #      #    #";
static const char *ng17 = "          #####   #    #     #    #";
static const char *ng18 = "          #       ######     #    #";
static const char *ng19 = "          #       #    #     #    #";
static const char *ng20 = "          #       #    #     #    ######";
static const char *ng21 = " ***************   %3d errors found    ****************";
static const char *ng22 = "C:/Git/Title_to_be_defined/lab3/src/verilog-tb/s6base_tb.v";
static unsigned int ng23[] = {1U, 0U};
static const char *ng24 = "Maximum simulation time exhausted (%d sampling periods).";
static const char *ng25 = "Loading simulation input data from files %s, %s:";
static int ng26[] = {778593656, 0, 1818584692, 0, 1869180511, 0, 1635083369, 0, 1635017007, 0, 1936289124, 0, 3026479, 0};
static int ng27[] = {778593656, 0, 1768384628, 0, 1768841074, 0, 1969514863, 0, 1952526177, 0, 1768776801, 0, 774778739, 0};
static int ng28[] = {20, 0};
static const char *ng29 = "Datain(%5d) [ left, right] = [%8d  , %8d] (hex %05H  %05H)";
static unsigned int ng30[] = {262143U, 262143U};
static const char *ng31 = "-----------------------------------------------";
static const char *ng32 = "Read %d samples from input files\n";
static const char *ng33 = "Loading the golden output data from files %s and %s:";
static int ng34[] = {778593656, 0, 1818518894, 0, 1952409455, 0, 1600939366, 0, 1953527156, 0, 1630498677, 0, 1835295092, 0, 774861673, 0, 46, 0};
static int ng35[] = {778593656, 0, 1818518894, 0, 1952409455, 0, 1919510376, 0, 1886745695, 0, 795833716, 0, 1684108385, 0, 796092781, 0, 11822, 0};
static const char *ng36 = "golden data out(%5d) = %8d (hex %05H )";
static const char *ng37 = "Read %d samples from golden output file\n";
static const char *ng38 = "../simdata/audioout.dat";
static const char *ng39 = "w+";
static const char *ng40 = "[time=%10.3f us] Reset released, programming parameters...";
static unsigned int ng41[] = {12U, 0U};
static int ng42[] = {8, 0};
static unsigned int ng43[] = {34U, 0U};
static int ng44[] = {9, 0};
static unsigned int ng45[] = {56U, 0U};
static int ng46[] = {10, 0};
static unsigned int ng47[] = {78U, 0U};
static int ng48[] = {11, 0};
static unsigned int ng49[] = {90U, 0U};
static int ng50[] = {12, 0};
static const char *ng51 = "[time=%10.3f us] Applying input samples...";
static int ng52[] = {100, 0};
static const char *ng53 = "done %d samples.";
static int ng54[] = {19, 0};
static const char *ng55 = "Starting the verification process.vv..";
static const char *ng56 = "Error: expected LEFT: %d, read %d || RIGHT: %d, read %d.";
static const char *ng57 = "%8d, %8d\n";
static const char *ng58 = "Maximum number of errors exceeded. terminating.";



static int sp_WritePort(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3296);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t6 = (t1 + 24360);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 8, 8, 2U, t9, 4, t8, 4);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB6);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4160);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 25480);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 8);

LAB8:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB9;

LAB10:    if (t27 != 0)
        goto LAB11;

LAB6:    t20 = (t1 + 4160);
    xsi_vlog_subprogram_popinvocation(t20);

LAB7:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 4160);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(15, ng0);
    t4 = (t1 + 24200);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (t32 >> 24);
    *((unsigned int *)t5) = t33;
    t34 = *((unsigned int *)t9);
    t35 = (t34 >> 24);
    *((unsigned int *)t8) = t35;
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & 255U);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4160);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 25480);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 8);

LAB14:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB15;

LAB16:    if (t27 != 0)
        goto LAB17;

LAB12:    t20 = (t1 + 4160);
    xsi_vlog_subprogram_popinvocation(t20);

LAB13:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 4160);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(16, ng0);
    t4 = (t1 + 24200);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (t32 >> 16);
    *((unsigned int *)t5) = t33;
    t34 = *((unsigned int *)t9);
    t35 = (t34 >> 16);
    *((unsigned int *)t8) = t35;
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & 255U);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB18);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4160);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 25480);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 8);

LAB20:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB21;

LAB22:    if (t27 != 0)
        goto LAB23;

LAB18:    t20 = (t1 + 4160);
    xsi_vlog_subprogram_popinvocation(t20);

LAB19:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 4160);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(17, ng0);
    t4 = (t1 + 24200);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (t32 >> 8);
    *((unsigned int *)t5) = t33;
    t34 = *((unsigned int *)t9);
    t35 = (t34 >> 8);
    *((unsigned int *)t8) = t35;
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & 255U);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB24);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4160);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 25480);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 8);

LAB26:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB27;

LAB28:    if (t27 != 0)
        goto LAB29;

LAB24:    t20 = (t1 + 4160);
    xsi_vlog_subprogram_popinvocation(t20);

LAB25:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 4160);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(18, ng0);
    t4 = (t1 + 24200);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (t32 >> 0);
    *((unsigned int *)t5) = t33;
    t34 = *((unsigned int *)t9);
    t35 = (t34 >> 0);
    *((unsigned int *)t8) = t35;
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & 255U);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB30);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4160);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 25480);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 8);

LAB32:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB33;

LAB34:    if (t27 != 0)
        goto LAB35;

LAB30:    t20 = (t1 + 4160);
    xsi_vlog_subprogram_popinvocation(t20);

LAB31:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 4160);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB14;
    goto LAB1;

LAB21:    t0 = -1;
    goto LAB1;

LAB23:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB20;
    goto LAB1;

LAB27:    t0 = -1;
    goto LAB1;

LAB29:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB26;
    goto LAB1;

LAB33:    t0 = -1;
    goto LAB1;

LAB35:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB32;
    goto LAB1;

}

static int sp_ReadPort(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3728);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t6 = (t1 + 24680);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 8, 8, 2U, t9, 4, t8, 4);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB6);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4160);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 25480);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 8);

LAB8:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB9;

LAB10:    if (t27 != 0)
        goto LAB11;

LAB6:    t20 = (t1 + 4160);
    xsi_vlog_subprogram_popinvocation(t20);

LAB7:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 4160);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(31, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB12);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4592);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB14:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t27 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t27 == -1)
        goto LAB15;

LAB16:    if (t27 != 0)
        goto LAB17;

LAB12:    t14 = (t1 + 4592);
    xsi_vlog_subprogram_popinvocation(t14);

LAB13:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 25640);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 24840);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    t26 = (t1 + 4592);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t26, t22, t1, t29, t2);
    xsi_set_current_line(32, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB18);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4592);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB20:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t27 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t27 == -1)
        goto LAB21;

LAB22:    if (t27 != 0)
        goto LAB23;

LAB18:    t14 = (t1 + 4592);
    xsi_vlog_subprogram_popinvocation(t14);

LAB19:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 25640);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 25000);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    t26 = (t1 + 4592);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t26, t22, t1, t29, t2);
    xsi_set_current_line(33, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB24);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4592);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB26:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t27 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t27 == -1)
        goto LAB27;

LAB28:    if (t27 != 0)
        goto LAB29;

LAB24:    t14 = (t1 + 4592);
    xsi_vlog_subprogram_popinvocation(t14);

LAB25:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 25640);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 25160);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    t26 = (t1 + 4592);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t26, t22, t1, t29, t2);
    xsi_set_current_line(34, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB30);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 4592);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB32:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t27 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t27 == -1)
        goto LAB33;

LAB34:    if (t27 != 0)
        goto LAB35;

LAB30:    t14 = (t1 + 4592);
    xsi_vlog_subprogram_popinvocation(t14);

LAB31:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 25640);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 25320);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    t26 = (t1 + 4592);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t26, t22, t1, t29, t2);
    xsi_set_current_line(35, ng0);
    t4 = (t1 + 25320);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 25160);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 25000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 24840);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogtype_concat(t5, 32, 32, 4U, t16, 8, t13, 8, t10, 8, t7, 8);
    t17 = (t1 + 24520);
    xsi_vlogvar_assign_value(t17, t5, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB14;
    goto LAB1;

LAB21:    t0 = -1;
    goto LAB1;

LAB23:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB20;
    goto LAB1;

LAB27:    t0 = -1;
    goto LAB1;

LAB29:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB26;
    goto LAB1;

LAB33:    t0 = -1;
    goto LAB1;

LAB35:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB32;
    goto LAB1;

}

static int sp_SendData(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4160);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 50000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(46, ng0);
    t7 = (t1 + 25480);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 21160);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 21000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(50, ng0);
    t6 = (t2 + 88U);
    t7 = *((char **)t6);
    t8 = (t7 + 16U);
    xsi_wp_set_status(t8, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 21000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(53, ng0);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_process_wait(t8, 50000LL);
    *((char **)t3) = &&LAB11;
    t0 = 1;
    goto LAB1;

LAB11:    goto LAB4;

}

static int sp_GetData(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4592);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 50000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(61, ng0);
    t7 = (t2 + 88U);
    t8 = *((char **)t7);
    t9 = (t8 + 0U);
    xsi_wp_set_status(t9, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(62, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(64, ng0);

LAB9:    t6 = (t1 + 19000U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng5)));
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t10) = 1;

LAB13:    t24 = (t10 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(66, ng0);
    t4 = (t1 + 19320U);
    t5 = *((char **)t4);
    t4 = (t1 + 25640);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 50000LL);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB12:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);
    t30 = (t2 + 88U);
    t31 = *((char **)t30);
    t32 = (t31 + 16U);
    xsi_wp_set_status(t32, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    goto LAB9;

LAB17:    goto LAB4;

}

static int sp_print_pass(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5024);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t5 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t5);
    xsi_set_current_line(75, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t4);
    xsi_set_current_line(76, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t4);
    xsi_set_current_line(77, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t4);
    xsi_set_current_line(78, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t4);
    xsi_set_current_line(79, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t4);
    xsi_set_current_line(80, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t4);
    xsi_set_current_line(81, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t4);
    xsi_set_current_line(82, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t4);
    xsi_set_current_line(83, ng0);
    t4 = (t1 + 5024);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_fail(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5456);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t5 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t5);
    xsi_set_current_line(91, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t4);
    xsi_set_current_line(92, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t4);
    xsi_set_current_line(93, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t4);
    xsi_set_current_line(94, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t4);
    xsi_set_current_line(95, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t4);
    xsi_set_current_line(96, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t4);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t4);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t4);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t4);
    xsi_set_current_line(100, ng0);
    t4 = (t1 + 25800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t7, (char)119, t6, 32);
    xsi_set_current_line(101, ng0);
    t4 = (t1 + 5456);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_finalize_simulation(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5888);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t5 = (t1 + 22600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t7, 32, t8, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB15);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t16 = (t1 + 5024);
    t17 = xsi_create_subprogram_invocation(t10, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);

LAB17:    t18 = (t2 + 64U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t36 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t36 == -1)
        goto LAB18;

LAB19:    if (t36 != 0)
        goto LAB20;

LAB15:    t19 = (t1 + 5024);
    xsi_vlog_subprogram_popinvocation(t19);

LAB16:    t26 = (t2 + 64U);
    t27 = *((char **)t26);
    t26 = (t1 + 5024);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t26, t27, t1, t29, t2);

LAB8:    xsi_set_current_line(114, ng0);
    t4 = (t1 + 23560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    xsi_set_current_line(116, ng0);
    xsi_vlog_stop(1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(109, ng0);
    t16 = (t1 + 22600);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t2 + 56U);
    t20 = *((char **)t19);
    t21 = (t2 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t22, &&LAB9);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 5456);
    t26 = xsi_create_subprogram_invocation(t24, 0, t1, t25, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t25, t26);
    t27 = (t1 + 25800);
    xsi_vlogvar_assign_value(t27, t18, 0, 0, 32);

LAB11:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t36 = ((int  (*)(char *, char *))t35)(t1, t29);
    if (t36 == -1)
        goto LAB12;

LAB13:    if (t36 != 0)
        goto LAB14;

LAB9:    t29 = (t1 + 5456);
    xsi_vlog_subprogram_popinvocation(t29);

LAB10:    t37 = (t2 + 64U);
    t38 = *((char **)t37);
    t37 = (t1 + 5456);
    t39 = (t2 + 56U);
    t40 = *((char **)t39);
    xsi_delete_subprogram_invocation(t37, t38, t1, t40, t2);
    goto LAB8;

LAB12:    t0 = -1;
    goto LAB1;

LAB14:    t28 = (t2 + 48U);
    *((char **)t28) = &&LAB11;
    goto LAB1;

LAB18:    t0 = -1;
    goto LAB1;

LAB20:    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB17;
    goto LAB1;

}

static void NetDecl_222_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 26720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng22);
    t2 = (t0 + 18680U);
    t4 = *((char **)t2);
    t2 = (t0 + 18520U);
    t5 = *((char **)t2);
    t2 = (t0 + 18360U);
    t6 = *((char **)t2);
    t2 = (t0 + 18200U);
    t7 = *((char **)t2);
    t2 = (t0 + 18040U);
    t8 = *((char **)t2);
    t2 = (t0 + 17880U);
    t9 = *((char **)t2);
    t2 = (t0 + 17720U);
    t10 = *((char **)t2);
    t2 = (t0 + 17560U);
    t11 = *((char **)t2);
    t2 = (t0 + 17400U);
    t12 = *((char **)t2);
    t2 = (t0 + 17240U);
    t13 = *((char **)t2);
    t2 = (t0 + 17080U);
    t14 = *((char **)t2);
    t2 = (t0 + 16920U);
    t15 = *((char **)t2);
    t2 = (t0 + 16760U);
    t16 = *((char **)t2);
    t2 = (t0 + 16600U);
    t17 = *((char **)t2);
    t2 = (t0 + 16440U);
    t18 = *((char **)t2);
    t2 = (t0 + 16280U);
    t19 = *((char **)t2);
    t2 = (t0 + 16120U);
    t20 = *((char **)t2);
    t2 = (t0 + 15960U);
    t21 = *((char **)t2);
    t2 = (t0 + 15800U);
    t22 = *((char **)t2);
    t2 = (t0 + 15640U);
    t23 = *((char **)t2);
    t2 = (t0 + 15480U);
    t24 = *((char **)t2);
    t2 = (t0 + 15320U);
    t25 = *((char **)t2);
    t2 = (t0 + 15160U);
    t26 = *((char **)t2);
    t2 = (t0 + 15000U);
    t27 = *((char **)t2);
    t2 = (t0 + 14840U);
    t28 = *((char **)t2);
    t2 = (t0 + 14680U);
    t29 = *((char **)t2);
    t2 = (t0 + 14520U);
    t30 = *((char **)t2);
    t2 = (t0 + 14360U);
    t31 = *((char **)t2);
    t2 = (t0 + 14200U);
    t32 = *((char **)t2);
    t2 = (t0 + 14040U);
    t33 = *((char **)t2);
    t2 = (t0 + 13880U);
    t34 = *((char **)t2);
    t2 = (t0 + 13720U);
    t35 = *((char **)t2);
    t2 = (t0 + 13560U);
    t36 = *((char **)t2);
    t2 = (t0 + 13400U);
    t37 = *((char **)t2);
    t2 = (t0 + 13240U);
    t38 = *((char **)t2);
    t2 = (t0 + 13080U);
    t39 = *((char **)t2);
    t2 = (t0 + 12920U);
    t40 = *((char **)t2);
    t2 = (t0 + 12760U);
    t41 = *((char **)t2);
    t2 = (t0 + 12600U);
    t42 = *((char **)t2);
    t2 = (t0 + 12440U);
    t43 = *((char **)t2);
    xsi_vlogtype_concat(t3, 40, 40, 40U, t43, 1, t42, 1, t41, 1, t40, 1, t39, 1, t38, 1, t37, 1, t36, 1, t35, 1, t34, 1, t33, 1, t32, 1, t31, 1, t30, 1, t29, 1, t28, 1, t27, 1, t26, 1, t25, 1, t24, 1, t23, 1, t22, 1, t21, 1, t20, 1, t19, 1, t18, 1, t17, 1, t16, 1, t15, 1, t14, 1, t13, 1, t12, 1, t11, 1, t10, 1, t9, 1, t8, 1, t7, 1, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 29968);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_bit_copy(t47, 0, t3, 0, 40);
    xsi_driver_vfirst_trans(t2, 0, 39U);
    t48 = (t0 + 29520);
    *((int *)t48) = 1;

LAB1:    return;
}

static void Cont_232_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 26968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(232, ng22);
    t2 = (t0 + 20520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30288);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 30224);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 2U;
    t24 = t23;
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t23 = (t23 >> 1);
    t24 = (t24 >> 1);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 30160);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 4U;
    t37 = t36;
    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t36 = (t36 >> 2);
    t37 = (t37 >> 2);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 30096);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 8U;
    t50 = t49;
    t51 = (t4 + 4);
    t52 = *((unsigned int *)t4);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 3);
    t50 = (t50 >> 3);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 30032);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 16U;
    t63 = t62;
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t62 = (t62 >> 4);
    t63 = (t63 >> 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 29536);
    *((int *)t70) = 1;

LAB1:    return;
}

static void Cont_233_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;

LAB0:    t1 = (t0 + 27216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(233, ng22);
    t2 = (t0 + 20680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 30736);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 2U;
    t24 = t23;
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t23 = (t23 >> 1);
    t24 = (t24 >> 1);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 30672);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 4U;
    t37 = t36;
    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t36 = (t36 >> 2);
    t37 = (t37 >> 2);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 30608);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 8U;
    t50 = t49;
    t51 = (t4 + 4);
    t52 = *((unsigned int *)t4);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 3);
    t50 = (t50 >> 3);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 30544);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 16U;
    t63 = t62;
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t62 = (t62 >> 4);
    t63 = (t63 >> 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 30480);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 32U;
    t76 = t75;
    t77 = (t4 + 4);
    t78 = *((unsigned int *)t4);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t75 = (t75 >> 5);
    t76 = (t76 >> 5);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 30416);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 64U;
    t89 = t88;
    t90 = (t4 + 4);
    t91 = *((unsigned int *)t4);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t88 = (t88 >> 6);
    t89 = (t89 >> 6);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 0);
    t96 = (t0 + 30352);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    memset(t100, 0, 8);
    t101 = 128U;
    t102 = t101;
    t103 = (t4 + 4);
    t104 = *((unsigned int *)t4);
    t101 = (t101 & t104);
    t105 = *((unsigned int *)t103);
    t102 = (t102 & t105);
    t101 = (t101 >> 7);
    t102 = (t102 >> 7);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t107 | t101);
    t108 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t108 | t102);
    xsi_driver_vfirst_trans(t96, 0, 0);
    t109 = (t0 + 29552);
    *((int *)t109) = 1;

LAB1:    return;
}

static void Cont_234_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 27464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(234, ng22);
    t2 = (t0 + 8600U);
    t4 = *((char **)t2);
    t2 = (t0 + 8760U);
    t5 = *((char **)t2);
    t2 = (t0 + 8920U);
    t6 = *((char **)t2);
    t2 = (t0 + 9080U);
    t7 = *((char **)t2);
    t2 = (t0 + 9240U);
    t8 = *((char **)t2);
    t2 = (t0 + 9400U);
    t9 = *((char **)t2);
    t2 = (t0 + 9560U);
    t10 = *((char **)t2);
    t2 = (t0 + 9720U);
    t11 = *((char **)t2);
    xsi_vlogtype_concat(t3, 8, 8, 8U, t11, 1, t10, 1, t9, 1, t8, 1, t7, 1, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 30864);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 255U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t2, 0, 7);
    t24 = (t0 + 29568);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Initial_288_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(289, ng22);

LAB2:    xsi_set_current_line(291, ng22);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 20200);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(292, ng22);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 20520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(293, ng22);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 20680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(294, ng22);
    t1 = ((char*)((ng23)));
    t2 = (t0 + 20360);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(295, ng22);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 20840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(298, ng22);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 21000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(299, ng22);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 21160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Initial_304_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 27960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(305, ng22);

LAB4:    xsi_set_current_line(306, ng22);
    t2 = (t0 + 27768);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(307, ng22);

LAB6:    xsi_set_current_line(307, ng22);
    t3 = (t0 + 27768);
    xsi_process_wait(t3, 20345LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(307, ng22);
    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t8) == 0)
        goto LAB8;

LAB10:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB11:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB12:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 20840);
    xsi_vlogvar_assign_value(t25, t4, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_326_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 28208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(327, ng22);

LAB4:    xsi_set_current_line(328, ng22);
    t2 = (t0 + 28016);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(329, ng22);
    t3 = (t0 + 29584);
    *((int *)t3) = 1;
    t4 = (t0 + 28240);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(330, ng22);
    t2 = (t0 + 28016);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(331, ng22);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 20360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(332, ng22);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t4 = (t0 + 36528);
    *((int *)t4) = t8;

LAB8:    t9 = (t0 + 36528);
    if (*((int *)t9) > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(334, ng22);
    t2 = (t0 + 28016);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    xsi_set_current_line(333, ng22);
    t10 = (t0 + 29600);
    *((int *)t10) = 1;
    t11 = (t0 + 28240);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    t2 = (t0 + 36528);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB8;

LAB12:    xsi_set_current_line(335, ng22);
    t3 = (t0 + 29616);
    *((int *)t3) = 1;
    t4 = (t0 + 28240);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(336, ng22);
    t2 = (t0 + 28016);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(337, ng22);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 20360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Cont_341_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 28456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(341, ng22);
    t2 = (t0 + 20360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 30928);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 29632);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

}

static void Always_370_8(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 28704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(370, ng22);
    t2 = (t0 + 29648);
    *((int *)t2) = 1;
    t3 = (t0 + 28736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(371, ng22);

LAB5:    xsi_set_current_line(372, ng22);
    t4 = (t0 + 22760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 22760);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(373, ng22);
    t2 = (t0 + 22760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t6, 32);
    t5 = (t8 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(374, ng22);

LAB9:    xsi_set_current_line(375, ng22);
    t7 = (t0 + 1424);
    t9 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)119, t9, 32);
    xsi_set_current_line(376, ng22);
    t2 = (t0 + 28512);
    t3 = (t0 + 5888);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB12:    t5 = (t0 + 28608);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t9 = *((char **)t7);
    t15 = (t9 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t6);

LAB14:    if (t19 != 0)
        goto LAB15;

LAB10:    t6 = (t0 + 5888);
    xsi_vlog_subprogram_popinvocation(t6);

LAB11:    t20 = (t0 + 28608);
    t21 = *((char **)t20);
    t20 = (t0 + 5888);
    t22 = (t0 + 28512);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB8;

LAB13:;
LAB15:    t5 = (t0 + 28704U);
    *((char **)t5) = &&LAB12;
    goto LAB1;

}

static void Initial_396_9(char *t0)
{
    char t4[8];
    char t17[8];
    char t30[8];
    char t43[8];
    char t56[8];
    char t69[8];
    char t79[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    double t80;
    double t81;
    int t82;
    int t83;

LAB0:    t1 = (t0 + 28952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(397, ng22);

LAB4:    xsi_set_current_line(400, ng22);
    t2 = ((char*)((ng26)));
    t3 = ((char*)((ng27)));
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t2, 216, (char)118, t3, 224);
    xsi_set_current_line(402, ng22);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 21640);
    xsi_vlogfile_readmemh(t2, 216, t3, 0, 0, 0, 0);
    xsi_set_current_line(403, ng22);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 21800);
    xsi_vlogfile_readmemh(t2, 224, t3, 0, 0, 0, 0);
    xsi_set_current_line(406, ng22);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 22280);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(407, ng22);
    xsi_set_current_line(407, ng22);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1696);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t7, 32);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(422, ng22);
    t2 = (t0 + 22280);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t6, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t5, 32, t4, 32);
    t7 = (t17 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(425, ng22);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    xsi_set_current_line(426, ng22);
    t2 = (t0 + 22280);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(427, ng22);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    xsi_set_current_line(431, ng22);
    t2 = ((char*)((ng34)));
    t3 = ((char*)((ng35)));
    xsi_vlogfile_write(1, 0, 0, ng33, 3, t0, (char)118, t2, 264, (char)118, t3, 272);
    xsi_set_current_line(433, ng22);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 21960);
    xsi_vlogfile_readmemh(t2, 264, t3, 0, 0, 0, 0);
    xsi_set_current_line(434, ng22);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 22120);
    xsi_vlogfile_readmemh(t2, 272, t3, 0, 0, 0, 0);
    xsi_set_current_line(436, ng22);
    xsi_set_current_line(436, ng22);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1832);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t7, 32);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(450, ng22);
    t2 = (t0 + 22440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t6, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t5, 32, t4, 32);
    t7 = (t17 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(454, ng22);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    xsi_set_current_line(455, ng22);
    t2 = (t0 + 22440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng37, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(456, ng22);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    xsi_set_current_line(460, ng22);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng38, ng39);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 23560);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(463, ng22);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 21320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 18);
    xsi_set_current_line(464, ng22);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 21480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 18);
    xsi_set_current_line(466, ng22);
    t2 = (t0 + 28760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB39;

LAB1:    return;
LAB6:    xsi_set_current_line(408, ng22);

LAB8:    xsi_set_current_line(410, ng22);
    t13 = (t0 + 23400);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng28)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t15, 32, t16, 32);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(415, ng22);
    t2 = (t0 + 21640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 21640);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 21640);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 23400);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t4, 18, t5, t13, t16, 2, 1, t25, 32, 1);
    t26 = ((char*)((ng30)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t26))
        goto LAB14;

LAB12:    t27 = (t4 + 4);
    t28 = (t26 + 4);
    if (*((unsigned int *)t27) != *((unsigned int *)t28))
        goto LAB14;

LAB13:    *((unsigned int *)t17) = 1;

LAB14:    t29 = (t17 + 4);
    t8 = *((unsigned int *)t29);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(407, ng22);
    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 23400);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB5;

LAB9:    xsi_set_current_line(411, ng22);
    t24 = (t0 + 23400);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 21640);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 21640);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 21640);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 23400);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t30, 18, t29, t33, t36, 1, 1, t39, 32, 1);
    t40 = (t0 + 21800);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = (t0 + 21800);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 21800);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 23400);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t43, 18, t42, t46, t49, 1, 1, t52, 32, 1);
    t53 = (t0 + 21640);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t57 = (t0 + 21640);
    t58 = (t57 + 72U);
    t59 = *((char **)t58);
    t60 = (t0 + 21640);
    t61 = (t60 + 64U);
    t62 = *((char **)t61);
    t63 = (t0 + 23400);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    xsi_vlog_generic_get_array_select_value(t56, 18, t55, t59, t62, 1, 1, t65, 32, 1);
    t66 = (t0 + 21800);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t70 = (t0 + 21800);
    t71 = (t70 + 72U);
    t72 = *((char **)t71);
    t73 = (t0 + 21800);
    t74 = (t73 + 64U);
    t75 = *((char **)t74);
    t76 = (t0 + 23400);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    xsi_vlog_generic_get_array_select_value(t69, 18, t68, t72, t75, 1, 1, t78, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng29, 6, t0, (char)119, t26, 32, (char)119, t30, 18, (char)119, t43, 18, (char)119, t56, 18, (char)119, t69, 18);
    goto LAB11;

LAB15:    xsi_set_current_line(416, ng22);

LAB18:    xsi_set_current_line(417, ng22);
    t31 = (t0 + 23400);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 22280);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 32);
    xsi_set_current_line(418, ng22);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 23400);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB17;

LAB19:    xsi_set_current_line(423, ng22);
    t13 = (t0 + 1696);
    t14 = *((char **)t13);
    t13 = (t0 + 22280);
    xsi_vlogvar_assign_value(t13, t14, 0, 0, 32);
    goto LAB21;

LAB23:    xsi_set_current_line(437, ng22);

LAB25:    xsi_set_current_line(439, ng22);
    t13 = (t0 + 23400);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng28)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t15, 32, t16, 32);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(443, ng22);
    t2 = (t0 + 21960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 21960);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 21960);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 23400);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t4, 18, t5, t13, t16, 2, 1, t25, 32, 1);
    t26 = ((char*)((ng30)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t26))
        goto LAB31;

LAB29:    t27 = (t4 + 4);
    t28 = (t26 + 4);
    if (*((unsigned int *)t27) != *((unsigned int *)t28))
        goto LAB31;

LAB30:    *((unsigned int *)t17) = 1;

LAB31:    t29 = (t17 + 4);
    t8 = *((unsigned int *)t29);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(436, ng22);
    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 23400);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB22;

LAB26:    xsi_set_current_line(440, ng22);
    t24 = (t0 + 23400);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 21960);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 21960);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 21960);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 23400);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t30, 18, t29, t33, t36, 1, 1, t39, 32, 1);
    t40 = (t0 + 21960);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = (t0 + 21960);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 21960);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 23400);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t43, 18, t42, t46, t49, 1, 1, t52, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng36, 4, t0, (char)119, t26, 32, (char)119, t30, 18, (char)119, t43, 18);
    goto LAB28;

LAB32:    xsi_set_current_line(444, ng22);

LAB35:    xsi_set_current_line(445, ng22);
    t31 = (t0 + 23400);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 22440);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 32);
    xsi_set_current_line(446, ng22);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 23400);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB34;

LAB36:    xsi_set_current_line(451, ng22);
    t13 = (t0 + 1832);
    t14 = *((char **)t13);
    t13 = (t0 + 22440);
    xsi_vlogvar_assign_value(t13, t14, 0, 0, 32);
    goto LAB38;

LAB39:    xsi_set_current_line(468, ng22);
    t3 = (t0 + 29664);
    *((int *)t3) = 1;
    t5 = (t0 + 28984);
    *((char **)t5) = t3;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(469, ng22);
    t6 = (t0 + 28760);
    xsi_process_wait(t6, 1000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(470, ng22);
    t7 = (t0 + 29680);
    *((int *)t7) = 1;
    t13 = (t0 + 28984);
    *((char **)t13) = t7;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(471, ng22);
    t2 = (t0 + 28760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(474, ng22);
    t3 = xsi_vlog_time(t79, 1000.0000000000000, 1000.0000000000000);
    t80 = xsi_vlog_convert_to_real(t79, 64, 2);
    t81 = (t80 / 1000.0000000000000);
    *((double *)t4) = t81;
    xsi_vlogfile_write(1, 0, 0, ng40, 2, t0, (char)114, t4, 64);
    xsi_set_current_line(475, ng22);
    t2 = ((char*)((ng41)));
    t3 = ((char*)((ng42)));
    t5 = (t0 + 28760);
    t6 = (t0 + 3296);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t13 = (t0 + 24200);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 32);
    t14 = (t0 + 24360);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 4);

LAB46:    t15 = (t0 + 28856);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t24 = *((char **)t18);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t82 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB48:    if (t82 != 0)
        goto LAB49;

LAB44:    t16 = (t0 + 3296);
    xsi_vlog_subprogram_popinvocation(t16);

LAB45:    t29 = (t0 + 28856);
    t31 = *((char **)t29);
    t29 = (t0 + 3296);
    t32 = (t0 + 28760);
    t33 = 0;
    xsi_delete_subprogram_invocation(t29, t31, t0, t32, t33);
    xsi_set_current_line(476, ng22);
    t2 = ((char*)((ng43)));
    t3 = ((char*)((ng44)));
    t5 = (t0 + 28760);
    t6 = (t0 + 3296);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t13 = (t0 + 24200);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 32);
    t14 = (t0 + 24360);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 4);

LAB52:    t15 = (t0 + 28856);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t24 = *((char **)t18);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t82 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB54:    if (t82 != 0)
        goto LAB55;

LAB50:    t16 = (t0 + 3296);
    xsi_vlog_subprogram_popinvocation(t16);

LAB51:    t29 = (t0 + 28856);
    t31 = *((char **)t29);
    t29 = (t0 + 3296);
    t32 = (t0 + 28760);
    t33 = 0;
    xsi_delete_subprogram_invocation(t29, t31, t0, t32, t33);
    xsi_set_current_line(477, ng22);
    t2 = ((char*)((ng45)));
    t3 = ((char*)((ng46)));
    t5 = (t0 + 28760);
    t6 = (t0 + 3296);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t13 = (t0 + 24200);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 32);
    t14 = (t0 + 24360);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 4);

LAB58:    t15 = (t0 + 28856);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t24 = *((char **)t18);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t82 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB60:    if (t82 != 0)
        goto LAB61;

LAB56:    t16 = (t0 + 3296);
    xsi_vlog_subprogram_popinvocation(t16);

LAB57:    t29 = (t0 + 28856);
    t31 = *((char **)t29);
    t29 = (t0 + 3296);
    t32 = (t0 + 28760);
    t33 = 0;
    xsi_delete_subprogram_invocation(t29, t31, t0, t32, t33);
    xsi_set_current_line(478, ng22);
    t2 = ((char*)((ng47)));
    t3 = ((char*)((ng48)));
    t5 = (t0 + 28760);
    t6 = (t0 + 3296);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t13 = (t0 + 24200);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 32);
    t14 = (t0 + 24360);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 4);

LAB64:    t15 = (t0 + 28856);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t24 = *((char **)t18);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t82 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB66:    if (t82 != 0)
        goto LAB67;

LAB62:    t16 = (t0 + 3296);
    xsi_vlog_subprogram_popinvocation(t16);

LAB63:    t29 = (t0 + 28856);
    t31 = *((char **)t29);
    t29 = (t0 + 3296);
    t32 = (t0 + 28760);
    t33 = 0;
    xsi_delete_subprogram_invocation(t29, t31, t0, t32, t33);
    xsi_set_current_line(479, ng22);
    t2 = ((char*)((ng49)));
    t3 = ((char*)((ng50)));
    t5 = (t0 + 28760);
    t6 = (t0 + 3296);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t13 = (t0 + 24200);
    xsi_vlogvar_assign_value(t13, t2, 0, 0, 32);
    t14 = (t0 + 24360);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 4);

LAB70:    t15 = (t0 + 28856);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t24 = *((char **)t18);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t82 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB72:    if (t82 != 0)
        goto LAB73;

LAB68:    t16 = (t0 + 3296);
    xsi_vlog_subprogram_popinvocation(t16);

LAB69:    t29 = (t0 + 28856);
    t31 = *((char **)t29);
    t29 = (t0 + 3296);
    t32 = (t0 + 28760);
    t33 = 0;
    xsi_delete_subprogram_invocation(t29, t31, t0, t32, t33);
    xsi_set_current_line(484, ng22);
    t2 = ((char*)((ng46)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t82 = (t10 & t9);
    t5 = (t0 + 36532);
    *((int *)t5) = t82;

LAB74:    t6 = (t0 + 36532);
    if (*((int *)t6) > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(492, ng22);
    t2 = (t0 + 32096);
    xsi_trigger(t2, -1, -1);
    xsi_set_current_line(495, ng22);
    t2 = xsi_vlog_time(t79, 1000.0000000000000, 1000.0000000000000);
    t80 = xsi_vlog_convert_to_real(t79, 64, 2);
    t81 = (t80 / 1000.0000000000000);
    *((double *)t4) = t81;
    xsi_vlogfile_write(1, 0, 0, ng51, 2, t0, (char)114, t4, 64);
    xsi_set_current_line(497, ng22);
    xsi_set_current_line(497, ng22);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB80:    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 22280);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t13, 32);
    t14 = (t4 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(513, ng22);
    t2 = (t0 + 29728);
    *((int *)t2) = 1;
    t3 = (t0 + 28984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB47:;
LAB49:    t15 = (t0 + 28952U);
    *((char **)t15) = &&LAB46;
    goto LAB1;

LAB53:;
LAB55:    t15 = (t0 + 28952U);
    *((char **)t15) = &&LAB52;
    goto LAB1;

LAB59:;
LAB61:    t15 = (t0 + 28952U);
    *((char **)t15) = &&LAB58;
    goto LAB1;

LAB65:;
LAB67:    t15 = (t0 + 28952U);
    *((char **)t15) = &&LAB64;
    goto LAB1;

LAB71:;
LAB73:    t15 = (t0 + 28952U);
    *((char **)t15) = &&LAB70;
    goto LAB1;

LAB75:    xsi_set_current_line(485, ng22);

LAB77:    xsi_set_current_line(486, ng22);
    t7 = (t0 + 29696);
    *((int *)t7) = 1;
    t13 = (t0 + 28984);
    *((char **)t13) = t7;
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    xsi_set_current_line(487, ng22);
    t2 = (t0 + 28760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    t2 = (t0 + 36532);
    t82 = *((int *)t2);
    *((int *)t2) = (t82 - 1);
    goto LAB74;

LAB81:    xsi_set_current_line(498, ng22);

LAB83:    xsi_set_current_line(501, ng22);
    t15 = (t0 + 29712);
    *((int *)t15) = 1;
    t16 = (t0 + 28984);
    *((char **)t16) = t15;
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    xsi_set_current_line(502, ng22);
    t18 = (t0 + 28760);
    xsi_process_wait(t18, 1000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(503, ng22);
    t2 = (t0 + 21640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 21640);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 21640);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 23400);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t4, 18, t5, t13, t16, 1, 1, t25, 32, 1);
    t26 = (t0 + 21320);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 18);
    xsi_set_current_line(504, ng22);
    t2 = (t0 + 21800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 21800);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 21800);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 23400);
    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t4, 18, t5, t13, t16, 1, 1, t25, 32, 1);
    t26 = (t0 + 21480);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 18);
    xsi_set_current_line(505, ng22);
    t2 = (t0 + 28760);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(507, ng22);
    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng52)));
    memset(t4, 0, 8);
    xsi_vlog_signed_mod(t4, 32, t5, 32, t6, 32);
    t7 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t4, 32, t7, 32);
    t13 = (t17 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB87;

LAB88:
LAB89:    xsi_set_current_line(497, ng22);
    t2 = (t0 + 23400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 23400);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB80;

LAB87:    xsi_set_current_line(508, ng22);
    t14 = (t0 + 23400);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng53, 2, t0, (char)119, t16, 32);
    goto LAB89;

LAB90:    xsi_set_current_line(514, ng22);
    t5 = (t0 + 28760);
    xsi_process_wait(t5, 1000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(515, ng22);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 21320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 18);
    xsi_set_current_line(516, ng22);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 21480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 18);
    xsi_set_current_line(518, ng22);
    t2 = ((char*)((ng54)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t82 = (t10 & t9);
    t5 = (t0 + 36536);
    *((int *)t5) = t82;

LAB92:    t6 = (t0 + 36536);
    if (*((int *)t6) > 0)
        goto LAB93;

LAB94:    goto LAB1;

LAB93:    xsi_set_current_line(519, ng22);
    t7 = (t0 + 29744);
    *((int *)t7) = 1;
    t13 = (t0 + 28984);
    *((char **)t13) = t7;
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB95:    xsi_set_current_line(522, ng22);
    t14 = (t0 + 28760);
    t15 = (t0 + 5888);
    t16 = xsi_create_subprogram_invocation(t14, 0, t0, t15, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB98:    t18 = (t0 + 28856);
    t24 = *((char **)t18);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t31 = *((char **)t29);
    t83 = ((int  (*)(char *, char *))t31)(t0, t24);

LAB100:    if (t83 != 0)
        goto LAB101;

LAB96:    t24 = (t0 + 5888);
    xsi_vlog_subprogram_popinvocation(t24);

LAB97:    t32 = (t0 + 28856);
    t33 = *((char **)t32);
    t32 = (t0 + 5888);
    t34 = (t0 + 28760);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    t2 = (t0 + 36536);
    t82 = *((int *)t2);
    *((int *)t2) = (t82 - 1);
    goto LAB92;

LAB99:;
LAB101:    t18 = (t0 + 28952U);
    *((char **)t18) = &&LAB98;
    goto LAB1;

}

static void Initial_535_10(char *t0)
{
    char t14[8];
    char t22[8];
    char t23[8];
    char t24[8];
    char t35[8];
    char t45[8];
    char t46[8];
    char t54[8];
    char t101[8];
    char t115[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    int t127;

LAB0:    t1 = (t0 + 29200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(536, ng22);

LAB4:    xsi_set_current_line(539, ng22);
    t2 = (t0 + 29760);
    *((int *)t2) = 1;
    t3 = (t0 + 29232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(540, ng22);
    xsi_vlogfile_write(1, 0, 0, ng55, 1, t0);
    xsi_set_current_line(543, ng22);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t0 + 36540);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 36540);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(549, ng22);

LAB10:    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t12 = (t6 & t5);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB11;

LAB12:    goto LAB1;

LAB7:    xsi_set_current_line(544, ng22);
    t10 = (t0 + 29776);
    *((int *)t10) = 1;
    t11 = (t0 + 29232);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 36540);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB11:    xsi_set_current_line(550, ng22);

LAB13:    xsi_set_current_line(551, ng22);
    t8 = (t0 + 29792);
    *((int *)t8) = 1;
    t9 = (t0 + 29232);
    *((char **)t9) = t8;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(552, ng22);
    t2 = (t0 + 22120);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 22120);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t15 = (t0 + 22120);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 23720);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 18, t8, t11, t17, 1, 1, t20, 32, 1);
    t21 = (t0 + 23880);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 18);
    xsi_set_current_line(553, ng22);
    t2 = (t0 + 21960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 21960);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t15 = (t0 + 21960);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 23720);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 18, t8, t11, t17, 1, 1, t20, 32, 1);
    t21 = (t0 + 24040);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 18);
    xsi_set_current_line(555, ng22);
    t2 = (t0 + 19640U);
    t3 = *((char **)t2);
    t2 = (t0 + 22120);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 22120);
    t11 = (t10 + 72U);
    t15 = *((char **)t11);
    t16 = (t0 + 22120);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 23720);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_array_select_value(t22, 18, t9, t15, t18, 1, 1, t21, 32, 1);
    memset(t23, 0, 8);
    xsi_vlog_signed_equal(t23, 18, t3, 18, t22, 18);
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t4 = *((unsigned int *)t25);
    t5 = (~(t4));
    t6 = *((unsigned int *)t23);
    t12 = (t6 & t5);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB18:    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB19;

LAB20:    memcpy(t54, t24, 8);

LAB21:    memset(t14, 0, 8);
    t85 = (t54 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t54);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t85) == 0)
        goto LAB29;

LAB31:    t91 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t91) = 1;

LAB32:    t92 = (t14 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t14);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(562, ng22);
    t2 = (t0 + 23560);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 19480U);
    t10 = *((char **)t9);
    t9 = (t0 + 19640U);
    t11 = *((char **)t9);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng57, 3, t0, (char)119, t10, 18, (char)119, t11, 18);
    xsi_set_current_line(564, ng22);
    t2 = (t0 + 23720);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t8, 32, t9, 32);
    t10 = (t0 + 23720);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    xsi_set_current_line(566, ng22);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t12 = (t6 & t5);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t2) != 0)
        goto LAB39;

LAB40:    t9 = (t14 + 4);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t9);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB41;

LAB42:    memcpy(t24, t14, 8);

LAB43:    t27 = (t24 + 4);
    t86 = *((unsigned int *)t27);
    t87 = (~(t86));
    t88 = *((unsigned int *)t24);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB10;

LAB15:    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB17:    t26 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    t31 = (t0 + 19480U);
    t32 = *((char **)t31);
    t31 = (t0 + 21960);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    t36 = (t0 + 21960);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 21960);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = (t0 + 23720);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t35, 18, t34, t38, t41, 1, 1, t44, 32, 1);
    memset(t45, 0, 8);
    xsi_vlog_signed_equal(t45, 18, t32, 18, t35, 18);
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t45);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t47) != 0)
        goto LAB24;

LAB25:    t55 = *((unsigned int *)t24);
    t56 = *((unsigned int *)t46);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t24 + 4);
    t59 = (t46 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t46) = 1;
    goto LAB25;

LAB24:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB25;

LAB26:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t24 + 4);
    t69 = (t46 + 4);
    t70 = *((unsigned int *)t24);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t46);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t7 = (t71 & t73);
    t78 = (t75 & t77);
    t79 = (~(t7));
    t80 = (~(t78));
    t81 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t81 & t79);
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t83 & t79);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    goto LAB28;

LAB29:    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(556, ng22);

LAB36:    xsi_set_current_line(557, ng22);
    t98 = (t0 + 21960);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t102 = (t0 + 21960);
    t103 = (t102 + 72U);
    t104 = *((char **)t103);
    t105 = (t0 + 21960);
    t106 = (t105 + 64U);
    t107 = *((char **)t106);
    t108 = (t0 + 23720);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    xsi_vlog_generic_get_array_select_value(t101, 18, t100, t104, t107, 1, 1, t110, 32, 1);
    t111 = (t0 + 19480U);
    t112 = *((char **)t111);
    t111 = (t0 + 22120);
    t113 = (t111 + 56U);
    t114 = *((char **)t113);
    t116 = (t0 + 22120);
    t117 = (t116 + 72U);
    t118 = *((char **)t117);
    t119 = (t0 + 22120);
    t120 = (t119 + 64U);
    t121 = *((char **)t120);
    t122 = (t0 + 23720);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    xsi_vlog_generic_get_array_select_value(t115, 18, t114, t118, t121, 1, 1, t124, 32, 1);
    t125 = (t0 + 19640U);
    t126 = *((char **)t125);
    xsi_vlogfile_write(1, 0, 0, ng56, 5, t0, (char)119, t101, 18, (char)119, t112, 18, (char)119, t115, 18, (char)119, t126, 18);
    xsi_set_current_line(559, ng22);
    t2 = (t0 + 22600);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t8, 32, t9, 32);
    t10 = (t0 + 22600);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    goto LAB35;

LAB37:    *((unsigned int *)t14) = 1;
    goto LAB40;

LAB39:    t8 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB41:    t10 = (t0 + 22600);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t16 = (t0 + 1152);
    t17 = *((char **)t16);
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t15, 32, t17, 32);
    memset(t23, 0, 8);
    t16 = (t22 + 4);
    t48 = *((unsigned int *)t16);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t16) != 0)
        goto LAB46;

LAB47:    t55 = *((unsigned int *)t14);
    t56 = *((unsigned int *)t23);
    t57 = (t55 & t56);
    *((unsigned int *)t24) = t57;
    t19 = (t14 + 4);
    t20 = (t23 + 4);
    t21 = (t24 + 4);
    t61 = *((unsigned int *)t19);
    t62 = *((unsigned int *)t20);
    t63 = (t61 | t62);
    *((unsigned int *)t21) = t63;
    t64 = *((unsigned int *)t21);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB43;

LAB44:    *((unsigned int *)t23) = 1;
    goto LAB47;

LAB46:    t18 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB47;

LAB48:    t66 = *((unsigned int *)t24);
    t67 = *((unsigned int *)t21);
    *((unsigned int *)t24) = (t66 | t67);
    t25 = (t14 + 4);
    t26 = (t23 + 4);
    t70 = *((unsigned int *)t14);
    t71 = (~(t70));
    t72 = *((unsigned int *)t25);
    t73 = (~(t72));
    t74 = *((unsigned int *)t23);
    t75 = (~(t74));
    t76 = *((unsigned int *)t26);
    t77 = (~(t76));
    t7 = (t71 & t73);
    t78 = (t75 & t77);
    t79 = (~(t7));
    t80 = (~(t78));
    t81 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t81 & t79);
    t82 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t82 & t80);
    t83 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t83 & t79);
    t84 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t84 & t80);
    goto LAB50;

LAB51:    xsi_set_current_line(567, ng22);

LAB54:    xsi_set_current_line(568, ng22);
    t31 = ((char*)((ng54)));
    t32 = (t31 + 4);
    t93 = *((unsigned int *)t32);
    t94 = (~(t93));
    t95 = *((unsigned int *)t31);
    t127 = (t95 & t94);
    t33 = (t0 + 36544);
    *((int *)t33) = t127;

LAB55:    t34 = (t0 + 36544);
    if (*((int *)t34) > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(571, ng22);
    xsi_vlogfile_write(1, 0, 0, ng58, 1, t0);
    xsi_set_current_line(574, ng22);
    t2 = (t0 + 29008);
    t3 = (t0 + 5888);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB61:    t9 = (t0 + 29104);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t15 = *((char **)t11);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t7 = ((int  (*)(char *, char *))t19)(t0, t10);

LAB63:    if (t7 != 0)
        goto LAB64;

LAB59:    t10 = (t0 + 5888);
    xsi_vlog_subprogram_popinvocation(t10);

LAB60:    t20 = (t0 + 29104);
    t21 = *((char **)t20);
    t20 = (t0 + 5888);
    t25 = (t0 + 29008);
    t26 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t25, t26);
    goto LAB53;

LAB56:    xsi_set_current_line(569, ng22);
    t36 = (t0 + 29808);
    *((int *)t36) = 1;
    t37 = (t0 + 29232);
    *((char **)t37) = t36;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    t2 = (t0 + 36544);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB55;

LAB62:;
LAB64:    t9 = (t0 + 29200U);
    *((char **)t9) = &&LAB61;
    goto LAB1;

}


extern void work_m_00000000002565990145_3291208359_init()
{
	static char *pe[] = {(void *)NetDecl_222_0,(void *)Cont_232_1,(void *)Cont_233_2,(void *)Cont_234_3,(void *)Initial_288_4,(void *)Initial_304_5,(void *)Initial_326_6,(void *)Cont_341_7,(void *)Always_370_8,(void *)Initial_396_9,(void *)Initial_535_10};
	static char *se[] = {(void *)sp_WritePort,(void *)sp_ReadPort,(void *)sp_SendData,(void *)sp_GetData,(void *)sp_print_pass,(void *)sp_print_fail,(void *)sp_finalize_simulation};
	xsi_register_didat("work_m_00000000002565990145_3291208359", "isim/s6base_tb_isim_beh.exe.sim/work/m_00000000002565990145_3291208359.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
