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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002521122981_2321629652_init();
    work_m_00000000004068625085_2228661265_init();
    work_m_00000000001788508379_0665839740_init();
    work_m_00000000000293359187_2193037639_init();
    work_m_00000000003618510114_1941420602_init();
    work_m_00000000003244222897_1735599506_init();
    work_m_00000000001777749253_0033790326_init();
    work_m_00000000002500313293_0247666570_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000002500313293_0247666570");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
