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
static const char *ng0 = "C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/src/verilog-rtl/lowpass.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {64, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0, 0, 0};
static int ng7[] = {63, 0};
static unsigned int ng8[] = {3U, 0U};



static void Always_52_0(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
    char t48[8];
    char t60[16];
    char t61[16];
    char t62[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    char *t45;
    char *t46;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 4968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5536);
    *((int *)t2) = 1;
    t3 = (t0 + 5000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4776);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 2048U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB22:    t5 = ((char*)((ng4)));
    t39 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t39 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng1)));
    t39 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t39 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t39 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t39 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB31:
LAB14:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4776);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);

LAB15:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3728);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);

LAB16:    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 43, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(55, ng0);

LAB19:    xsi_set_current_line(56, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 3248);
    t10 = (t0 + 3248);
    t23 = (t10 + 72U);
    t24 = *((char **)t23);
    t30 = (t0 + 3248);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = (t0 + 3728);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t32, t33, t24, t34, 1, 1, t37, 32, 1);
    t38 = (t32 + 4);
    t16 = *((unsigned int *)t38);
    t39 = (!(t16));
    t40 = (t33 + 4);
    t17 = *((unsigned int *)t40);
    t41 = (!(t17));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3728);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB16;

LAB20:    t18 = *((unsigned int *)t32);
    t19 = *((unsigned int *)t33);
    t43 = (t18 - t19);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, *((unsigned int *)t33), t44, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(67, ng0);
    t6 = (t0 + 2368U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;

LAB35:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB25:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 3408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB49;

LAB48:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB50;

LAB51:    t24 = (t8 + 4);
    t11 = *((unsigned int *)t24);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(84, ng0);

LAB57:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 43, 0LL);

LAB55:    goto LAB31;

LAB27:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB59;

LAB58:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB60;

LAB61:    t24 = (t8 + 4);
    t11 = *((unsigned int *)t24);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(96, ng0);

LAB67:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 43, 0LL);

LAB65:    goto LAB31;

LAB34:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(67, ng0);

LAB39:    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t30 = ((char*)((ng7)));
    t31 = (t0 + 3728);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);

LAB40:    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t5, 32, t6, 32);
    t7 = (t8 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3248);
    t5 = (t0 + 3248);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 3248);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t8, t32, t7, t23, 1, 1, t24, 32, 1);
    t30 = (t8 + 4);
    t11 = *((unsigned int *)t30);
    t39 = (!(t11));
    t31 = (t32 + 4);
    t12 = *((unsigned int *)t31);
    t41 = (!(t12));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 43, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB38;

LAB41:    xsi_set_current_line(69, ng0);

LAB43:    xsi_set_current_line(70, ng0);
    t9 = (t0 + 3248);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = (t0 + 3248);
    t30 = (t24 + 72U);
    t31 = *((char **)t30);
    t34 = (t0 + 3248);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 3728);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t45 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_signed_minus(t33, 32, t40, 32, t45, 32);
    xsi_vlog_generic_get_array_select_value(t32, 18, t23, t31, t36, 1, 1, t33, 32, 1);
    t46 = (t0 + 3248);
    t49 = (t0 + 3248);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = (t0 + 3248);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = (t0 + 3728);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    xsi_vlog_generic_convert_array_indices(t47, t48, t51, t54, 1, 1, t57, 32, 1);
    t58 = (t47 + 4);
    t16 = *((unsigned int *)t58);
    t39 = (!(t16));
    t59 = (t48 + 4);
    t17 = *((unsigned int *)t59);
    t41 = (!(t17));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t6, 32);
    t7 = (t0 + 3728);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB40;

LAB44:    t18 = *((unsigned int *)t47);
    t19 = *((unsigned int *)t48);
    t43 = (t18 - t19);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t46, t32, 0, *((unsigned int *)t48), t44, 0LL);
    goto LAB45;

LAB46:    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t32);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t32), t44, 0LL);
    goto LAB47;

LAB49:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t8) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(79, ng0);

LAB56:    xsi_set_current_line(81, ng0);
    t30 = (t0 + 3408);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng5)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t34, 8, t35, 32);
    t36 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t36, t32, 0, 0, 7, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB55;

LAB59:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t8) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(90, ng0);

LAB66:    xsi_set_current_line(92, ng0);
    t30 = (t0 + 3888);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    t35 = (t0 + 2688U);
    t36 = *((char **)t35);
    t35 = (t0 + 3248);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 3248);
    t45 = (t40 + 72U);
    t46 = *((char **)t45);
    t49 = (t0 + 3248);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 3408);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_generic_get_array_select_value(t60, 43, t38, t46, t51, 1, 1, t54, 8, 2);
    xsi_vlog_signed_multiply(t61, 43, t36, 18, t60, 43);
    xsi_vlog_signed_add(t62, 43, t34, 43, t61, 43);
    t55 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t55, t62, 0, 0, 43, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 8, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 8, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB65;

}

static void Cont_105_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 262143U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 262143U);
    t14 = (t0 + 5632);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 262143U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 17);
    t27 = (t0 + 5552);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000001150544105_3570766455_init()
{
	static char *pe[] = {(void *)Always_52_0,(void *)Cont_105_1};
	xsi_register_didat("work_m_00000000001150544105_3570766455", "isim/s6base_tb_isim_beh.exe.sim/work/m_00000000001150544105_3570766455.didat");
	xsi_register_executes(pe);
}
