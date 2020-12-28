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
static const char *ng0 = "C:/Users/up201909554/Desktop/Title_to_be_defined/lab3/src/verilog-rtl/requantize.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Always_39_0(char *t0)
{
    char t8[8];
    char t33[8];
    char t37[8];
    char t41[8];
    char t67[8];
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
    int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
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
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4752);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 2184U);
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

LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB16:    t5 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t32 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t32 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 1000LL);

LAB27:
LAB14:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4752);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(41, ng0);

LAB15:    xsi_set_current_line(42, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 7, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(55, ng0);
    t6 = (t0 + 2664U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng4)));
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
        goto LAB31;

LAB28:    if (t20 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t8) = 1;

LAB31:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB27;

LAB19:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 3224);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2344U);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t9, 5, t7, 32);
    memset(t33, 0, 8);
    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB46;

LAB45:    t23 = (t8 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB47;

LAB48:    t30 = (t33 + 4);
    t11 = *((unsigned int *)t30);
    t12 = (~(t11));
    t13 = *((unsigned int *)t33);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2344U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t7, 5, t6, 32);
    memset(t33, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t8);
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
        goto LAB65;

LAB62:    if (t20 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t33) = 1;

LAB65:    t24 = (t33 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB52:    goto LAB27;

LAB21:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3224);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2344U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t6 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB97;

LAB94:    if (t20 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t8) = 1;

LAB97:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB98;

LAB99:
LAB100:    goto LAB27;

LAB23:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3224);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB111;

LAB110:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB111;

LAB114:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB112;

LAB113:    t24 = (t8 + 4);
    t11 = *((unsigned int *)t24);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(101, ng0);

LAB119:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 18, 0LL);

LAB117:    goto LAB27;

LAB30:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(55, ng0);

LAB35:    xsi_set_current_line(56, ng0);
    t30 = (t0 + 2504U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_rshift(t33, 18, t31, 18, t30, 32);
    t34 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 18, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 7, t6, 32);
    t7 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 7, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = (t0 + 2464U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t3, t6, 2, t7, 32, 1);
    t9 = ((char*)((ng4)));
    memset(t33, 0, 8);
    t10 = (t8 + 4);
    t23 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t23);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB39;

LAB36:    if (t20 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t33) = 1;

LAB39:    t30 = (t33 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(62, ng0);

LAB44:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB42:    goto LAB34;

LAB38:    t24 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);

LAB43:    xsi_set_current_line(59, ng0);
    t31 = ((char*)((ng1)));
    t34 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t34, t31, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB42;

LAB46:    t24 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t33) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(67, ng0);

LAB53:    xsi_set_current_line(68, ng0);
    t31 = (t0 + 3384);
    t34 = (t31 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_rshift(t37, 18, t35, 18, t36, 32);
    t38 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 18, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 7, t6, 32);
    t7 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 7, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3384);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t9, 2, t10, 32, 1);
    t23 = ((char*)((ng4)));
    memset(t33, 0, 8);
    t24 = (t8 + 4);
    t30 = (t23 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t23);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t24);
    t15 = *((unsigned int *)t30);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t30);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t33) = 1;

LAB57:    t34 = (t33 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB52;

LAB56:    t31 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(71, ng0);

LAB61:    xsi_set_current_line(72, ng0);
    t35 = ((char*)((ng4)));
    t36 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 1, 0LL);
    goto LAB60;

LAB64:    t23 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(75, ng0);

LAB69:    xsi_set_current_line(76, ng0);
    t30 = (t0 + 3384);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    t35 = (t0 + 3384);
    t36 = (t35 + 72U);
    t38 = *((char **)t36);
    t39 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t37, 32, t34, t38, 2, t39, 32, 1);
    t40 = ((char*)((ng4)));
    memset(t41, 0, 8);
    t42 = (t37 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t37);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB73;

LAB70:    if (t53 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t41) = 1;

LAB73:    t57 = (t41 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB74;

LAB75:
LAB76:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 18, t5, 18, t6, 32);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 18, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 7, t6, 32);
    t7 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 7, 0LL);
    goto LAB68;

LAB72:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(76, ng0);

LAB77:    xsi_set_current_line(77, ng0);
    t63 = (t0 + 3864);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng4)));
    memset(t67, 0, 8);
    t68 = (t65 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t65);
    t71 = *((unsigned int *)t66);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB81;

LAB78:    if (t79 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t67) = 1;

LAB81:    t83 = (t67 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t67);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3384);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t9, 2, t10, 32, 1);
    t23 = ((char*)((ng4)));
    memset(t33, 0, 8);
    t24 = (t8 + 4);
    t30 = (t23 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t23);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t24);
    t15 = *((unsigned int *)t30);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t30);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB89;

LAB86:    if (t20 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t33) = 1;

LAB89:    t34 = (t33 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB84:    goto LAB76;

LAB80:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(77, ng0);

LAB85:    xsi_set_current_line(78, ng0);
    t89 = ((char*)((ng4)));
    t90 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t90, t89, 0, 0, 1, 0LL);
    goto LAB84;

LAB88:    t31 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(80, ng0);

LAB93:    xsi_set_current_line(81, ng0);
    t35 = ((char*)((ng4)));
    t36 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 1, 0LL);
    goto LAB92;

LAB96:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(90, ng0);

LAB101:    xsi_set_current_line(91, ng0);
    t30 = (t0 + 4024);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng4)));
    memset(t33, 0, 8);
    t36 = (t34 + 4);
    t38 = (t35 + 4);
    t44 = *((unsigned int *)t34);
    t45 = *((unsigned int *)t35);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t36);
    t48 = *((unsigned int *)t38);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t36);
    t52 = *((unsigned int *)t38);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB105;

LAB102:    if (t53 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t33) = 1;

LAB105:    t40 = (t33 + 4);
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t33);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB100;

LAB104:    t39 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(91, ng0);

LAB109:    xsi_set_current_line(92, ng0);
    t42 = (t0 + 3384);
    t43 = (t42 + 56U);
    t56 = *((char **)t43);
    t57 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 18, t56, 18, t57, 18);
    t63 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t63, t37, 0, 0, 18, 0LL);
    goto LAB108;

LAB111:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB113;

LAB112:    *((unsigned int *)t8) = 1;
    goto LAB113;

LAB115:    xsi_set_current_line(97, ng0);

LAB118:    xsi_set_current_line(98, ng0);
    t30 = (t0 + 3384);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 18, t34, 18, t35, 32);
    t36 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t36, t33, 0, 0, 18, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 7, t6, 32);
    t7 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 7, 0LL);
    goto LAB117;

}

static void Cont_111_1(char *t0)
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 262143U;
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
    xsi_driver_vfirst_trans(t5, 0, 17);
    t18 = (t0 + 5528);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001219807129_2201598233_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Cont_111_1};
	xsi_register_didat("work_m_00000000001219807129_2201598233", "isim/s6base_tb_isim_beh.exe.sim/work/m_00000000001219807129_2201598233.didat");
	xsi_register_executes(pe);
}
