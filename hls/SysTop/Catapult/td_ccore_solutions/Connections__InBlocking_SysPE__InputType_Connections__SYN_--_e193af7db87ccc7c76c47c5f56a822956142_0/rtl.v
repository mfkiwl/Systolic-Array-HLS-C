// ----------------------------------------------------------------------
//  HLS HDL:        Verilog Netlister
//  HLS Version:    10.4b/841621 Production Release
//  HLS Date:       Thu Oct 24 17:20:07 PDT 2019
// 
//  Generated by:   billyk@cad.eecs.harvard.edu
//  Generated date: Fri Apr 17 23:09:55 2020
// ----------------------------------------------------------------------

// 
// ------------------------------------------------------------------
//  Design Unit:    Connections_InBlocking_SysPE_InputType_Connections_SYN_PORT_PopNB_core
// ------------------------------------------------------------------


module Connections_InBlocking_SysPE_InputType_Connections_SYN_PORT_PopNB_core (
  this_val, this_rdy, this_msg, data_rsc_z, return_rsc_z, ccs_ccore_start_rsc_dat,
      ccs_MIO_clk, ccs_MIO_arst
);
  input this_val;
  output this_rdy;
  reg this_rdy;
  input [7:0] this_msg;
  output [7:0] data_rsc_z;
  output return_rsc_z;
  input ccs_ccore_start_rsc_dat;
  input ccs_MIO_clk;
  input ccs_MIO_arst;


  // Interconnect Declarations
  wire ccs_ccore_start_rsci_idat;
  reg asn_itm_1;


  // Interconnect Declarations for Component Instantiations 
  wire [7:0] nl_data_rsci_d;
  assign nl_data_rsci_d = this_msg;
  mgc_out_dreg_v2 #(.rscid(32'sd1),
  .width(32'sd8)) data_rsci (
      .d(nl_data_rsci_d[7:0]),
      .z(data_rsc_z)
    );
  mgc_out_dreg_v2 #(.rscid(32'sd3),
  .width(32'sd1)) return_rsci (
      .d(this_val),
      .z(return_rsc_z)
    );
  ccs_in_v1 #(.rscid(32'sd329),
  .width(32'sd1)) ccs_ccore_start_rsci (
      .dat(ccs_ccore_start_rsc_dat),
      .idat(ccs_ccore_start_rsci_idat)
    );
  always @(posedge ccs_MIO_clk or negedge ccs_MIO_arst) begin
    if ( ~ ccs_MIO_arst ) begin
      this_rdy <= 1'b0;
    end
    else if ( ccs_ccore_start_rsci_idat | asn_itm_1 ) begin
      this_rdy <= ccs_ccore_start_rsci_idat;
    end
  end
  always @(posedge ccs_MIO_clk or negedge ccs_MIO_arst) begin
    if ( ~ ccs_MIO_arst ) begin
      asn_itm_1 <= 1'b0;
    end
    else begin
      asn_itm_1 <= ccs_ccore_start_rsci_idat;
    end
  end
endmodule

// ------------------------------------------------------------------
//  Design Unit:    Connections_InBlocking_SysPE_InputType_Connections_SYN_PORT_PopNB
// ------------------------------------------------------------------


module Connections_InBlocking_SysPE_InputType_Connections_SYN_PORT_PopNB (
  this_val, this_rdy, this_msg, data_rsc_z, return_rsc_z, ccs_ccore_start_rsc_dat,
      ccs_MIO_clk, ccs_MIO_arst
);
  input this_val;
  output this_rdy;
  input [7:0] this_msg;
  output [7:0] data_rsc_z;
  output return_rsc_z;
  input ccs_ccore_start_rsc_dat;
  input ccs_MIO_clk;
  input ccs_MIO_arst;



  // Interconnect Declarations for Component Instantiations 
  Connections_InBlocking_SysPE_InputType_Connections_SYN_PORT_PopNB_core Connections_InBlocking_SysPE_InputType_Connections_SYN_PORT_PopNB_core_inst
      (
      .this_val(this_val),
      .this_rdy(this_rdy),
      .this_msg(this_msg),
      .data_rsc_z(data_rsc_z),
      .return_rsc_z(return_rsc_z),
      .ccs_ccore_start_rsc_dat(ccs_ccore_start_rsc_dat),
      .ccs_MIO_clk(ccs_MIO_clk),
      .ccs_MIO_arst(ccs_MIO_arst)
    );
endmodule



