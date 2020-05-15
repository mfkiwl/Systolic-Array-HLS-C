// ----------------------------------------------------------------------------
// SystemC Wrapper for Catapult Design HDL Netlist
//
//    HLS version: 10.4b/841621 Production Release
//       HLS date: Thu Oct 24 17:20:07 PDT 2019
//  Flow Packages: HDL_Tcl 8.0a, SCVerify 10.4
//
//   Generated by: billyk@cad.eecs.harvard.edu
// Generated date: Fri Apr 17 23:30:12 EDT 2020
//
// ----------------------------------------------------------------------------
#ifndef INCLUDED_CCS_DUT_WRAPPER_H
#define INCLUDED_CCS_DUT_WRAPPER_H

#ifndef SC_USE_STD_STRING
#define SC_USE_STD_STRING
#endif

#include <systemc.h>
#include <mc_simulator_extensions.h>

#ifdef CCS_SYSC
namespace HDL {
#endif

#if defined(CCS_DUT_SYSC)

// alias ccs_DUT_wrapper to namespace enclosure of either cycle or RTL SystemC netlist
namespace ccs_design {
#if defined(CCS_DUT_CYCLE)
//#include "cycle.cxx"
#include "cycle.cxx"
#else
#if defined(CCS_DUT_RTL)
//#include "rtl.cxx"
#include "rtl.cxx"
#endif
#endif
}
typedef ccs_design::HDL::SysTop_rtl ccs_DUT_wrapper;

#else

// Create a foreign module wrapper around the HDL
#ifdef VCS_SYSTEMC
// VCS support - ccs_DUT_wrapper is derived from VCS-generated SystemC wrapper around HDL code

class ccs_DUT_wrapper : public TOP_HDL_ENTITY
{
public:
   ccs_DUT_wrapper(const sc_module_name& nm, const char *hdl_name)
      : TOP_HDL_ENTITY(nm)
      {
          //elaborate_foreign_module(hdl_name);
      }
   
