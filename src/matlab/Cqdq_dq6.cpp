//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Cqdq_dq6.cpp
//
// Code generation for function 'Cqdq_dq6'
//

// Include files
#include "matlab/Cqdq_dq6.h"

// Function Declarations
static double ft_3(const double ct[480]);

// Function Definitions
static double ft_3(const double ct[480])
{
  double ab_out1_tmp;
  double ac_out1_tmp;
  double b_out1_tmp;
  double b_out1_tmp_tmp;
  double b_t1332_tmp;
  double b_t1332_tmp_tmp;
  double b_t1338_tmp;
  double b_t1741_tmp;
  double b_t1771_tmp;
  double bb_out1_tmp;
  double c_out1_tmp;
  double c_out1_tmp_tmp;
  double c_t1332_tmp;
  double cb_out1_tmp;
  double d_out1_tmp;
  double d_out1_tmp_tmp;
  double db_out1_tmp;
  double e_out1_tmp;
  double e_out1_tmp_tmp;
  double eb_out1_tmp;
  double f_out1_tmp;
  double f_out1_tmp_tmp;
  double fb_out1_tmp;
  double g_out1_tmp;
  double gb_out1_tmp;
  double h_out1_tmp;
  double hb_out1_tmp;
  double i_out1_tmp;
  double ib_out1_tmp;
  double j_out1_tmp;
  double jb_out1_tmp;
  double k_out1_tmp;
  double kb_out1_tmp;
  double l_out1_tmp;
  double lb_out1_tmp;
  double m_out1_tmp;
  double mb_out1_tmp;
  double n_out1_tmp;
  double nb_out1_tmp;
  double o_out1_tmp;
  double ob_out1_tmp;
  double out1_tmp;
  double out1_tmp_tmp;
  double p_out1_tmp;
  double pb_out1_tmp;
  double q_out1_tmp;
  double qb_out1_tmp;
  double r_out1_tmp;
  double rb_out1_tmp;
  double s_out1_tmp;
  double sb_out1_tmp;
  double t1166;
  double t1242;
  double t1251;
  double t1256;
  double t1269;
  double t1269_tmp;
  double t1332;
  double t1332_tmp;
  double t1332_tmp_tmp;
  double t1335;
  double t1338_tmp;
  double t1340;
  double t1346_tmp;
  double t1520_tmp;
  double t1524;
  double t1525;
  double t1536;
  double t1553;
  double t1562;
  double t1563_tmp;
  double t1570;
  double t1571;
  double t1576;
  double t1576_tmp;
  double t1577;
  double t1577_tmp;
  double t1599;
  double t1600;
  double t1603;
  double t1604;
  double t1605;
  double t1606;
  double t1607;
  double t1608;
  double t1609;
  double t1610;
  double t1611;
  double t1613;
  double t1614;
  double t1618;
  double t1624;
  double t1626;
  double t1632_tmp;
  double t1638_tmp;
  double t1650;
  double t1650_tmp;
  double t1651;
  double t1657;
  double t1658;
  double t1659;
  double t1660;
  double t1661;
  double t1663;
  double t1663_tmp;
  double t1667;
  double t1667_tmp;
  double t1671;
  double t1673;
  double t1683_tmp;
  double t1691;
  double t1695;
  double t1698;
  double t1701;
  double t1702;
  double t1707;
  double t1708;
  double t1709;
  double t1710;
  double t1717;
  double t1726;
  double t1728;
  double t1730;
  double t1732;
  double t1741;
  double t1741_tmp;
  double t1744;
  double t1745;
  double t1746;
  double t1747;
  double t1750_tmp;
  double t1752_tmp;
  double t1755;
  double t1757_tmp;
  double t1763;
  double t1765;
  double t1765_tmp;
  double t1768;
  double t1771;
  double t1771_tmp;
  double t1773;
  double t_out1_tmp;
  double tb_out1_tmp;
  double u_out1_tmp;
  double ub_out1_tmp;
  double v_out1_tmp;
  double vb_out1_tmp;
  double w_out1_tmp;
  double wb_out1_tmp;
  double x_out1_tmp;
  double xb_out1_tmp;
  double y_out1_tmp;
  double yb_out1_tmp;
  t1242 = ct[23] * ct[48];
  t1251 = ct[37] * ct[153];
  t1332_tmp_tmp = ct[85] - ct[239];
  b_t1332_tmp_tmp = ct[418] * t1332_tmp_tmp;
  t1332_tmp =
      ((ct[365] * 0.000281 + ct[368]) - ct[371]) + b_t1332_tmp_tmp * 0.011402;
  b_t1332_tmp = ct[400] + ct[443] * t1332_tmp;
  c_t1332_tmp = ct[55] * b_t1332_tmp;
  t1332 = c_t1332_tmp * -0.5;
  t1335 = ct[31] * ct[54] / 2.0;
  t1338_tmp = ct[408] + ct[187] * t1332_tmp;
  b_t1338_tmp = ct[54] * t1338_tmp;
  t1340 = ct[31] * ct[59] / 2.0;
  t1346_tmp = ct[59] * t1338_tmp;
  t1520_tmp = ct[54] * ct[211];
  t1332_tmp = ct[59] * ct[211];
  t1524 = t1332_tmp / 2.0;
  t1525 = t1332_tmp / 4.0;
  t1536 = ct[329] / 2.0;
  t1553 = ct[150] + ct[151];
  t1570 = ct[171] + ct[176];
  t1571 = ct[173] + ct[178];
  t1599 = (ct[119] + ct[159]) + ct[162];
  t1613 = (ct[137] + ct[194]) + ct[207];
  t1614 = (ct[140] + ct[193]) + ct[205];
  t1632_tmp = ct[37] * ct[382];
  t1650_tmp = ((((ct[462] + ct[472]) - ct[473]) - ct[476]) + ct[13]) +
              ct[458] * (ct[138] - ct[362]);
  t1650 = -ct[187] * (ct[332] + ct[364] * t1650_tmp);
  t1651 = ct[226] * ct[354];
  t1657 = t1632_tmp * ct[356];
  t1710 = ((((ct[142] + ct[197]) + ct[203]) + ct[272]) + ct[320]) + ct[322];
  t1166 = ct[393] * ct[443] * ct[52] / 2.0;
  t1256 = t1251 / 2.0;
  t1269_tmp = ct[23] * ct[52];
  t1269 = t1269_tmp / 2.0;
  t1332_tmp = ct[37] * ct[381];
  t1562 = t1332_tmp * t1553;
  t1563_tmp = ct[382] * ct[384];
  t1576_tmp = ct[37] * ct[435];
  t1576 = t1576_tmp * t1571;
  t1577_tmp = ct[37] * ct[437];
  t1577 = t1577_tmp * t1570;
  t1600 = t1332_tmp * t1599;
  t1603 = ct[250] * ct[443] + ct[253];
  t1605 = ct[251] * ct[443] + ct[254];
  t1607 = (ct[130] + -ct[185]) + ct[191];
  t1608 = (ct[131] + -ct[184]) + ct[190];
  t1624 = t1577_tmp * t1614;
  t1626 = t1576_tmp * t1613;
  t1638_tmp = ((((ct[414] + ct[427]) - ct[429]) - ct[6]) + ct[7]) +
              ct[456] * t1332_tmp_tmp;
  t1658 = (ct[218] + ct[250] * ct[435]) + ct[259];
  t1660 = (ct[219] + ct[251] * ct[435]) + ct[260];
  t1332_tmp_tmp = ((-ct[375] + ct[378]) + ct[392]) + b_t1332_tmp_tmp * 0.000369;
  t1332_tmp =
      ((ct[365] * 0.000587 + ct[373]) - ct[379]) + b_t1332_tmp_tmp * 3.0E-6;
  t1663_tmp =
      (ct[220] - ct[187] * ct[250]) +
      ct[226] * ((((ct[421] - ct[15]) + ct[18]) + ct[385] * t1332_tmp_tmp) +
                 ct[383] * t1332_tmp);
  t1663 = -ct[443] * t1663_tmp;
  t1667_tmp =
      (ct[222] - ct[187] * ct[251]) +
      ct[226] * ((((ct[420] - ct[17]) + ct[19]) + ct[387] * t1332_tmp_tmp) +
                 ct[386] * t1332_tmp);
  t1667 = -ct[364] * t1667_tmp;
  t1671 = ct[187] * t1663_tmp;
  t1673 = ct[226] * t1667_tmp;
  t1683_tmp = (ct[265] - ct[187] * ct[298]) + ct[226] * t1638_tmp;
  t1332_tmp_tmp = ((ct[69] + ct[71]) + ct[90]) + ct[94];
  t1691 = ((t1332_tmp_tmp + ct[215]) + ct[227]) + ct[228];
  t1698 =
      (((((ct[70] + ct[72]) + ct[91]) + ct[95]) + ct[216]) + ct[240]) + ct[241];
  t1701 = (((ct[137] + -ct[198]) + ct[202]) + ct[226] * ct[342]) + ct[345];
  t1702 = (((ct[140] + ct[200]) + ct[206]) + ct[187] * ct[342]) + ct[346];
  t1707 = ((((ct[118] + -ct[160]) + ct[163]) + ct[255]) + ct[291]) + ct[293];
  t1708 =
      (((((ct[78] + ct[82]) + ct[97]) + ct[99]) + ct[249]) + ct[279]) + ct[284];
  t1709 = ((((ct[141] + ct[199]) + ct[204]) + ct[273]) + ct[319]) + ct[321];
  t1604 = ct[443] * t1603;
  t1606 = ct[364] * t1605;
  t1609 = ct[435] * t1603;
  t1610 = ct[187] * t1603;
  t1611 = ct[437] * t1605;
  t1618 = ct[226] * t1605;
  t1659 = ct[443] * t1658;
  t1661 = ct[364] * t1660;
  t1332_tmp = ((ct[67] + ct[68]) + ct[52] * ct[398] / 2.0) + ct[106];
  t1695 = ((t1332_tmp + ct[212]) + ct[223]) + ct[225];
  t1717 = ((((ct[116] + -t1251) + ct[157]) + ct[282]) + ct[329]) + ct[330];
  t1726 = ((((ct[133] + ct[37] * -ct[184]) + ct[192]) + ct[303]) + -ct[338]) +
          ct[341];
  t1728 = ((((ct[135] + -(ct[37] * ct[185])) + ct[195]) + ct[305]) + ct[339]) +
          ct[340];
  t1744 =
      ((((((((ct[116] + -ct[122]) + ct[124]) + ct[143]) + ct[144]) + ct[242]) +
         ct[244]) +
        ct[282]) +
       ct[308]) +
      ct[309];
  t1745 =
      ((((((((ct[116] + -ct[126]) + ct[128]) + ct[143]) + ct[144]) + ct[242]) +
         ct[244]) +
        ct[282]) +
       ct[308]) +
      ct[309];
  t1603 = t1632_tmp * t1717;
  t1730 = ct[443] * t1726 / 2.0;
  t1732 = ct[364] * t1728 / 2.0;
  t1605 = ct[187] * t1726;
  t1251 = ct[226] * t1728;
  t1741_tmp = ct[54] * b_t1332_tmp;
  b_t1741_tmp = ct[59] * b_t1332_tmp;
  t1741 = ((((((ct[32] + ct[33]) + ct[36]) + ct[39]) + t1741_tmp / 2.0) +
            b_t1741_tmp / 2.0) +
           t1604) +
          t1606;
  t1746 =
      ((((((((ct[120] + -ct[123]) + ct[125]) + -t1256) + ct[161]) + ct[243]) +
         ct[245]) +
        ct[283]) +
       t1536) +
      ct[331];
  t1747 =
      ((((((((ct[120] + -ct[127]) + ct[129]) + -t1256) + ct[161]) + ct[243]) +
         ct[245]) +
        ct[283]) +
       t1536) +
      ct[331];
  t1755 = ((ct[187] * t1570 + -(ct[226] * t1571)) +
           ct[226] * (((-ct[170] + ct[177]) + ct[342] * ct[364]) + ct[344])) +
          -ct[187] * (((ct[172] - ct[179]) + ct[342] * ct[443]) - ct[343]);
  t1752_tmp =
      ((((ct[65] + ct[66]) + -ct[73]) + ct[76]) + ct[180]) + t1346_tmp / 2.0;
  t1757_tmp = ct[55] * t1338_tmp;
  t1763 = ((((ct[348] + -ct[347]) + ct[359]) + ct[360]) +
           ct[5] * (t1332_tmp_tmp + ct[356]) / 2.0) +
          ct[4] * (t1332_tmp + ct[355]) / 2.0;
  t1750_tmp =
      ((((ct[61] + ct[64]) + -ct[73]) + ct[76]) + ct[180]) + b_t1338_tmp / 2.0;
  b_t1332_tmp = ((ct[426] - ct[430]) - ct[445]) + ct[461];
  t1256 = ((((ct[367] + ct[369]) + ct[377]) + ct[380]) + ct[388]) + ct[389];
  t1765_tmp = ct[466] + ct[187] * t1256;
  t1765 = ct[5] *
          ((((((((-ct[48] * b_t1332_tmp + ct[278]) + -ct[211] * t1765_tmp) +
                t1600) +
               t1624) +
              -t1626) +
             t1603) +
            t1605) +
           t1251) /
          2.0;
  t1771_tmp = ct[12] - ct[352];
  t1332_tmp = ct[52] * b_t1332_tmp;
  t1332_tmp_tmp = ct[48] * (((ct[446] - ct[447]) - ct[459]) + ct[474]);
  b_t1332_tmp_tmp = ct[55] * ct[211];
  t1536 = ((((-ct[452] + ct[464]) - ct[468]) + ct[10]) +
           (ct[410] + ct[186] * (ct[406] - ct[415])) *
               (((((-ct[366] + ct[370]) + ct[374]) + ct[379]) + ct[390]) +
                ct[391])) +
          ct[439] * t1771_tmp;
  b_t1771_tmp = (-ct[153] + ct[155]) +
                ct[381] * ((-ct[438] + ct[449]) + ct[424] * t1771_tmp);
  t1771 =
      ct[4] *
      (((((((((((t1332_tmp / 2.0 + ct[285]) + t1332_tmp_tmp * -0.5) + ct[296]) +
              b_t1332_tmp_tmp / 2.0) +
             ct[323]) +
            -ct[37] * ct[381] * b_t1771_tmp) +
           t1576_tmp * t1608) +
          -(t1577_tmp * t1607)) +
         -ct[37] * ct[382] *
             (((((ct[114] - ct[152]) + ct[154]) + ct[280]) - ct[327]) +
              ct[437] * t1536)) +
        ct[187] * (((((ct[134] + ct[182]) - ct[188]) - ct[300]) - ct[334]) +
                   ct[437] * t1650_tmp)) +
       ct[226] *
           (((((ct[132] + ct[183]) - ct[189]) - ct[301]) - ct[336]) +
            ct[435] * (((((ct[460] + ct[471]) - ct[475]) - ct[479]) + ct[11]) +
                       ct[457] * (ct[164] - ct[363])))) /
      2.0;
  t1768 = ct[5] * ((((((((ct[48] * b_t1332_tmp * -0.5 + ct[278] / 2.0) +
                         ct[211] * t1765_tmp * -0.5) +
                        t1600 / 2.0) +
                       t1624 / 2.0) +
                      -(t1626 / 2.0)) +
                     t1603 / 2.0) +
                    t1605 / 2.0) +
                   t1251 / 2.0);
  t1773 =
      ct[4] * (((((((((((t1332_tmp / 4.0 + ct[286]) + t1332_tmp_tmp * -0.25) +
                       ct[297]) +
                      b_t1332_tmp_tmp / 4.0) +
                     ct[324]) +
                    ct[382] * t1599 / 2.0) +
                   ct[401] * t1613 / 2.0) +
                  -(ct[403] * t1614 / 2.0)) +
                 -(ct[381] * t1717 / 2.0)) +
                ct[435] * t1726 / 2.0) +
               -(ct[437] * t1728 / 2.0));
  out1_tmp = t1604 + t1606;
  b_out1_tmp = ct[246] * ct[393];
  c_out1_tmp = ct[306] * ct[393];
  d_out1_tmp = ct[38] - ct[294];
  out1_tmp_tmp =
      ((((-ct[425] + ct[428]) + ct[478]) + ct[9]) + ct[397] * d_out1_tmp) +
      ct[418] * ct[458] * d_out1_tmp;
  e_out1_tmp = (-ct[267] + ct[310]) + ct[226] * out1_tmp_tmp;
  f_out1_tmp = ((ct[80] + ct[84]) + ct[364] * t1683_tmp * -0.5) +
               ct[443] * e_out1_tmp / 2.0;
  g_out1_tmp = ct[28] * t1765_tmp / 4.0;
  h_out1_tmp = ct[25] * ct[49];
  i_out1_tmp = ct[26] * ct[53];
  j_out1_tmp = ct[27] * ct[52];
  k_out1_tmp = ct[40] * ct[55];
  l_out1_tmp = ct[48] * (ct[395] - ct[407]);
  m_out1_tmp = ct[34] * t1765_tmp;
  n_out1_tmp = ct[187] * e_out1_tmp;
  o_out1_tmp = ct[26] * ct[49];
  p_out1_tmp = ct[27] * ct[48];
  q_out1_tmp = ct[40] * t1765_tmp;
  r_out1_tmp = t1632_tmp * ct[361];
  s_out1_tmp = ct[40] * ct[54];
  b_out1_tmp_tmp = ct[364] * ct[434];
  t_out1_tmp = b_out1_tmp_tmp * ct[26];
  c_out1_tmp_tmp = ct[434] * ct[443];
  u_out1_tmp = c_out1_tmp_tmp * ct[27];
  v_out1_tmp = ct[40] * ct[59];
  w_out1_tmp = ((((ct[79] + ct[83]) + ct[201]) + -(t1632_tmp * ct[353])) +
                ct[226] * (ct[298] * ct[443] - ct[364] * t1638_tmp)) +
               ct[187] * (ct[295] + ct[304]);
  d_out1_tmp_tmp = ct[364] * ct[442];
  x_out1_tmp = d_out1_tmp_tmp * ct[26];
  e_out1_tmp_tmp = ct[442] * ct[443];
  y_out1_tmp = e_out1_tmp_tmp * ct[27];
  ab_out1_tmp =
      (((((-ct[77] - ct[96]) - ct[98]) + ct[248]) + ct[268]) + ct[270]) +
      ct[27] *
          ((((-ct[372] + ct[451]) + ct[20]) + ct[455]) + ct[364] * ct[376]) /
          2.0;
  bb_out1_tmp = ct[108] + ct[110];
  b_t1332_tmp_tmp = ct[50] * t1765_tmp;
  cb_out1_tmp = b_t1332_tmp_tmp / 4.0;
  db_out1_tmp = c_out1_tmp_tmp * b_t1332_tmp;
  eb_out1_tmp = ct[107] + ct[109];
  fb_out1_tmp = b_t1332_tmp_tmp / 2.0;
  gb_out1_tmp = e_out1_tmp_tmp * b_t1332_tmp;
  hb_out1_tmp = t1632_tmp * (ct[325] + ct[364] * t1536);
  ib_out1_tmp = (((ct[74] + ct[75]) - ct[181]) + ct[443] * t1663_tmp / 2.0) +
                ct[364] * t1667_tmp / 2.0;
  jb_out1_tmp = ct[187] * t1614;
  kb_out1_tmp = ct[226] * t1613;
  lb_out1_tmp = ct[187] * t1702;
  mb_out1_tmp = ct[226] * t1701;
  nb_out1_tmp = ((ct[364] * t1613 / 2.0 - ct[443] * t1614 / 2.0) -
                 ct[364] * t1701 / 2.0) +
                ct[443] * t1702 / 2.0;
  d_out1_tmp = ((ct[14] + ct[16]) - ct[174]) - ct[454] * d_out1_tmp;
  ob_out1_tmp = ct[356] * ct[381];
  pb_out1_tmp = ct[435] * t1663_tmp;
  qb_out1_tmp = ct[31] * t1765_tmp;
  rb_out1_tmp = c_t1332_tmp / 2.0;
  b_t1332_tmp_tmp = ((ct[402] + ct[412]) - ct[431]) + t1563_tmp * t1256;
  t1332_tmp = ct[8] * b_t1332_tmp_tmp;
  sb_out1_tmp =
      ((((((((ct[101] + ct[103]) + ct[118] / 2.0) - ct[160] / 2.0) - ct[165]) -
          ct[230]) +
         ct[257]) +
        ct[291] / 2.0) +
       ct[293] / 2.0) +
      t1332_tmp / 4.0;
  tb_out1_tmp = ((ct[416] - ct[417]) + ct[465]) + ct[217] * t1256;
  ub_out1_tmp = ((ct[399] + ct[411]) - ct[432]) - ct[463];
  t1332_tmp_tmp = ct[35] * t1765_tmp;
  vb_out1_tmp =
      (((-ct[87] - ct[89]) + ct[443] * t1709 / 2.0) + ct[364] * t1710 / 2.0) +
      t1332_tmp_tmp / 4.0;
  f_out1_tmp_tmp =
      ((((ct[409] + ct[422]) + ct[423]) - ct[433]) - ct[450]) - ct[453];
  c_t1332_tmp =
      ((((((((ct[100] + ct[102]) + ct[118]) - ct[145]) - ct[146]) - ct[229]) +
         ct[255]) +
        ct[274]) +
       ct[226] * f_out1_tmp_tmp) +
      t1332_tmp / 2.0;
  wb_out1_tmp = ct[54] * tb_out1_tmp;
  xb_out1_tmp = c_out1_tmp_tmp * ub_out1_tmp;
  yb_out1_tmp = b_out1_tmp_tmp * b_t1332_tmp_tmp;
  ac_out1_tmp = ct[59] * tb_out1_tmp;
  t1728 = (((((((-ct[86] - ct[88]) - t1563_tmp * t1553) + ct[196] * t1570) +
              ct[217] * t1571) -
             t1632_tmp * (ct[288] + ct[290])) +
            ct[187] * (ct[313] + ct[317])) +
           ct[226] * (ct[314] + ct[318])) +
          t1332_tmp_tmp / 2.0;
  t1604 = e_out1_tmp_tmp * ub_out1_tmp;
  t1606 = d_out1_tmp_tmp * b_t1332_tmp_tmp;
  t1650_tmp = t1765_tmp * tb_out1_tmp;
  t1576_tmp = ct[196] * t1614;
  t1577_tmp = ct[217] * t1613;
  t1600 = ct[187] * t1709;
  t1624 = ct[226] * t1710;
  t1626 = ct[49] * b_t1332_tmp_tmp;
  t1663_tmp = ct[48] * ub_out1_tmp;
  t1256 = t1563_tmp * t1599;
  t1338_tmp = t1632_tmp * t1707;
  t1717 = ct[29] * ct[49];
  t1726 = ct[30] * ct[48];
  t1251 = ct[53] * b_t1332_tmp_tmp;
  b_t1332_tmp = ct[41] * t1765_tmp;
  ub_out1_tmp *= ct[52];
  tb_out1_tmp *= ct[55];
  t1536 = (((((bb_out1_tmp - ct[236]) - t1520_tmp / 4.0) + t1730) + t1732) +
           cb_out1_tmp) +
          db_out1_tmp / 4.0;
  db_out1_tmp =
      ct[3] *
      ((((((((((eb_out1_tmp - ct[235]) - t1520_tmp / 2.0) + t1562) - t1576) +
            t1577) +
           t1650) +
          t1651) +
         fb_out1_tmp) +
        db_out1_tmp / 2.0) +
       hb_out1_tmp);
  t1605 = gb_out1_tmp / 2.0;
  t1332_tmp_tmp = ct[51] * t1765_tmp;
  gb_out1_tmp /= 4.0;
  b_t1332_tmp_tmp = ct[364] * ct[440] * ct[49];
  t1603 = ct[440] * ct[443] * ct[48];
  t1332_tmp =
      ((((ct[1] * t1691 / 2.0 + -(ct[0] * t1691 / 2.0)) +
         -(ct[3] * (((t1750_tmp + ct[351]) + t1610) + t1618) / 2.0)) +
        ct[2] * (((t1752_tmp + ct[351]) + t1610) + t1618) / 2.0) +
       ct[5] * (((((t1242 + ct[149]) + ct[210]) + t1657) + t1671) + t1673) /
           2.0) +
      ct[4] *
          ((((((((-ct[147] + ct[148]) + t1269) + ct[167]) + ct[208]) +
              t1757_tmp * -0.5) +
             t1632_tmp * ct[355]) +
            ct[187] * t1658) +
           ct[226] * t1660) /
          2.0;
  return (((ct[0] * t1763 - ct[1] * t1763) +
           ct[3] * (((((ct[3] *
                            (((out1_tmp + t1741_tmp) + b_out1_tmp * ct[434]) +
                             c_out1_tmp * ct[434]) /
                            2.0 +
                        ct[0] * ct[357] / 2.0) -
                       ct[1] * ct[357] / 2.0) -
                      ct[2] * t1741 / 2.0) +
                     ct[5] * ((t1750_tmp + t1663) + t1667) / 2.0) -
                    ct[4] *
                        (((((((ct[56] + ct[58]) + t1166) + ct[93]) + t1332) +
                           -t1335) +
                          t1659) +
                         t1661) /
                        2.0)) +
          ((ct[2] *
                (((((ct[2] *
                         (((out1_tmp + b_t1741_tmp) + b_out1_tmp * ct[442]) +
                          c_out1_tmp * ct[442]) /
                         2.0 -
                     ct[0] * ct[358] / 2.0) +
                    ct[1] * ct[358] / 2.0) -
                   ct[3] * t1741 / 2.0) -
                  ct[5] * ((t1752_tmp + t1663) + t1667) / 2.0) +
                 ct[4] *
                     (((((((ct[60] + ct[63]) + t1166) + ct[93]) + t1332) +
                        -t1340) +
                       t1659) +
                      t1661) /
                     2.0) -
            ct[4] *
                (((((ct[4] * ((((((((ct[437] * t1683_tmp / 2.0 +
                                     ct[435] * e_out1_tmp / 2.0) +
                                    ct[361] * ct[381] / 2.0) -
                                   h_out1_tmp / 4.0) +
                                  i_out1_tmp / 4.0) -
                                 j_out1_tmp / 4.0) -
                                k_out1_tmp / 4.0) +
                               l_out1_tmp / 4.0) +
                              m_out1_tmp / 4.0) +
                     (((-ct[3] *
                            ((((f_out1_tmp + s_out1_tmp / 4.0) + g_out1_tmp) -
                              t_out1_tmp / 4.0) -
                             u_out1_tmp / 4.0) +
                        ct[2] *
                            ((((f_out1_tmp + v_out1_tmp / 4.0) + g_out1_tmp) -
                              x_out1_tmp / 4.0) -
                             y_out1_tmp / 4.0)) +
                       ct[0] * t1708) -
                      ct[1] * t1708)) +
                    ct[4] *
                        ((((((((h_out1_tmp * -0.5 + i_out1_tmp / 2.0) -
                               j_out1_tmp / 2.0) -
                              k_out1_tmp / 2.0) +
                             ct[226] *
                                 ((ct[263] * ct[381] + ct[298] * ct[435]) +
                                  ct[437] * t1638_tmp)) +
                            l_out1_tmp / 2.0) +
                           ct[187] * ((ct[264] * ct[381] + ct[302] * ct[435]) -
                                      ct[437] * out1_tmp_tmp)) +
                          m_out1_tmp / 2.0) +
                         t1632_tmp *
                             ((ct[381] * (((((ct[396] - ct[405]) - ct[436]) -
                                            ct[441]) +
                                           ct[444]) +
                                          ct[394] * t1771_tmp) +
                               ct[435] * (((((ct[413] - ct[419]) - ct[467]) +
                                            ct[469]) -
                                           ct[470]) +
                                          ct[404] * t1771_tmp)) +
                              ct[277] * ct[437])) /
                        2.0) +
                   ct[5] *
                       (((((-ct[226] * t1683_tmp + n_out1_tmp) + o_out1_tmp) +
                          p_out1_tmp) +
                         q_out1_tmp) -
                        r_out1_tmp) *
                       -0.5) +
                  ((-ct[5] *
                        (((((ct[226] * t1683_tmp * -0.5 + n_out1_tmp / 2.0) +
                            o_out1_tmp / 2.0) +
                           p_out1_tmp / 2.0) +
                          q_out1_tmp / 2.0) -
                         r_out1_tmp / 2.0) -
                    ct[3] *
                        (((w_out1_tmp + s_out1_tmp / 2.0) - t_out1_tmp / 2.0) -
                         u_out1_tmp / 2.0) /
                        2.0) +
                   ct[2] *
                       (((w_out1_tmp + v_out1_tmp / 2.0) - x_out1_tmp / 2.0) -
                        y_out1_tmp / 2.0) /
                       2.0)) +
                 (ct[0] * ab_out1_tmp * -0.5 + ct[1] * ab_out1_tmp / 2.0))) +
           ct[2] *
               (((((((((((t1765 + t1768) - t1771) - t1773) -
                       ct[0] * t1744 / 2.0) +
                      ct[1] * t1744 / 2.0) -
                     ct[0] * t1746) +
                    ct[1] * t1746) +
                   ct[3] * t1536) -
                  ct[2] *
                      ((((((bb_out1_tmp - ct[238]) - t1525) + t1730) + t1732) +
                        cb_out1_tmp) +
                       gb_out1_tmp)) +
                 db_out1_tmp / 2.0) +
                ct[2] *
                    ((((((((((eb_out1_tmp - ct[237]) - t1524) + t1562) -
                           t1576) +
                          t1577) +
                         t1650) +
                        t1651) +
                       fb_out1_tmp) +
                      t1605) +
                     hb_out1_tmp) *
                    -0.5))) +
         (((((ct[5] *
                  ((((((t1332_tmp + ct[5] * (((((t1242 / 2.0 + ct[149] / 2.0) -
                                                ct[209] / 2.0) +
                                               t1657 / 2.0) +
                                              t1671 / 2.0) +
                                             t1673 / 2.0)) -
                       ct[0] * t1698) +
                      ct[1] * t1698) -
                     ct[4] *
                         (((((((ob_out1_tmp * -0.5 + ct[21] * ct[48] / 4.0) -
                               ct[22] * ct[49] / 4.0) -
                              t1269_tmp / 4.0) +
                             ct[24] * ct[53] / 4.0) +
                            pb_out1_tmp / 2.0) +
                           ct[437] * t1667_tmp * -0.5) +
                          (t1757_tmp / 4.0 + qb_out1_tmp / 4.0))) +
                    ct[3] * (ib_out1_tmp + ((b_t1338_tmp * -0.25 -
                                             b_out1_tmp_tmp * ct[24] / 4.0) -
                                            c_out1_tmp_tmp * ct[23] / 4.0))) -
                   ct[2] * (ib_out1_tmp + ((t1346_tmp * -0.25 -
                                            d_out1_tmp_tmp * ct[24] / 4.0) -
                                           e_out1_tmp_tmp * ct[23] / 4.0))) +
              ct[0] *
                  (((((((ct[2] * t1755 / 2.0 - ct[3] * t1755 / 2.0) +
                        ct[4] *
                            (((ct[435] * t1614 / 2.0 + ct[437] * t1613 / 2.0) -
                              ct[435] * t1702 / 2.0) -
                             ct[437] * t1701 / 2.0)) -
                       ct[5] *
                           (((jb_out1_tmp - kb_out1_tmp) - lb_out1_tmp) +
                            mb_out1_tmp) /
                           2.0) -
                      ct[5] * (((jb_out1_tmp / 2.0 - kb_out1_tmp / 2.0) -
                                lb_out1_tmp / 2.0) +
                               mb_out1_tmp / 2.0)) -
                     ct[2] * nb_out1_tmp) +
                    ct[3] * nb_out1_tmp) +
                   ct[4] *
                       (((ct[226] * ((((-ct[131] + ct[168] * ct[437]) +
                                       ct[174] * ct[435]) -
                                      ct[342] * ct[437]) +
                                     ct[435] * d_out1_tmp) -
                          ct[187] * t1607) +
                         ct[226] * t1608) +
                        ct[187] * ((((ct[130] + ct[169] * ct[437]) +
                                     ct[175] * ct[435]) -
                                    ct[342] * ct[435]) -
                                   ct[437] * d_out1_tmp)) /
                       2.0)) +
             ct[4] *
                 (((((ct[0] * t1695 / 2.0 - ct[1] * t1695 / 2.0) +
                     ct[5] *
                         (((((((ct[147] - ct[148]) - t1269) + ct[166]) -
                             ob_out1_tmp) +
                            pb_out1_tmp) +
                           -ct[437] * t1667_tmp) +
                          (t1757_tmp / 2.0 + qb_out1_tmp / 2.0)) /
                         2.0) +
                    ct[4] *
                        (((((-ct[381] * ct[355] + ct[435] * t1658) -
                            ct[437] * t1660) +
                           ct[21] * ct[52]) +
                          ct[22] * ct[53]) +
                         ct[31] * ct[55]) /
                        2.0) +
                   ct[3] *
                       ((((((((-ct[56] + ct[57]) - t1166) + ct[92]) + t1335) -
                           ct[350]) -
                          t1609) +
                         t1611) +
                        rb_out1_tmp) /
                       2.0) +
                  ct[2] *
                      ((((((((-ct[60] + ct[62]) - t1166) + ct[92]) + t1340) -
                          ct[350]) -
                         t1609) +
                        t1611) +
                       rb_out1_tmp) *
                      -0.5)) -
            ct[3] *
                ((((((((ct[0] * sb_out1_tmp - ct[1] * sb_out1_tmp) +
                       ct[4] * ((((((((ct[381] * t1707 * -0.5 -
                                       ct[435] * t1709 / 2.0) +
                                      ct[437] * t1710 / 2.0) -
                                     t1717 / 4.0) +
                                    t1726 / 4.0) +
                                   t1251 / 4.0) +
                                  b_t1332_tmp / 4.0) -
                                 ub_out1_tmp / 4.0) +
                                tb_out1_tmp / 4.0)) +
                      (ct[3] * (((vb_out1_tmp + wb_out1_tmp / 4.0) +
                                 xb_out1_tmp / 4.0) +
                                yb_out1_tmp / 4.0) -
                       ct[2] *
                           (((vb_out1_tmp + ac_out1_tmp / 4.0) + t1604 / 4.0) +
                            t1606 / 4.0))) +
                     (ct[0] * c_t1332_tmp / 2.0 - ct[1] * c_t1332_tmp / 2.0)) +
                    ct[3] *
                        (((t1728 + wb_out1_tmp / 2.0) + xb_out1_tmp / 2.0) +
                         yb_out1_tmp / 2.0) /
                        2.0) +
                   (ct[2] *
                        (((t1728 + ac_out1_tmp / 2.0) + t1604 / 2.0) +
                         t1606 / 2.0) *
                        -0.5 +
                    ct[5] *
                        ((((((((t1650_tmp + t1576_tmp) + t1577_tmp) + t1600) +
                             t1624) -
                            t1626) -
                           t1663_tmp) -
                          t1256) -
                         t1338_tmp) /
                        2.0)) +
                  ct[5] * ((((((((t1650_tmp / 2.0 + t1576_tmp / 2.0) +
                                 t1577_tmp / 2.0) +
                                t1600 / 2.0) +
                               t1624 / 2.0) -
                              t1626 / 2.0) -
                             t1663_tmp / 2.0) -
                            t1256 / 2.0) -
                           t1338_tmp / 2.0)) +
                 ct[4] *
                     (((((((((((ct[187] *
                                    ((ct[271] * ct[381] + ct[311] * ct[435]) -
                                     ct[315] * ct[437]) -
                                ct[196] * t1607) -
                               ct[217] * t1608) +
                              t1717 / 2.0) -
                             t1726 / 2.0) -
                            t1251 / 2.0) -
                           b_t1332_tmp / 2.0) +
                          ub_out1_tmp / 2.0) +
                         ct[226] *
                             ((ct[381] * f_out1_tmp_tmp + ct[312] * ct[435]) -
                              ct[316] * ct[437])) -
                        tb_out1_tmp / 2.0) +
                       t1632_tmp * ((ct[252] * ct[381] - ct[287] * ct[435]) +
                                    ct[289] * ct[437])) +
                      t1563_tmp * b_t1771_tmp) *
                     -0.5)) +
           ct[1] *
               (((((((((((-ct[3] * t1536 + db_out1_tmp * -0.5) + -t1765) +
                        -t1768) +
                       t1771) +
                      t1773) +
                     ct[2] *
                         (((((((((((-ct[237] - t1524) + t1562) - t1576) +
                                 t1577) +
                                t1650) +
                               t1651) +
                              t1332_tmp_tmp / 2.0) +
                             t1605) +
                            hb_out1_tmp) +
                           b_t1332_tmp_tmp / 2.0) +
                          t1603 / 2.0) /
                         2.0) +
                    ct[0] * t1745 / 2.0) -
                   ct[1] * t1745 / 2.0) +
                  ct[0] * t1747) -
                 ct[1] * t1747) +
                ct[2] * (((((((-ct[238] - t1525) + t1730) + t1732) +
                            t1332_tmp_tmp / 4.0) +
                           gb_out1_tmp) +
                          b_t1332_tmp_tmp / 4.0) +
                         t1603 / 4.0))) -
          ct[5] * t1332_tmp);
}

