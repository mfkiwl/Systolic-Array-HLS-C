// ----------------------------------------------------------------------
//  HLS HDL:        Verilog Netlister
//  HLS Version:    10.4b/841621 Production Release
//  HLS Date:       Thu Oct 24 17:20:07 PDT 2019
// 
//  Generated by:   billyk@cad.eecs.harvard.edu
//  Generated date: Thu Apr 16 13:52:59 2020
// ----------------------------------------------------------------------

// 
// ------------------------------------------------------------------
//  Design Unit:    Connections_OutBlocking_SysPE_InputType_Connections_SYN_PORT_PushNB_core
// ------------------------------------------------------------------


module Connections_OutBlocking_SysPE_InputType_Connections_SYN_PORT_PushNB_core (
  this_val, this_rdy, this_msg, m_rsc_dat, return_rsc_z, ccs_ccore_start_rsc_dat,
      ccs_MIO_clk, ccs_MIO_arst
);
  output this_val;
  reg this_val;
  input this_rdy;
  output [7:0] this_msg;
  reg [7:0] this_msg;
  input [7:0] m_rsc_dat;
  output return_rsc_z;
  input ccs_ccore_start_rsc_dat;
  input ccs_MIO_clk;
  input ccs_MIO_arst;


  // Interconnect Declarations
  wire [7:0] m_rsci_idat;
  wire ccs_ccore_start_rsci_idat;
  wire or_dcpl;
  reg asn_itm_1;


  // Interconnect Declarations for Component Instantiations 
  ccs_in_v1 #(.rscid(32'sd4),
  .width(32'sd8)) m_rsci (
      .dat(m_rsc_dat),
      .idat(m_rsci_idat)
    );
  mgc_out_dreg_v2 #(.rscid(32'sd6),
  .width(32'sd1)) return_rsci (
      .d(this_rdy),
      .z(return_rsc_z)
    );
  ccs_in_v1 #(.rscid(32'sd21),
  .width(32'sd1)) ccs_ccore_start_rsci (
      .dat(ccs_ccore_start_rsc_dat),
      .idat(ccs_ccore_start_rsci_idat)
    );
  assign or_dcpl = ccs_ccore_start_rsci_idat | asn_itm_1;
  always @(posedge ccs_MIO_clk or negedge ccs_MIO_arst) begin
    if ( ~ ccs_MIO_arst ) begin
      this_msg <= 8'b00000000;
      this_val <= 1'b0;
    end
    else if ( or_dcpl ) begin
      this_msg <= MUX_v_8_2_2(8'b00000000, m_rsci_idat, ccs_ccore_start_rsci_idat);
      this_val <= ccs_ccore_start_rsci_idat;
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

  function automatic [7:0] MUX_v_8_2_2;
    input [7:0] input_0;
    input [7:0] input_1;
    input [0:0] sel;
    reg [7:0] result;
  begin
    case (sel)
      1'b0 : begin
        result = input_0;
      end
      default : begin
        result = input_1;
      end
    endcase
    MUX_v_8_2_2 = result;
  end
  endfunction

endmodule

// ------------------------------------------------------------------
//  Design Unit:    Connections_OutBlocking_SysPE_InputType_Connections_SYN_PORT_PushNB
// ------------------------------------------------------------------


module Connections_OutBlocking_SysPE_InputType_Connections_SYN_PORT_PushNB (
  this_val, this_rdy, this_msg, m_rsc_dat, return_rsc_z, ccs_ccore_start_rsc_dat,
      ccs_MIO_clk, ccs_MIO_arst
);
  output this_val;
  input this_rdy;
  output [7:0] this_msg;
  input [7:0] m_rsc_dat;
  output return_rsc_z;
  input ccs_ccore_start_rsc_dat;
  input ccs_MIO_clk;
  input ccs_MIO_arst;



  // Interconnect Declarations for Component Instantiations 
  Connections_OutBlocking_SysPE_InputType_Connections_SYN_PORT_PushNB_core Connections_OutBlocking_SysPE_InputType_Connections_SYN_PORT_PushNB_core_inst
      (
      .this_val(this_val),
      .this_rdy(this_rdy),
      .this_msg(this_msg),
      .m_rsc_dat(m_rsc_dat),
      .return_rsc_z(return_rsc_z),
      .ccs_ccore_start_rsc_dat(ccs_ccore_start_rsc_dat),
      .ccs_MIO_clk(ccs_MIO_clk),
      .ccs_MIO_arst(ccs_MIO_arst)
    );
endmodule