   ~ccs_DUT_wrapper() {}
};

#else
// non VCS simulators - ccs_DUT_wrapper is derived from mc_foreign_module (adding 2nd ctor arg)

class ccs_DUT_wrapper : public mc_foreign_module
{
public:
   #ifndef VCS_SYSTEMC
   // Interface Ports
   sc_in<bool> clk;
   sc_in< sc_logic > rst;
   sc_in< sc_logic > write_req_val;
   sc_out< sc_logic > write_req_rdy;
   sc_in< sc_lv<69> > write_req_msg;
   sc_in< sc_logic > start_val;
   sc_out< sc_logic > start_rdy;
   sc_in< sc_lv<6> > start_msg;
   sc_in< sc_logic > weight_in_vec_0_val;
   sc_in< sc_logic > weight_in_vec_1_val;
   sc_in< sc_logic > weight_in_vec_2_val;
   sc_in< sc_logic > weight_in_vec_3_val;
   sc_in< sc_logic > weight_in_vec_4_val;
   sc_in< sc_logic > weight_in_vec_5_val;
   sc_in< sc_logic > weight_in_vec_6_val;
   sc_in< sc_logic > weight_in_vec_7_val;
   sc_out< sc_logic > weight_in_vec_0_rdy;
   sc_out< sc_logic > weight_in_vec_1_rdy;
   sc_out< sc_logic > weight_in_vec_2_rdy;
   sc_out< sc_logic > weight_in_vec_3_rdy;
   sc_out< sc_logic > weight_in_vec_4_rdy;
   sc_out< sc_logic > weight_in_vec_5_rdy;
   sc_out< sc_logic > weight_in_vec_6_rdy;
   sc_out< sc_logic > weight_in_vec_7_rdy;
   sc_in< sc_lv<8> > weight_in_vec_0_msg;
   sc_in< sc_lv<8> > weight_in_vec_1_msg;
   sc_in< sc_lv<8> > weight_in_vec_2_msg;
   sc_in< sc_lv<8> > weight_in_vec_3_msg;
   sc_in< sc_lv<8> > weight_in_vec_4_msg;
   sc_in< sc_lv<8> > weight_in_vec_5_msg;
   sc_in< sc_lv<8> > weight_in_vec_6_msg;
   sc_in< sc_lv<8> > weight_in_vec_7_msg;
   sc_out< sc_logic > accum_out_vec_0_val;
   sc_out< sc_logic > accum_out_vec_1_val;
   sc_out< sc_logic > accum_out_vec_2_val;
   sc_out< sc_logic > accum_out_vec_3_val;
   sc_out< sc_logic > accum_out_vec_4_val;
   sc_out< sc_logic > accum_out_vec_5_val;
   sc_out< sc_logic > accum_out_vec_6_val;
   sc_out< sc_logic > accum_out_vec_7_val;
   sc_in< sc_logic > accum_out_vec_0_rdy;
   sc_in< sc_logic > accum_out_vec_1_rdy;
   sc_in< sc_logic > accum_out_vec_2_rdy;
   sc_in< sc_logic > accum_out_vec_3_rdy;
   sc_in< sc_logic > accum_out_vec_4_rdy;
   sc_in< sc_logic > accum_out_vec_5_rdy;
   sc_in< sc_logic > accum_out_vec_6_rdy;
   sc_in< sc_logic > accum_out_vec_7_rdy;
   sc_out< sc_lv<32> > accum_out_vec_0_msg;
   sc_out< sc_lv<32> > accum_out_vec_1_msg;
   sc_out< sc_lv<32> > accum_out_vec_2_msg;
   sc_out< sc_lv<32> > accum_out_vec_3_msg;
   sc_out< sc_lv<32> > accum_out_vec_4_msg;
   sc_out< sc_lv<32> > accum_out_vec_5_msg;
   sc_out< sc_lv<32> > accum_out_vec_6_msg;
   sc_out< sc_lv<32> > accum_out_vec_7_msg;
   #endif
   
public:
   ccs_DUT_wrapper(const sc_module_name& nm, const char *hdl_name)
      : mc_foreign_module(nm,hdl_name)
      #ifndef VCS_SYSTEMC
      ,clk("clk")
      ,rst("rst")
      ,write_req_val("write_req_val")
      ,write_req_rdy("write_req_rdy")
      ,write_req_msg("write_req_msg")
      ,start_val("start_val")
      ,start_rdy("start_rdy")
      ,start_msg("start_msg")
      ,weight_in_vec_0_val("weight_in_vec_0_val")
      ,weight_in_vec_1_val("weight_in_vec_1_val")
      ,weight_in_vec_2_val("weight_in_vec_2_val")
      ,weight_in_vec_3_val("weight_in_vec_3_val")
      ,weight_in_vec_4_val("weight_in_vec_4_val")
      ,weight_in_vec_5_val("weight_in_vec_5_val")
      ,weight_in_vec_6_val("weight_in_vec_6_val")
      ,weight_in_vec_7_val("weight_in_vec_7_val")
      ,weight_in_vec_0_rdy("weight_in_vec_0_rdy")
      ,weight_in_vec_1_rdy("weight_in_vec_1_rdy")
      ,weight_in_vec_2_rdy("weight_in_vec_2_rdy")
      ,weight_in_vec_3_rdy("weight_in_vec_3_rdy")
      ,weight_in_vec_4_rdy("weight_in_vec_4_rdy")
      ,weight_in_vec_5_rdy("weight_in_vec_5_rdy")
      ,weight_in_vec_6_rdy("weight_in_vec_6_rdy")
      ,weight_in_vec_7_rdy("weight_in_vec_7_rdy")
      ,weight_in_vec_0_msg("weight_in_vec_0_msg")
      ,weight_in_vec_1_msg("weight_in_vec_1_msg")
      ,weight_in_vec_2_msg("weight_in_vec_2_msg")
      ,weight_in_vec_3_msg("weight_in_vec_3_msg")
      ,weight_in_vec_4_msg("weight_in_vec_4_msg")
      ,weight_in_vec_5_msg("weight_in_vec_5_msg")
      ,weight_in_vec_6_msg("weight_in_vec_6_msg")
      ,weight_in_vec_7_msg("weight_in_vec_7_msg")
      ,accum_out_vec_0_val("accum_out_vec_0_val")
      ,accum_out_vec_1_val("accum_out_vec_1_val")
      ,accum_out_vec_2_val("accum_out_vec_2_val")
      ,accum_out_vec_3_val("accum_out_vec_3_val")
      ,accum_out_vec_4_val("accum_out_vec_4_val")
      ,accum_out_vec_5_val("accum_out_vec_5_val")
      ,accum_out_vec_6_val("accum_out_vec_6_val")
      ,accum_out_vec_7_val("accum_out_vec_7_val")
      ,accum_out_vec_0_rdy("accum_out_vec_0_rdy")
      ,accum_out_vec_1_rdy("accum_out_vec_1_rdy")
      ,accum_out_vec_2_rdy("accum_out_vec_2_rdy")
      ,accum_out_vec_3_rdy("accum_out_vec_3_rdy")
      ,accum_out_vec_4_rdy("accum_out_vec_4_rdy")
      ,accum_out_vec_5_rdy("accum_out_vec_5_rdy")
      ,accum_out_vec_6_rdy("accum_out_vec_6_rdy")
      ,accum_out_vec_7_rdy("accum_out_vec_7_rdy")
      ,accum_out_vec_0_msg("accum_out_vec_0_msg")
      ,accum_out_vec_1_msg("accum_out_vec_1_msg")
      ,accum_out_vec_2_msg("accum_out_vec_2_msg")
      ,accum_out_vec_3_msg("accum_out_vec_3_msg")
      ,accum_out_vec_4_msg("accum_out_vec_4_msg")
      ,accum_out_vec_5_msg("accum_out_vec_5_msg")
      ,accum_out_vec_6_msg("accum_out_vec_6_msg")
      ,accum_out_vec_7_msg("accum_out_vec_7_msg")
      #endif
      {
          elaborate_foreign_module(hdl_name);
      }
      
      ~ccs_DUT_wrapper() {}
   };
   #endif
   
   #endif

#endif

#ifdef CCS_SYSC
} // end namespace HDL
#endif