double c_ft_1(const double ct[336])
{
  double b_ct[480];
  double b_ct_idx_51_tmp;
  double b_ct_idx_62_tmp;
  double b_t1110_tmp;
  double b_t1111_tmp;
  double c_ct_idx_62_tmp;
  double c_t1111_tmp;
  double ct_idx_14;
  double ct_idx_143;
  double ct_idx_14_tmp;
  double ct_idx_157;
  double ct_idx_161;
  double ct_idx_177;
  double ct_idx_196;
  double ct_idx_221;
  double ct_idx_230;
  double ct_idx_241;
  double ct_idx_250;
  double ct_idx_258;
  double ct_idx_260;
  double ct_idx_266;
  double ct_idx_279;
  double ct_idx_283;
  double ct_idx_288;
  double ct_idx_289;
  double ct_idx_298;
  double ct_idx_33;
  double ct_idx_332;
  double ct_idx_340;
  double ct_idx_344;
  double ct_idx_347;
  double ct_idx_352;
  double ct_idx_355;
  double ct_idx_359;
  double ct_idx_360;
  double ct_idx_367;
  double ct_idx_386;
  double ct_idx_400;
  double ct_idx_401;
  double ct_idx_406;
  double ct_idx_415;
  double ct_idx_421;
  double ct_idx_423;
  double ct_idx_427;
  double ct_idx_432;
  double ct_idx_44;
  double ct_idx_44_tmp;
  double ct_idx_44_tmp_tmp_tmp;
  double ct_idx_45;
  double ct_idx_45_tmp;
  double ct_idx_51;
  double ct_idx_51_tmp;
  double ct_idx_52;
  double ct_idx_52_tmp;
  double ct_idx_62;
  double ct_idx_62_tmp;
  double ct_idx_8;
  double ct_idx_8_tmp;
  double t1011;
  double t1011_tmp;
  double t1013;
  double t1033;
  double t1048;
  double t1050;
  double t1060;
  double t1064;
  double t1065;
  double t1065_tmp;
  double t1071;
  double t1077;
  double t1083;
  double t1087;
  double t1089;
  double t1090;
  double t1093;
  double t1103;
  double t1107;
  double t1110;
  double t1110_tmp;
  double t1111;
  double t1111_tmp;
  double t1111_tmp_tmp;
  double t1116;
  double t1116_tmp;
  double t1117;
  double t1120;
  double t1120_tmp;
  double t1125;
  double t1130;
  double t1167;
  double t1179;
  double t1180;
  double t1190;
  double t1191;
  double t1197;
  double t1197_tmp;
  double t1200;
  double t1201;
  double t1203;
  double t1219;
  double t1220;
  double t1221;
  double t1223;
  double t1245;
  double t1247;
  double t1252;
  double t1254;
  double t1258;
  double t1266;
  double t1272;
  double t1274;
  double t1275;
  double t1280;
  double t1282;
  double t1304;
  double t1305;
  double t1328;
  double t1328_tmp;
  double t1344;
  double t1344_tmp;
  double t1350;
  double t1351;
  double t1354;
  double t1357;
  double t1358;
  double t1359;
  double t1360;
  double t1388;
  double t1393;
  double t1401;
  double t1401_tmp;
  double t1407;
  double t1414;
  double t1417;
  double t1426;
  double t1435;
  double t1440;
  double t1443;
  double t1450;
  double t1455;
  double t1457;
  double t1485;
  double t1485_tmp;
  double t1490;
  double t1490_tmp;
  double t1511;
  double t1513;
  double t1538;
  double t1538_tmp;
  double t1544;
  double t192;
  double t194;
  double t308;
  double t331;
  double t416;
  double t419;
  double t443;
  double t488;
  double t489;
  double t492;
  double t493;
  double t495;
  double t505;
  double t506;
  double t509;
  double t553;
  double t555;
  double t568;
  double t569;
  double t570;
  double t571;
  double t572;
  double t573;
  double t574;
  double t575;
  double t589;
  double t594;
  double t595;
  double t596;
  double t597;
  double t599;
  double t601;
  double t604;
  double t610;
  double t612;
  double t614;
  double t615;
  double t617;
  double t618;
  double t626;
  double t641;
  double t642;
  double t651;
  double t653;
  double t657;
  double t658;
  double t659;
  double t661;
  double t667;
  double t667_tmp;
  double t675;
  double t685;
  double t704;
  double t705;
  double t707;
  double t712;
  double t719;
  double t722;
  double t723;
  double t740;
  double t740_tmp;
  double t744;
  double t745;
  double t776;
  double t777;
  double t778;
  double t779;
  double t781;
  double t782;
  double t785;
  double t786;
  double t794;
  double t795;
  double t800;
  double t808;
  double t839;
  double t858;
  double t859;
  double t861;
  double t862;
  double t863;
  double t865;
  double t877;
  double t885;
  double t890;
  double t895;
  double t895_tmp;
  double t934;
  double t951;
  double t956;
  double t960;
  double t964;
  double t966;
  double t974;
  double t979;
  t192 = ct[51] * ct[307];
  t194 = ct[18] * ct[51];
  t308 = ct[28] + ct[37];
  t416 = ct[14] + ct[47];
  t419 = ct[16] + ct[49];
  t443 = ct[36] * 3.0E-6;
  t488 = ct[46] * 0.000281;
  t489 = ct[48] * 0.000281;
  t492 = ct[47] * 0.011402;
  t493 = ct[49] * 0.011402;
  t506 = ct[46] * 3.0E-6;
  t509 = ct[48] * 3.0E-6;
  t568 = ((ct[55] + ct[72]) + ct[234]) + ct[239];
  t569 = ((ct[52] + ct[66]) + ct[254]) + ct[256];
  t572 = ((ct[74] + ct[109]) + ct[244]) + ct[250];
  t573 = ((ct[89] + ct[99]) + ct[243]) + ct[252];
  t594 = ((ct[87] + ct[164]) + ct[270]) + ct[276];
  t597 = ct[19] * ct[295];
  t601 = ct[24] * ct[295];
  t610 = ((ct[85] + ct[178]) + ct[290]) + ct[293];
  t612 = ((ct[102] + ct[207]) + ct[288]) + ct[291];
  t617 = ((ct[146] + ct[235]) + ct[271]) + ct[284];
  t618 = ((ct[116] + ct[219]) + ct[287]) + ct[292];
  t626 = ((ct[212] + ct[222]) + ct[281]) + ct[289];
  t705 = ((((ct[54] + ct[67]) + ct[81]) + ct[109]) + ct[247]) + ct[250];
  t719 = ct[260] * ct[297];
  t722 = ct[262] * ct[296];
  t877 = ((((ct[118] + ct[201]) + ct[204]) + ct[222]) + ct[277]) + ct[289];
  t1065_tmp =
      ((((-ct[104] + ct[186]) + ct[203]) + ct[225]) + ct[283]) + ct[285];
  t1065 = ct[260] * t1065_tmp;
  t331 = ct[30] + -ct[36];
  t495 = ct[29] + t192;
  t553 = t192 * 3.0E-6;
  t555 = t194 * 3.0E-6;
  t570 = ((ct[53] + ct[79]) + ct[253]) + -ct[256];
  t571 = ((ct[82] + ct[99]) + -ct[246]) + ct[252];
  t574 = ((ct[92] + ct[130]) + -ct[240]) + ct[248];
  t575 = ((ct[63] + ct[98]) + ct[251]) + -ct[257];
  t589 = ct[40] * t569;
  t596 = ((ct[111] + ct[173]) + -ct[269]) + ct[276];
  t599 = ((ct[129] + ct[195]) + -ct[268]) + ct[278];
  t604 = ((ct[156] + ct[227]) + ct[261]) + -ct[264];
  t641 = (((ct[163] + -ct[157]) + ct[187]) + ct[188]) + ct[228];
  t651 = (((ct[152] + ct[205]) + ct[208]) + ct[226]) + -ct[223];
  t653 = (((ct[174] + ct[192]) + ct[198]) + ct[223]) + -ct[226];
  t657 = (((ct[175] + ct[180]) + ct[216]) + ct[37] * 0.000118) + t443;
  t659 = (((ct[200] + -ct[191]) + ct[215]) + ct[218]) + ct[220];
  t675 = ct[40] * t610;
  t685 = ct[50] * t594;
  t704 = ct[50] * t626;
  t707 = ((((ct[56] + ct[65]) + ct[103]) + ct[131]) + -ct[233]) + ct[241];
  t712 = ((((ct[59] + ct[76]) + ct[80]) + ct[101]) + ct[245]) + -ct[250];
  t723 = ((((ct[61] + ct[77]) + ct[99]) + ct[108]) + -ct[242]) + ct[252];
  t776 = ((((((ct[266] + ct[294]) + ct[60]) + ct[68]) + ct[90]) + ct[139]) +
          ct[233]) +
         -ct[241];
  t777 = ((((((ct[274] + ct[298]) + ct[60]) + ct[68]) + ct[90]) + ct[139]) +
          ct[233]) +
         -ct[241];
  t781 =
      ((((ct[73] + ct[107]) + ct[123]) + ct[145]) + ct[49] * 0.000118) + t509;
  t782 =
      ((((ct[69] + ct[106]) + ct[121]) + ct[142]) + ct[47] * 0.000118) + t506;
  t865 = ((((ct[86] + ct[153]) + -ct[210]) + ct[225]) + ct[282]) + ct[285];
  t974 =
      (((((((ct[158] + ct[314]) + ct[335]) + ct[147]) + -ct[151]) + -ct[189]) +
        ct[230]) +
       ct[267]) +
      ct[273];
  t1011_tmp = ct[50] * ct[307];
  t1011 = t1011_tmp * t877;
  t1013 =
      ((((((((ct[167] + ct[255]) + ct[314]) + ct[335]) + ct[147]) + -ct[151]) +
         -ct[189]) +
        ct[230]) +
       ct[267]) +
      ct[273];
  t1033 = ct[70] * t877;
  t1050 = t416 * t1065_tmp;
  t1077 = ct[262] * t877;
  t505 = ct[25] + -t194;
  t595 = ((ct[149] + ct[161]) + t194 * 0.000281) + t192 * 0.011402;
  t614 = ((ct[181] + ct[197]) + t194 * 0.000587) + t553;
  t615 = ((ct[169] + ct[214]) + t192 * 0.000369) + t555;
  t642 = (((ct[132] + ct[160]) + -(ct[36] * 0.000281)) + ct[37] * 0.011402) +
         ct[238];
  t658 = (((ct[168] + ct[202]) + ct[211]) + ct[37] * 0.000369) + -t443;
  t661 = (((ct[170] + ct[196]) + -(ct[36] * 0.000587)) + ct[229]) +
         ct[37] * 3.0E-6;
  t667_tmp = ct[10] * ct[258];
  t667 = t667_tmp * t641;
  t740_tmp = ct[10] * ct[321];
  t740 = t740_tmp * t707;
  t744 = ct[262] * t596;
  t745 = t495 * t599;
  t778 = ((((ct[84] + ct[105]) + ct[138]) + ct[172]) + -t489) + t493;
  t779 = ((((ct[83] + ct[112]) + ct[136]) + ct[171]) + -t488) + t492;
  t785 =
      ((((ct[91] + ct[117]) + ct[122]) + ct[137]) + ct[49] * 0.000369) + -t509;
  t786 =
      ((((ct[88] + ct[114]) + ct[120]) + ct[134]) + ct[47] * 0.000369) + -t506;
  t794 = ((((ct[97] + ct[119]) + ct[135]) + ct[143]) + -(ct[48] * 0.000587)) +
         ct[49] * 3.0E-6;
  t795 = ((((ct[96] + ct[115]) + ct[133]) + ct[141]) + -(ct[46] * 0.000587)) +
         ct[47] * 3.0E-6;
  t1440 = ct[40] * ct[307];
  t800 = t1440 * t723;
  t808 = ct[299] * t776;
  t839 = ct[71] * t712;
  t858 = ((((((ct[308] + ct[326]) + ct[93]) + ct[125]) + ct[127]) + ct[182]) +
          t488) +
         -t492;
  t859 = ((((((ct[313] + ct[328]) + ct[93]) + ct[125]) + ct[127]) + ct[182]) +
          t488) +
         -t492;
  t861 = ((((((ct[317] + ct[330]) + ct[94]) + ct[113]) + ct[128]) + ct[185]) +
          t489) +
         -t493;
  t862 = ((((((ct[319] + ct[333]) + ct[94]) + ct[113]) + ct[128]) + ct[185]) +
          t489) +
         -t493;
  t863 = ((((ct[95] + ct[179]) + ct[183]) + ct[197]) + t194 * 0.000118) + t553;
  t885 = ct[50] * t782;
  t966 = ct[44] * t865;
  ct_idx_8_tmp = ct[18] * ct[50];
  ct_idx_8 = ct_idx_8_tmp * t1065_tmp;
  ct_idx_14_tmp = ct[11] - ct[32];
  ct_idx_14 = -ct[18] * ct_idx_14_tmp * t1065_tmp;
  ct_idx_33 = t495 * t1065_tmp;
  ct_idx_44_tmp_tmp_tmp = ct[12] - ct[26];
  t443 = ct[307] * ct_idx_44_tmp_tmp_tmp;
  ct_idx_44_tmp = ((ct[78] * 0.000281 + ct[162]) - ct[190]) + t443 * 0.011402;
  ct_idx_44 = ct[322] * t568 + -ct[249] * ct_idx_44_tmp;
  ct_idx_45_tmp = -ct[10] * ct[258];
  ct_idx_45 = ct[24] * t568 + ct_idx_45_tmp * ct_idx_44_tmp;
  ct_idx_51_tmp = ct[62] * t777;
  b_ct_idx_51_tmp = ct_idx_51_tmp * ct_idx_44_tmp;
  ct_idx_51 = b_ct_idx_51_tmp / 2.0;
  ct_idx_52_tmp = ct[62] * t568;
  ct_idx_52 = ct_idx_52_tmp * t1013 / 2.0;
  ct_idx_62_tmp = ct[6] - ct[41];
  b_ct_idx_62_tmp = ((-ct[206] + ct[222]) + ct[289]) + t443 * 0.000369;
  c_ct_idx_62_tmp = ((ct[78] * 0.000587 + ct[199]) - ct[225]) + t443 * 3.0E-6;
  ct_idx_62 = (((ct[40] * t626 + ct_idx_62_tmp * c_ct_idx_62_tmp) +
                ct[71] * b_ct_idx_62_tmp) +
               -ct_idx_62_tmp * t1065_tmp) +
              ct[71] * t877;
  ct_idx_143 = ct[62] * t595;
  ct_idx_157 = ((ct[176] + ct[193]) + t192 * 0.000118) + -t555;
  ct_idx_161 = ct[71] * t570;
  ct_idx_177 = ct[24] * t595;
  ct_idx_196 = t667_tmp * t642;
  ct_idx_221 = ct[71] * t612;
  ct_idx_230 = -t626 * ct_idx_14_tmp;
  ct_idx_241 = t505 * t596;
  ct_idx_250 = ct[260] * t599;
  ct_idx_258 = ct[20] * t707;
  ct_idx_260 = ct[23] * t707;
  t626 = ct[13] * ct[24];
  ct_idx_266 = t626 * t705;
  ct_idx_279 = ct[39] * t705;
  ct_idx_283 = ct[40] * t705;
  t506 = ct[18] * ct[40];
  ct_idx_288 = t506 * t712;
  ct_idx_289 = ct[148] + t777;
  ct_idx_298 = t667_tmp * t779;
  ct_idx_332 = t308 * t712;
  ct_idx_340 = ct[40] * t781;
  ct_idx_344 = t331 * t723;
  ct_idx_347 =
      ((((ct[140] + ct[144]) + ct[159]) + -ct[237]) + t192 * 0.000281) +
      -(t194 * 0.011402);
  ct_idx_352 =
      ((((ct[100] + ct[165]) + ct[197]) + -ct[209]) + -(t194 * 0.000369)) +
      t553;
  ct_idx_355 =
      ((((ct[126] + ct[166]) + ct[193]) + ct[221]) + t192 * 0.000587) + -t555;
  ct_idx_359 = ct[224] + t859;
  ct_idx_360 = ct[236] + t862;
  ct_idx_367 = -t781 * ct_idx_14_tmp;
  ct_idx_386 = ct[71] * t785;
  ct_idx_400 = ct[39] * t863;
  ct_idx_401 = ct[38] * t865;
  ct_idx_406 = ct[45] * t863;
  ct_idx_415 = t505 * t785;
  ct_idx_421 = ct[262] * t786;
  ct_idx_423 = t495 * t794;
  ct_idx_427 = ct[51] * t865;
  ct_idx_432 = ct[260] * t795;
  t1071 = t505 * t877;
  t1087 = ct[24] * t574 + t667_tmp * t604;
  t1089 = ct[19] * t574 + t667_tmp * t617;
  t1090 = ct[325] * t604 + -(ct[62] * t617);
  t443 = t595 * ct[325];
  t1103 = t443 * t777 / 2.0;
  t1107 = t443 * ct_idx_289 / 2.0;
  t1110_tmp = ct[62] * ct_idx_289;
  b_t1110_tmp = t1110_tmp * ct_idx_44_tmp;
  t1110 = b_t1110_tmp / 2.0;
  t1116_tmp =
      ((((ct[147] + -ct[151]) + -ct[189]) + ct[230]) + ct[267]) + ct[273];
  t1116 = ct[24] * t707 + t667_tmp * t1116_tmp;
  t1120_tmp =
      ((((((ct[310] - ct[311]) + ct[147]) + -ct[151]) + -ct[189]) + ct[230]) +
       ct[267]) +
      ct[273];
  t1120 = ct[322] * t776 + -ct[249] * t1120_tmp;
  t1125 = ct_idx_51_tmp * ct_idx_44 / 2.0;
  t1130 = t1110_tmp * ct_idx_44 / 2.0;
  t1197_tmp = (-ct_idx_283 + t839) + t723 * ct_idx_62_tmp;
  t1197 = -ct[258] * t1197_tmp;
  t492 = ct[10] * ct[249];
  t1200 = t492 * t1197_tmp;
  t1201 = ct[258] * t1197_tmp;
  t1219 = (-(ct[50] * t705) + ct[262] * t712) + ct[260] * t723;
  t1247 = (ct[71] * t1065_tmp + ct[40] * t865) + t877 * ct_idx_62_tmp;
  t1280 = (ct[262] * t1065_tmp + ct[50] * t865) + ct[260] * t877;
  t1350 = (((ct[40] * t571 + ct[71] * t573) + t572 * ct_idx_62_tmp) +
           -t712 * ct_idx_62_tmp) +
          ct[71] * t723;
  t1388 = ct_idx_62 * ct[62];
  t1393 = ct[24] * ct_idx_62;
  t1401_tmp = ((((t589 - ct_idx_161) - ct_idx_279) - ct_idx_288) + t800) +
              t575 * ct_idx_62_tmp;
  t1401 = t667_tmp * t1401_tmp;
  t489 = ct[10] * ct[306];
  t1407 = ((((ct[301] + ct[71] * ct[296]) + ct[297] * ct_idx_62_tmp) +
            -(t489 * t705)) +
           ct[43] * t712) +
          ct[42] * t723;
  t1443 = ((((ct[40] * t594 + ct[71] * t596) + -t599 * ct_idx_62_tmp) +
            ct[39] * t865) +
           -(t506 * t1065_tmp)) +
          t1440 * t877;
  t443 = ct[302] - ct[306];
  t509 = ct[18] * t443;
  t493 = ct[304] + t509;
  t488 = ((((ct[38] * t705 + ct[323]) + ct[71] * ct[309]) + t712 * t493) +
          ct[70] * t723) +
         ct[312] * ct_idx_62_tmp;
  t509 = ((((ct[57] + ct[58]) + ct[64]) - ct[75]) + ct[307] * t443 * 3.0E-6) +
         t509 * 0.000118;
  t1490_tmp = ct[17] - ct[48];
  t1490 = ((((-(ct[45] * t705) + -ct[50] * t509) + t419 * t712) +
            t723 * t1490_tmp) +
           ct[262] * ct[309]) +
          ct[260] * ct[312];
  t890 = t492 * ct_idx_347;
  t895_tmp = ct[258] * ct[259];
  t895 = t895_tmp * ct_idx_347;
  t934 = ct[24] * ct_idx_347;
  t951 = (ct[7] + ct[329]) + ct_idx_347;
  t956 = t506 * ct_idx_352;
  t960 = t1440 * ct_idx_355;
  t964 = ((ct[217] + ct[331]) + ct[9]) + ct_idx_347;
  t1048 = t419 * ct_idx_352;
  t1060 = t505 * ct_idx_352;
  t1064 = t495 * ct_idx_355;
  t1083 = ct[19] * t568 + t667_tmp * t595;
  t1093 = ct[322] * t595 + -ct[321] * ct_idx_44_tmp;
  t1111_tmp_tmp = ct[62] * ct[213];
  t1111_tmp = (((-ct[194] + ct[331]) + ct[9]) + ct_idx_347) + t1111_tmp_tmp;
  b_t1111_tmp = t568 * ct[325];
  c_t1111_tmp = b_t1111_tmp * t1111_tmp;
  t1111 = c_t1111_tmp * -0.5;
  t1117 = ct[62] * t859 + ct[325] * t862;
  t1167 = ct_idx_52_tmp * t1120 / 2.0;
  t443 = t642 * t1116;
  t1179 = t443 / 2.0;
  t1180 = t443 / 4.0;
  t443 = ct[62] * ct[320] * t1116;
  t1190 = t443 / 2.0;
  t1191 = t443 / 4.0;
  t1203 = ct[259] * t1201;
  t1220 = (t705 * ct_idx_14_tmp + t505 * t712) + t495 * t723;
  t1221 = ct[249] * t1219;
  t1223 = ct[258] * t1219;
  t1252 = ct[300] * t1247;
  t1254 = ct[322] * t1247;
  t1266 = ct[20] * t1247;
  t1272 = ct_idx_45 * t1120 / 2.0;
  t1282 = (-t865 * ct_idx_14_tmp + t495 * t877) + t505 * t1065_tmp;
  t1305 = ct[322] * t1280;
  t1351 = ct[249] * t1350;
  t1354 = t667_tmp * t1350;
  t1357 =
      (((-t571 * ct_idx_14_tmp + t495 * t572) + t505 * t573) + -(t495 * t712)) +
      t505 * t723;
  t1359 = (((ct[50] * t571 + ct[260] * t572) + ct[262] * t573) +
           -(ct[260] * t712)) +
          ct[262] * t723;
  t1414 = t667_tmp * t1407;
  t1426 = ((((ct[50] * t569 + -(ct[262] * t570)) + ct[260] * t575) +
            -t705 * ct_idx_44_tmp_tmp_tmp) +
           -(ct_idx_8_tmp * t712)) +
          t1011_tmp * t723;
  t443 = ct[13] * ct[19];
  t506 = ct[31] - ct[34];
  t1435 = ((((ct[305] + t495 * ct[297]) + t505 * ct[296]) + -(t443 * t705)) +
           -(ct[124] * t712)) +
          t723 * t506;
  t1450 = ct[24] * t1443;
  t1455 = ct[249] * t488;
  t1457 = t667_tmp * t488;
  t1485_tmp = ct[15] - ct[46];
  t1485 = ((((ct[44] * t705 + ct_idx_14_tmp * t509) + -(t416 * t712)) +
            -t723 * t1485_tmp) +
           t505 * ct[309]) +
          t495 * ct[312];
  t1511 =
      ((((t657 * ct_idx_14_tmp + t505 * t658) + t495 * t661) + -(t443 * t865)) +
       ct[124] * t1065_tmp) +
      -t877 * t506;
  t1513 = ((((-(ct[50] * t657) + ct[262] * t658) + ct[260] * t661) +
            -(t626 * t865)) +
           t308 * t1065_tmp) +
          t331 * t877;
  t1538_tmp =
      ((((-ct_idx_340 + ct_idx_386) - ct_idx_401) + t1033) + t493 * t1065_tmp) +
      t794 * ct_idx_62_tmp;
  t1538 = ct[24] * t1538_tmp;
  t1544 = ((((-(ct[50] * t781) + ct[45] * t865) + ct[262] * t785) +
            ct[260] * t794) +
           t419 * t1065_tmp) +
          t877 * t1490_tmp;
  t979 = ct[258] * t951;
  t785 = ct[321] * t568 + -(ct[249] * t595);
  t419 = ct[249] * t1220;
  t781 = ct[258] * t1220;
  t1245 = (ct[40] * t863 + ct[71] * ct_idx_352) + ct_idx_355 * ct_idx_62_tmp;
  t1258 = ct[10] * t1254;
  t1274 = (ct[50] * t863 + ct[262] * ct_idx_352) + ct[260] * ct_idx_355;
  t1275 = (-t863 * ct_idx_14_tmp + t1060) + t1064;
  t1304 = ct[322] * t1282;
  t1328_tmp = t934 + ct[19] * t1116_tmp;
  t1328 = (ct_idx_177 + ct[19] * ct_idx_44_tmp) * t1328_tmp;
  t1344_tmp = ct[10] * ct[322];
  t1344 =
      ((t1344_tmp * t707 + ct[316]) + -(t667_tmp * t778)) + t492 * t1116_tmp;
  t1358 = ct[325] * t1357;
  t1360 = ct[62] * t1359;
  t573 = t667_tmp * t1357;
  t571 = t667_tmp * t1359;
  t1417 = t1414 / 2.0;
  t555 = ((((-t569 * ct_idx_14_tmp + t495 * t575) + -(t505 * t570)) +
           ct[51] * t705) +
          ct[18] * t712 * ct_idx_14_tmp) +
         -ct[307] * t723 * ct_idx_14_tmp;
  t596 = t667_tmp * t1426;
  t599 = ct[24] * t1426;
  t1440 = ct[19] * t1435;
  t572 = ((((ct[40] * t651 + -(ct[71] * t653)) + -t659 * ct_idx_62_tmp) +
           t489 * t863) +
          ct[43] * ct_idx_352) +
         ct[42] * ct_idx_355;
  t509 = ((((ct[40] * t657 + -(ct[71] * t658)) + -t661 * ct_idx_62_tmp) +
           t489 * t865) +
          ct[43] * t1065_tmp) +
         ct[42] * t877;
  t192 = ((((-t610 * ct_idx_14_tmp + t495 * t618) + -(t505 * t612)) +
           ct[51] * t863) +
          -ct[18] * ct_idx_352 * ct_idx_14_tmp) +
         ct[307] * ct_idx_355 * ct_idx_14_tmp;
  t553 =
      ((((t651 * ct_idx_14_tmp + t505 * t653) + t495 * t659) + -(t443 * t863)) +
       ct[124] * ct_idx_352) +
      -ct_idx_355 * t506;
  t194 = ((((-(ct[50] * t651) + ct[262] * t653) + ct[260] * t659) +
           -(t626 * t863)) +
          t308 * ct_idx_352) +
         t331 * ct_idx_355;
  t626 = ((((ct[40] * t782 + -(ct[71] * t786)) + -t795 * ct_idx_62_tmp) +
           -(ct[38] * t863)) +
          ct_idx_352 * t493) +
         ct[70] * ct_idx_355;
  t493 =
      ((((t782 * ct_idx_14_tmp + ct[44] * t863) + t505 * t786) + t495 * t795) +
       t416 * ct_idx_352) +
      ct_idx_355 * t1485_tmp;
  t489 = (-t595 * t1111_tmp + -t1013 * ct_idx_44_tmp) + t1350;
  t443 = ct[19] * t707 + -(t667_tmp * ct_idx_347);
  b_ct[0] = ct[0];
  b_ct[1] = ct[1];
  b_ct[2] = ct[2];
  b_ct[3] = ct[3];
  b_ct[4] = ct[4];
  b_ct[5] = ct[5];
  b_ct[6] = ct_idx_8;
  b_ct[7] = t1011;
  b_ct[8] = t1013;
  b_ct[9] = ct_idx_14;
  b_ct[10] = t1033;
  b_ct[11] = t1048;
  b_ct[12] = ct[6];
  b_ct[13] = t1050;
  b_ct[14] = t1060;
  b_ct[15] = ct_idx_33;
  b_ct[16] = t1064;
  b_ct[17] = t1065;
  b_ct[18] = t1071;
  b_ct[19] = t1077;
  b_ct[20] = ct[9];
  b_ct[21] = t785;
  b_ct[22] = ct_idx_44;
  b_ct[23] = t1083;
  b_ct[24] = ct_idx_45;
  b_ct[25] = ct[322] * t574 + ct[249] * t604;
  b_ct[26] = t1087;
  b_ct[27] = t1089;
  b_ct[28] = t1090;
  b_ct[29] = ct[295] * ct[322] + ct[249] * t642;
  b_ct[30] = ct[295] * ct[321] + -(ct[249] * t641);
  b_ct[31] = t1093;
  t488 = ct[27] * t568;
  b_ct[32] = t488 * t777 / 2.0;
  t492 = ct[33] * t568;
  b_ct[33] = t492 * t777 / 2.0;
  b_ct[34] = ct[321] * t604 + ct[322] * t617;
  b_ct[35] = ct[62] * t641 + -(ct[325] * t642);
  b_ct[36] = t488 * ct_idx_289 / 2.0;
  b_ct[37] = ct[10];
  b_ct[38] = ct[11];
  b_ct[39] = t492 * ct_idx_289 / 2.0;
  b_ct[40] = ct[19] * t604 + -(ct[24] * t617);
  b_ct[41] = ct[322] * t641 + ct[321] * t642;
  b_ct[42] = -t1103;
  b_ct[43] = ct_idx_51;
  b_ct[44] = -t1107;
  b_ct[45] = t1110;
  b_ct[46] = t1111;
  b_ct[47] = ct_idx_52;
  b_ct[48] = t443;
  b_ct[49] = t1116;
  b_ct[50] = t1117;
  b_ct[51] = ct[62] * ct_idx_359 + ct[325] * ct_idx_360;
  b_ct[52] = ct[321] * t776 + -(ct[249] * t951);
  b_ct[53] = t1120;
  b_ct[54] = ct[62] * t964 + ct[325] * t974;
  b_ct[55] = ct[322] * t951 + -ct[321] * t1120_tmp;
  t488 = t777 * ct[325];
  b_ct[56] = t488 * t785 / 2.0;
  b_ct[57] = t1125;
  b_ct[58] = -t1125;
  b_ct[59] = (ct[255] + t974) * ct[325] + ct[62] * (t964 + t1111_tmp_tmp);
  t492 = ct_idx_289 * ct[325];
  b_ct[60] = t492 * t785 / 2.0;
  b_ct[61] = t488 * t1083 / 2.0;
  b_ct[62] = t1130;
  b_ct[63] = -t1130;
  b_ct[64] = ct_idx_51_tmp * ct_idx_45 / 2.0;
  b_ct[65] = t492 * t1083 / 2.0;
  b_ct[66] = t1110_tmp * ct_idx_45 / 2.0;
  b_ct[67] = t785 * t1111_tmp / 2.0;
  b_ct[68] = t1013 * ct_idx_44 / 2.0;
  t492 = t1083 * t1111_tmp;
  b_ct[69] = t492 * -0.5;
  b_ct[70] = t492 * -0.25;
  t492 = t1013 * ct_idx_45;
  b_ct[71] = t492 / 2.0;
  b_ct[72] = t492 / 4.0;
  t492 = b_t1111_tmp * t443;
  b_ct[73] = t492 / 2.0;
  b_ct[74] = t492 / 4.0;
  t492 = ct_idx_52_tmp * t1116;
  b_ct[75] = t492 / 4.0;
  b_ct[76] = -(t492 / 2.0);
  t492 = t1013 * t1087;
  b_ct[77] = t492 / 2.0;
  b_ct[78] = t492 / 4.0;
  t492 = t574 * ct[325] * t443;
  b_ct[79] = t492 / 2.0;
  b_ct[80] = t492 / 4.0;
  t492 = t1089 * t1111_tmp;
  b_ct[81] = t492 * -0.5;
  b_ct[82] = t492 * -0.25;
  t492 = ct[62] * t574 * t1116;
  b_ct[83] = t492 / 2.0;
  b_ct[84] = t492 / 4.0;
  b_ct[85] = ct[12];
  t492 = ct[295] * ct[325] * t443;
  b_ct[86] = t492 / 2.0;
  b_ct[87] = t492 / 4.0;
  t492 = ct[62] * ct[295] * t1116;
  b_ct[88] = t492 / 2.0;
  b_ct[89] = t492 / 4.0;
  t492 = t595 * t443;
  b_ct[90] = t492 / 2.0;
  b_ct[91] = t492 / 4.0;
  b_ct[92] = t1167;
  b_ct[93] = -t1167;
  t492 = t1116 * ct_idx_44_tmp;
  b_ct[94] = t492 * -0.5;
  b_ct[95] = t492 * -0.25;
  t492 = t604 * t1116;
  b_ct[96] = t492 / 2.0;
  b_ct[97] = t492 / 4.0;
  t492 = t617 * t443;
  b_ct[98] = t492 / 2.0;
  b_ct[99] = t492 / 4.0;
  t492 = t641 * t443;
  b_ct[100] = t492 / 2.0;
  b_ct[101] = t492 / 4.0;
  b_ct[102] = t1179;
  b_ct[103] = t1180;
  b_ct[104] = -t1179;
  b_ct[105] = -t1180;
  b_ct[106] = t1120 * ct_idx_44_tmp / 2.0;
  t492 = ct[320] * ct[325] * t443;
  b_ct[107] = t492 / 2.0;
  b_ct[108] = t492 / 4.0;
  b_ct[109] = t1190;
  b_ct[110] = t1191;
  b_ct[111] = -t1190;
  b_ct[112] = -t1191;
  b_ct[113] = -ct[249] * t1197_tmp;
  b_ct[114] = t1197;
  b_ct[115] = ct[259] * t1197;
  b_ct[116] = t1200;
  b_ct[117] = t1201;
  b_ct[118] = t1203;
  b_ct[119] = ct[10] * t1201;
  b_ct[120] = t1200 / 2.0;
  b_ct[121] = t1203 * -0.5;
  t492 = t859 * t443;
  b_ct[122] = t492 / 2.0;
  b_ct[123] = t492 / 4.0;
  t492 = t862 * t1116;
  b_ct[124] = t492 / 2.0;
  b_ct[125] = t492 / 4.0;
  t492 = ct_idx_359 * t443;
  b_ct[126] = t492 / 2.0;
  b_ct[127] = t492 / 4.0;
  t492 = ct_idx_360 * t1116;
  b_ct[128] = t492 / 2.0;
  b_ct[129] = t492 / 4.0;
  b_ct[130] = t1221;
  b_ct[131] = t419;
  b_ct[132] = t1223;
  b_ct[133] = ct[10] * t419;
  b_ct[134] = t781;
  b_ct[135] = ct[10] * t1221;
  b_ct[136] = -t1223;
  b_ct[137] = ct[10] * t781;
  b_ct[138] = ct[15];
  b_ct[139] = -t781;
  b_ct[140] = ct[10] * t1223;
  b_ct[141] = -(ct[259] * t781);
  b_ct[142] = ct[259] * -t1223;
  b_ct[143] = t1344_tmp * t1219;
  b_ct[144] = -(t740_tmp * t1220);
  b_ct[145] = ct[20] * t1219;
  b_ct[146] = ct[23] * t1220;
  b_ct[147] = t785 * t443 / 2.0;
  b_ct[148] = ct_idx_44 * t1116 / 2.0;
  b_ct[149] = ct_idx_45 * t1116;
  b_ct[150] = ct[325] * t1245;
  b_ct[151] = ct[62] * t1247;
  b_ct[152] = ct[299] * t1245;
  b_ct[153] = ct[321] * t1245;
  b_ct[154] = t1252;
  b_ct[155] = t1254;
  b_ct[156] = -t1252;
  b_ct[157] = t1258;
  b_ct[158] = -t1254;
  b_ct[159] = ct[19] * t1245;
  b_ct[160] = ct[23] * t1245;
  b_ct[161] = t1258 / 2.0;
  b_ct[162] = ct[24] * t1247;
  b_ct[163] = -t1266;
  b_ct[164] = ct[17];
  b_ct[165] = t1266 / 2.0;
  b_ct[166] = t1272;
  b_ct[167] = -t1272;
  b_ct[168] = t1274;
  b_ct[169] = t1275;
  b_ct[170] = ct[62] * t1274;
  b_ct[171] = ct[325] * t1274;
  b_ct[172] = ct[62] * t1275;
  b_ct[173] = ct[325] * t1275;
  b_ct[174] = t1280;
  b_ct[175] = t1282;
  b_ct[176] = ct[62] * t1280;
  b_ct[177] = ct[325] * t1280;
  b_ct[178] = ct[62] * t1282;
  b_ct[179] = ct[325] * t1282;
  t492 = (ct_idx_143 + ct[325] * ct_idx_44_tmp) * t1328_tmp;
  b_ct[180] = t492 / 2.0;
  b_ct[181] = t492 / 4.0;
  b_ct[182] = ct[299] * t1275;
  b_ct[183] = ct[299] * t1274;
  b_ct[184] = ct[321] * t1275;
  b_ct[185] = ct[321] * t1274;
  b_ct[186] = ct[18];
  b_ct[187] = ct[19];
  b_ct[188] = ct[300] * t1282;
  b_ct[189] = ct[300] * t1280;
  b_ct[190] = t1304;
  b_ct[191] = t1305;
  b_ct[192] = ct[10] * t1304;
  b_ct[193] = ct[19] * t1274;
  b_ct[194] = ct[19] * t1275;
  b_ct[195] = ct[10] * t1305;
  b_ct[196] = ct[20];
  b_ct[197] = ct[23] * t1274;
  b_ct[198] = ct[24] * t1274;
  b_ct[199] = ct[23] * t1275;
  b_ct[200] = ct[24] * t1275;
  b_ct[201] = t1090 * t1328_tmp / 2.0;
  b_ct[202] = ct[19] * t1280;
  b_ct[203] = ct[20] * t1280;
  b_ct[204] = ct[20] * t1282;
  b_ct[205] = ct[24] * t1280;
  b_ct[206] = -(ct[19] * t1282);
  b_ct[207] = ct[24] * t1282;
  b_ct[208] = t1093 * t1328_tmp * -0.5;
  b_ct[209] = t1328;
  b_ct[210] = -t1328;
  b_ct[211] = ((ct[19] * t778 + ct[24] * t779) + -(t1344_tmp * ct_idx_347)) +
              t740_tmp * t1116_tmp;
  b_ct[212] = t1351;
  t492 = t1117 * t1328_tmp;
  b_ct[213] = t492 * -0.5;
  b_ct[214] = t492 * -0.25;
  b_ct[215] = t1354;
  b_ct[216] = t1354 / 2.0;
  b_ct[217] = ct[23];
  b_ct[218] = ct[249] * t1357;
  b_ct[219] = ct[249] * t1359;
  b_ct[220] = t573;
  b_ct[221] = -t573;
  b_ct[222] = t571;
  b_ct[223] = -(ct[321] * t1357);
  b_ct[224] = -t571;
  b_ct[225] = ct[322] * t1359;
  b_ct[226] = ct[24];
  b_ct[227] = ct[19] * t1357;
  b_ct[228] = ct[24] * t1359;
  t492 = (((t597 + t667) - ct_idx_260) - t895) * t1111_tmp;
  b_ct[229] = t492 / 2.0;
  b_ct[230] = t492 / 4.0;
  t492 = t1013 * (((t601 + ct_idx_196) - ct_idx_258) + t895_tmp * t1116_tmp);
  b_ct[231] = t492 * -0.5;
  b_ct[232] = t492 * -0.25;
  t443 = ((t740 - ct[315]) - ct_idx_298) + t890;
  t488 *= t443;
  b_ct[233] = t488 * -0.5;
  b_ct[234] = t488 * -0.25;
  t488 = ct_idx_51_tmp * t1344;
  b_ct[235] = t488 / 2.0;
  b_ct[236] = t488 / 4.0;
  t488 = t1110_tmp * t1344;
  b_ct[237] = t488 / 2.0;
  b_ct[238] = t488 / 4.0;
  b_ct[239] = ct[26];
  t488 = (((-(ct[40] * ct_idx_157) + ct[71] * t615) - ct[71] * ct_idx_355) +
          t614 * ct_idx_62_tmp) +
         ct_idx_352 * ct_idx_62_tmp;
  b_ct[240] = ct[19] * t488 * -0.5;
  b_ct[241] = t1393 / 2.0;
  t492 = t443 * t1111_tmp;
  b_ct[242] = t492 / 2.0;
  b_ct[243] = t492 / 4.0;
  t492 = t1013 * t1344;
  b_ct[244] = t492 / 2.0;
  b_ct[245] = t492 / 4.0;
  b_ct[246] = ct[27];
  b_ct[247] = ct_idx_45_tmp * t1401_tmp;
  b_ct[248] = t1401;
  b_ct[249] = t1401 * -0.5;
  b_ct[250] = (((ct_idx_157 * ct_idx_14_tmp + t495 * t614) + t505 * t615) +
               t495 * ct_idx_352) +
              -(t505 * ct_idx_355);
  b_ct[251] = (((-(ct[50] * ct_idx_157) + ct[260] * t614) + ct[262] * t615) +
               ct[260] * ct_idx_352) +
              -(ct[262] * ct_idx_355);
  b_ct[252] = t1407;
  t492 = (((ct_idx_230 - ct_idx_33) + t1071) + t505 * b_ct_idx_62_tmp) +
         t495 * c_ct_idx_62_tmp;
  b_ct[253] = -ct[62] * t492;
  t506 = (((t704 - t1065) + t1077) + ct[262] * b_ct_idx_62_tmp) +
         ct[260] * c_ct_idx_62_tmp;
  b_ct[254] = -ct[62] * t506;
  b_ct[255] = t1414;
  b_ct[256] = -t1414;
  b_ct[257] = t1417;
  b_ct[258] = -t1417;
  b_ct[259] = ct[322] * t492;
  b_ct[260] = ct[322] * t506;
  b_ct[261] = -ct[24] * t492;
  b_ct[262] = -ct[24] * t506;
  b_ct[263] = t1426;
  b_ct[264] = t555;
  b_ct[265] = t596;
  b_ct[266] = -t596;
  b_ct[267] = t667_tmp * t555;
  b_ct[268] = t599;
  b_ct[269] = -t599;
  b_ct[270] = ct[19] * t555;
  b_ct[271] = t1435;
  t492 = ((((ct[303] + t719) + t722) - ct_idx_266) - ct_idx_332) - ct_idx_344;
  b_ct[272] = ct_idx_45_tmp * t492;
  b_ct[273] = -(t667_tmp * t1435);
  b_ct[274] = t1440;
  b_ct[275] = -t1440;
  b_ct[276] = -ct[24] * t492;
  b_ct[277] = t1443;
  b_ct[278] = t1116 * t1344;
  b_ct[279] = -(t1450 / 2.0);
  b_ct[280] = t1455;
  b_ct[281] = -t1455;
  b_ct[282] = t1457;
  b_ct[283] = t1457 / 2.0;
  t492 = ((((t675 - ct_idx_221) - ct_idx_400) + t956) - t960) +
         t618 * ct_idx_62_tmp;
  b_ct[284] = ct[19] * t492 / 2.0;
  t506 = t1120 * t1344;
  b_ct[285] = t506 / 2.0;
  b_ct[286] = t506 / 4.0;
  b_ct[287] = t572;
  b_ct[288] = ct[325] * t572;
  b_ct[289] = t509;
  b_ct[290] = ct[62] * t509;
  b_ct[291] = ct[19] * t572;
  t506 = ((((t685 + t744) - ct_idx_250) - ct_idx_8) + t1011) +
         t865 * ct_idx_44_tmp_tmp_tmp;
  b_ct[292] = -ct[62] * t506;
  b_ct[293] = ct[24] * t509;
  b_ct[294] = ct[32];
  t509 = ((((-ct_idx_241 + t745) + ct_idx_427) + ct_idx_14) +
          t594 * ct_idx_14_tmp) +
         ct[307] * t877 * ct_idx_14_tmp;
  b_ct[295] = ct[62] * t509;
  t443 = t1116 * (((ct[300] * t776 - ct[318] * ct[322]) - ct[249] * t861) +
                  ct[258] * t1120_tmp);
  b_ct[296] = t443 / 2.0;
  b_ct[297] = t443 / 4.0;
  b_ct[298] = ((((ct[50] * t610 + -(ct[262] * t612)) + ct[260] * t618) +
                -t863 * ct_idx_44_tmp_tmp_tmp) +
               ct_idx_8_tmp * ct_idx_352) +
              -(t1011_tmp * ct_idx_355);
  b_ct[299] = -ct[24] * t506;
  b_ct[300] = ct[249] * t1485;
  b_ct[301] = ct[249] * t1490;
  b_ct[302] = t192;
  b_ct[303] = t667_tmp * t1485;
  b_ct[304] = ct[325] * t192;
  b_ct[305] = t667_tmp * t1490;
  b_ct[306] = ct[33];
  b_ct[307] = -ct[24] * t509;
  b_ct[308] = ct[19] * t1485;
  b_ct[309] = ct[24] * t1490;
  b_ct[310] = ct[19] * t192;
  b_ct[311] = t553;
  b_ct[312] = t194;
  b_ct[313] = ct[325] * t553;
  b_ct[314] = ct[325] * t194;
  b_ct[315] = t1511;
  b_ct[316] = t1513;
  b_ct[317] = ct[62] * t1511;
  b_ct[318] = ct[62] * t1513;
  b_ct[319] = ct[19] * t553;
  b_ct[320] = ct[19] * t194;
  b_ct[321] = ct[24] * t1511;
  b_ct[322] = ct[24] * t1513;
  t506 = t1328_tmp * (((ct[321] * t861 - ct[322] * t858) - ct[300] * t951) +
                      ct[299] * t1120_tmp);
  b_ct[323] = t506 / 2.0;
  b_ct[324] = t506 / 4.0;
  b_ct[325] = ct[325] * t626;
  b_ct[326] = -ct[62] * t1538_tmp;
  b_ct[327] = ct[321] * t626;
  b_ct[328] = -ct[322] * t1538_tmp;
  b_ct[329] = ct[19] * t626;
  b_ct[330] = t1538;
  b_ct[331] = t1538 / 2.0;
  b_ct[332] = ct[325] * t493;
  t506 = ((((ct_idx_367 + t966) - ct_idx_415) - ct_idx_423) + t1050) +
         t877 * t1485_tmp;
  b_ct[333] = -ct[62] * t506;
  b_ct[334] = ct[321] * t493;
  t509 = ((((t885 + ct_idx_406) - ct_idx_421) - ct_idx_432) + t1048) +
         ct_idx_355 * t1490_tmp;
  b_ct[335] = -ct[321] * t509;
  b_ct[336] = ct[322] * t1544;
  b_ct[337] = -ct[322] * t506;
  b_ct[338] = ct[19] * t493;
  b_ct[339] = ct[19] * t509;
  b_ct[340] = ct[24] * t1544;
  b_ct[341] = -ct[24] * t506;
  b_ct[342] = t1274 + t1282;
  t506 = ((t1060 + t1064) - t1280) - t863 * ct_idx_14_tmp;
  b_ct[343] = ct[62] * t506;
  b_ct[344] = ct[325] * t506;
  b_ct[345] = ct[19] * t506;
  b_ct[346] = -(ct[24] * t506);
  b_ct[347] = ct[0] * t489 / 2.0;
  b_ct[348] = ct[1] * t489 / 2.0;
  b_ct[349] = -ct[325] * t488 + t1388;
  t443 = ct[325] * t488;
  t506 = t1388 - t443;
  b_ct[350] = ct[249] * t506;
  b_ct[351] = -(t667_tmp * t506);
  b_ct[352] = ct[41];
  b_ct[353] = ct[62] * t1443 + -ct[325] * t492;
  b_ct[354] = ct[325] * t509 + ct[62] * t1544;
  b_ct[355] = (t1351 + ct[321] * t488) + ct_idx_62 * ct[322];
  b_ct[356] = (t1354 + -ct[19] * t488) + t1393;
  b_ct[357] = ((((-t1103 + ct_idx_51) + t1111) + ct_idx_52) + t1358) + t1360;
  b_ct[358] = ((((-t1107 + t1110) + t1111) + ct_idx_52) + t1358) + t1360;
  t488 = c_t1111_tmp / 2.0;
  b_ct[359] =
      ct[3] *
      (((((t1103 + b_ct_idx_51_tmp * -0.5) - ct_idx_52) - t1388) + t443) +
       t488) *
      -0.5;
  b_ct[360] =
      ct[2] *
      (((((t1107 + b_t1110_tmp * -0.5) - ct_idx_52) - t1388) + t443) + t488) /
      2.0;
  b_ct[361] = (t1401 + t1450) + -ct[19] * t492;
  b_ct[362] = ct[46];
  b_ct[363] = ct[48];
  b_ct[364] = ct[62];
  b_ct[365] = ct[78];
  b_ct[366] = ct[104];
  b_ct[367] = ct[147];
  b_ct[368] = ct[162];
  b_ct[369] = -ct[151];
  b_ct[370] = ct[186];
  b_ct[371] = ct[190];
  b_ct[372] = ct[194];
  b_ct[373] = ct[199];
  b_ct[374] = ct[203];
  b_ct[375] = ct[206];
  b_ct[376] = ct[213];
  b_ct[377] = -ct[189];
  b_ct[378] = ct[222];
  b_ct[379] = ct[225];
  b_ct[380] = ct[230];
  b_ct[381] = ct[249];
  b_ct[382] = ct[258];
  b_ct[383] = t495;
  b_ct[384] = ct[259];
  b_ct[385] = t505;
  b_ct[386] = ct[260];
  b_ct[387] = ct[262];
  b_ct[388] = ct[267];
  b_ct[389] = ct[273];
  b_ct[390] = ct[283];
  b_ct[391] = ct[285];
  b_ct[392] = ct[289];
  b_ct[393] = t568;
  b_ct[394] = t575;
  b_ct[395] = ct[321] * t574;
  b_ct[396] = t589;
  b_ct[397] = t594;
  b_ct[398] = t595;
  b_ct[399] = t597;
  b_ct[400] = ct_idx_143;
  b_ct[401] = ct[299];
  b_ct[402] = t601;
  b_ct[403] = ct[300];
  b_ct[404] = t618;
  b_ct[405] = ct_idx_161;
  b_ct[406] = ct[302];
  b_ct[407] = ct[249] * t617;
  b_ct[408] = ct_idx_177;
  b_ct[409] = ct[303];
  b_ct[410] = ct[304];
  b_ct[411] = t667;
  b_ct[412] = ct_idx_196;
  b_ct[413] = t675;
  b_ct[414] = t685;
  b_ct[415] = ct[306];
  b_ct[416] = ct[24] * t641;
  b_ct[417] = ct[19] * t642;
  b_ct[418] = ct[307];
  b_ct[419] = ct_idx_221;
  b_ct[420] = t704;
  b_ct[421] = ct_idx_230;
  b_ct[422] = t719;
  b_ct[423] = t722;
  b_ct[424] = t723;
  b_ct[425] = ct_idx_241;
  b_ct[426] = t740;
  b_ct[427] = t744;
  b_ct[428] = t745;
  b_ct[429] = ct_idx_250;
  b_ct[430] = ct[315];
  b_ct[431] = ct_idx_258;
  b_ct[432] = ct_idx_260;
  b_ct[433] = ct_idx_266;
  b_ct[434] = t777;
  b_ct[435] = ct[321];
  b_ct[436] = ct_idx_279;
  b_ct[437] = ct[322];
  b_ct[438] = ct_idx_283;
  b_ct[439] = t794;
  b_ct[440] = ct[324];
  b_ct[441] = ct_idx_288;
  b_ct[442] = ct_idx_289;
  b_ct[443] = ct[325];
  b_ct[444] = t800;
  b_ct[445] = ct_idx_298;
  b_ct[446] = t808;
  b_ct[447] = ct[327];
  b_ct[448] = -t808;
  b_ct[449] = t839;
  b_ct[450] = ct_idx_332;
  b_ct[451] = ct[331];
  b_ct[452] = ct_idx_340;
  b_ct[453] = ct_idx_344;
  b_ct[454] = t863;
  b_ct[455] = ct_idx_347;
  b_ct[456] = t865;
  b_ct[457] = ct_idx_355;
  b_ct[458] = t877;
  b_ct[459] = ct[249] * t858;
  b_ct[460] = t885;
  b_ct[461] = t890;
  b_ct[462] = ct_idx_367;
  b_ct[463] = t895;
  b_ct[464] = ct_idx_386;
  b_ct[465] = ct[20] * ct_idx_347;
  b_ct[466] = t934;
  b_ct[467] = ct_idx_400;
  b_ct[468] = ct_idx_401;
  b_ct[469] = t956;
  b_ct[470] = t960;
  b_ct[471] = ct_idx_406;
  b_ct[472] = t966;
  b_ct[473] = ct_idx_415;
  b_ct[474] = t979;
  b_ct[475] = ct_idx_421;
  b_ct[476] = ct_idx_423;
  b_ct[477] = -t979;
  b_ct[478] = ct_idx_427;
  b_ct[479] = ct_idx_432;
  return ft_3(b_ct);
}

// End of code generation (Cqdq_dq6.cpp)
