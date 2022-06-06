// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "conv1d_input_V"
#define AUTOTB_TVIN_conv1d_input_V  "../tv/cdatafile/c.myproject.autotvin_conv1d_input_V.dat"
// wrapc file define: "layer12_out_0_V"
#define AUTOTB_TVOUT_layer12_out_0_V  "../tv/cdatafile/c.myproject.autotvout_layer12_out_0_V.dat"
// wrapc file define: "const_size_in_1"
#define AUTOTB_TVOUT_const_size_in_1  "../tv/cdatafile/c.myproject.autotvout_const_size_in_1.dat"
// wrapc file define: "const_size_out_1"
#define AUTOTB_TVOUT_const_size_out_1  "../tv/cdatafile/c.myproject.autotvout_const_size_out_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer12_out_0_V"
#define AUTOTB_TVOUT_PC_layer12_out_0_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer12_out_0_V.dat"
// tvout file define: "const_size_in_1"
#define AUTOTB_TVOUT_PC_const_size_in_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_in_1.dat"
// tvout file define: "const_size_out_1"
#define AUTOTB_TVOUT_PC_const_size_out_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_out_1.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			conv1d_input_V_depth = 0;
			layer12_out_0_V_depth = 0;
			const_size_in_1_depth = 0;
			const_size_out_1_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{conv1d_input_V " << conv1d_input_V_depth << "}\n";
			total_list << "{layer12_out_0_V " << layer12_out_0_V_depth << "}\n";
			total_list << "{const_size_in_1 " << const_size_in_1_depth << "}\n";
			total_list << "{const_size_out_1 " << const_size_out_1_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int conv1d_input_V_depth;
		int layer12_out_0_V_depth;
		int const_size_in_1_depth;
		int const_size_out_1_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void myproject (
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> conv1d_input[130],
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> layer12_out[1],
unsigned short (&const_size_in_1),
unsigned short (&const_size_out_1));

void AESL_WRAP_myproject (
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> conv1d_input[130],
ap_fixed<16, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> layer12_out[1],
unsigned short (&const_size_in_1),
unsigned short (&const_size_out_1))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "layer12_out_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer12_out_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer12_out_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer12_out_0_V, AESL_token); // data

			sc_bv<16> *layer12_out_0_V_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer12_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer12_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer12_out_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer12_out_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer12_out_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer12_out_0_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer12_out.V(15, 0)
						// {
							sc_lv<16>* layer12_out_V_lv0_0_0_2 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer12_out.V(15, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(layer12_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer12_out_V_lv0_0_0_2[hls_map_index].range(15, 0) = sc_bv<16>(layer12_out_0_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer12_out.V(15, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : layer12_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer12_out[0]
								// output_left_conversion : (layer12_out[i_0]).range()
								// output_type_conversion : (layer12_out_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer12_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer12_out[i_0]).range() = (layer12_out_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer12_out_0_V_pc_buffer;
		}

		// output port post check: "const_size_in_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data

			sc_bv<16> *const_size_in_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_in_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_1(15, 0)
						// {
							sc_lv<16>* const_size_in_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_1
								// output_left_conversion : const_size_in_1
								// output_type_conversion : (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1 = (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_1_pc_buffer;
		}

		// output port post check: "const_size_out_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data

			sc_bv<16> *const_size_out_1_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					const_size_out_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_out_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_out_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_out_1(15, 0)
						// {
							sc_lv<16>* const_size_out_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_out_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_out_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_out_1
								// output_left_conversion : const_size_out_1
								// output_type_conversion : (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1 = (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_out_1_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "conv1d_input_V"
		char* tvin_conv1d_input_V = new char[525];
		aesl_fh.touch(AUTOTB_TVIN_conv1d_input_V);

		// "layer12_out_0_V"
		char* tvout_layer12_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer12_out_0_V);

		// "const_size_in_1"
		char* tvout_const_size_in_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_1);

		// "const_size_out_1"
		char* tvout_const_size_out_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_out_1);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_conv1d_input_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_conv1d_input_V, tvin_conv1d_input_V);

		sc_bv<2080>* conv1d_input_V_tvin_wrapc_buffer = new sc_bv<2080>[1];

		// RTL Name: conv1d_input_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(31, 16)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(31, 16) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(47, 32)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(47, 32) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(63, 48)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(63, 48) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(79, 64)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(79, 64) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(95, 80)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(95, 80) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(111, 96)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(111, 96) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(127, 112)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(127, 112) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(143, 128)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(143, 128) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(159, 144)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(159, 144) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(175, 160)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(175, 160) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(191, 176)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(191, 176) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(207, 192)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(207, 192) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(223, 208)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(223, 208) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(239, 224)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(239, 224) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(255, 240)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(255, 240) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(271, 256)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (16) => (16) @ (2)
					for (int i_0 = 16; i_0 <= 16; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(271, 256) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(287, 272)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (17) => (17) @ (2)
					for (int i_0 = 17; i_0 <= 17; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(287, 272) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(303, 288)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (18) => (18) @ (2)
					for (int i_0 = 18; i_0 <= 18; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(303, 288) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(319, 304)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (19) => (19) @ (2)
					for (int i_0 = 19; i_0 <= 19; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(319, 304) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(335, 320)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (20) => (20) @ (2)
					for (int i_0 = 20; i_0 <= 20; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(335, 320) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(351, 336)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (21) => (21) @ (2)
					for (int i_0 = 21; i_0 <= 21; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(351, 336) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(367, 352)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (22) => (22) @ (2)
					for (int i_0 = 22; i_0 <= 22; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(367, 352) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(383, 368)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (23) => (23) @ (2)
					for (int i_0 = 23; i_0 <= 23; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(383, 368) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(399, 384)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (24) => (24) @ (2)
					for (int i_0 = 24; i_0 <= 24; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(399, 384) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(415, 400)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (25) => (25) @ (2)
					for (int i_0 = 25; i_0 <= 25; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(415, 400) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(431, 416)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (26) => (26) @ (2)
					for (int i_0 = 26; i_0 <= 26; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(431, 416) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(447, 432)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (27) => (27) @ (2)
					for (int i_0 = 27; i_0 <= 27; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(447, 432) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(463, 448)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (28) => (28) @ (2)
					for (int i_0 = 28; i_0 <= 28; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(463, 448) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(479, 464)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (29) => (29) @ (2)
					for (int i_0 = 29; i_0 <= 29; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(479, 464) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(495, 480)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (30) => (30) @ (2)
					for (int i_0 = 30; i_0 <= 30; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(495, 480) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(511, 496)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (31) => (31) @ (2)
					for (int i_0 = 31; i_0 <= 31; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(511, 496) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(527, 512)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (32) => (32) @ (2)
					for (int i_0 = 32; i_0 <= 32; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(527, 512) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(543, 528)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (33) => (33) @ (2)
					for (int i_0 = 33; i_0 <= 33; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(543, 528) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(559, 544)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (34) => (34) @ (2)
					for (int i_0 = 34; i_0 <= 34; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(559, 544) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(575, 560)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (35) => (35) @ (2)
					for (int i_0 = 35; i_0 <= 35; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(575, 560) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(591, 576)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (36) => (36) @ (2)
					for (int i_0 = 36; i_0 <= 36; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(591, 576) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(607, 592)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (37) => (37) @ (2)
					for (int i_0 = 37; i_0 <= 37; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(607, 592) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(623, 608)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (38) => (38) @ (2)
					for (int i_0 = 38; i_0 <= 38; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(623, 608) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(639, 624)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (39) => (39) @ (2)
					for (int i_0 = 39; i_0 <= 39; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(639, 624) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(655, 640)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (40) => (40) @ (2)
					for (int i_0 = 40; i_0 <= 40; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(655, 640) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(671, 656)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (41) => (41) @ (2)
					for (int i_0 = 41; i_0 <= 41; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(671, 656) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(687, 672)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (42) => (42) @ (2)
					for (int i_0 = 42; i_0 <= 42; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(687, 672) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(703, 688)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (43) => (43) @ (2)
					for (int i_0 = 43; i_0 <= 43; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(703, 688) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(719, 704)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (44) => (44) @ (2)
					for (int i_0 = 44; i_0 <= 44; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(719, 704) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(735, 720)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (45) => (45) @ (2)
					for (int i_0 = 45; i_0 <= 45; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(735, 720) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(751, 736)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (46) => (46) @ (2)
					for (int i_0 = 46; i_0 <= 46; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(751, 736) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(767, 752)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (47) => (47) @ (2)
					for (int i_0 = 47; i_0 <= 47; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(767, 752) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(783, 768)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (48) => (48) @ (2)
					for (int i_0 = 48; i_0 <= 48; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(783, 768) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(799, 784)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (49) => (49) @ (2)
					for (int i_0 = 49; i_0 <= 49; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(799, 784) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(815, 800)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (50) => (50) @ (2)
					for (int i_0 = 50; i_0 <= 50; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(815, 800) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(831, 816)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (51) => (51) @ (2)
					for (int i_0 = 51; i_0 <= 51; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(831, 816) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(847, 832)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (52) => (52) @ (2)
					for (int i_0 = 52; i_0 <= 52; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(847, 832) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(863, 848)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (53) => (53) @ (2)
					for (int i_0 = 53; i_0 <= 53; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(863, 848) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(879, 864)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (54) => (54) @ (2)
					for (int i_0 = 54; i_0 <= 54; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(879, 864) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(895, 880)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (55) => (55) @ (2)
					for (int i_0 = 55; i_0 <= 55; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(895, 880) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(911, 896)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (56) => (56) @ (2)
					for (int i_0 = 56; i_0 <= 56; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(911, 896) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(927, 912)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (57) => (57) @ (2)
					for (int i_0 = 57; i_0 <= 57; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(927, 912) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(943, 928)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (58) => (58) @ (2)
					for (int i_0 = 58; i_0 <= 58; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(943, 928) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(959, 944)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (59) => (59) @ (2)
					for (int i_0 = 59; i_0 <= 59; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(959, 944) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(975, 960)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (60) => (60) @ (2)
					for (int i_0 = 60; i_0 <= 60; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(975, 960) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(991, 976)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (61) => (61) @ (2)
					for (int i_0 = 61; i_0 <= 61; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(991, 976) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1007, 992)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (62) => (62) @ (2)
					for (int i_0 = 62; i_0 <= 62; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1007, 992) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1023, 1008)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (63) => (63) @ (2)
					for (int i_0 = 63; i_0 <= 63; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1023, 1008) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1039, 1024)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (64) => (64) @ (2)
					for (int i_0 = 64; i_0 <= 64; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1039, 1024) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1055, 1040)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (65) => (65) @ (2)
					for (int i_0 = 65; i_0 <= 65; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1055, 1040) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1071, 1056)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (66) => (66) @ (2)
					for (int i_0 = 66; i_0 <= 66; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1071, 1056) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1087, 1072)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (67) => (67) @ (2)
					for (int i_0 = 67; i_0 <= 67; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1087, 1072) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1103, 1088)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (68) => (68) @ (2)
					for (int i_0 = 68; i_0 <= 68; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1103, 1088) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1119, 1104)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (69) => (69) @ (2)
					for (int i_0 = 69; i_0 <= 69; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1119, 1104) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1135, 1120)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (70) => (70) @ (2)
					for (int i_0 = 70; i_0 <= 70; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1135, 1120) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1151, 1136)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (71) => (71) @ (2)
					for (int i_0 = 71; i_0 <= 71; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1151, 1136) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1167, 1152)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (72) => (72) @ (2)
					for (int i_0 = 72; i_0 <= 72; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1167, 1152) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1183, 1168)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (73) => (73) @ (2)
					for (int i_0 = 73; i_0 <= 73; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1183, 1168) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1199, 1184)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (74) => (74) @ (2)
					for (int i_0 = 74; i_0 <= 74; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1199, 1184) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1215, 1200)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (75) => (75) @ (2)
					for (int i_0 = 75; i_0 <= 75; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1215, 1200) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1231, 1216)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (76) => (76) @ (2)
					for (int i_0 = 76; i_0 <= 76; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1231, 1216) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1247, 1232)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (77) => (77) @ (2)
					for (int i_0 = 77; i_0 <= 77; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1247, 1232) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1263, 1248)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (78) => (78) @ (2)
					for (int i_0 = 78; i_0 <= 78; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1263, 1248) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1279, 1264)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (79) => (79) @ (2)
					for (int i_0 = 79; i_0 <= 79; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1279, 1264) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1295, 1280)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (80) => (80) @ (2)
					for (int i_0 = 80; i_0 <= 80; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1295, 1280) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1311, 1296)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (81) => (81) @ (2)
					for (int i_0 = 81; i_0 <= 81; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1311, 1296) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1327, 1312)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (82) => (82) @ (2)
					for (int i_0 = 82; i_0 <= 82; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1327, 1312) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1343, 1328)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (83) => (83) @ (2)
					for (int i_0 = 83; i_0 <= 83; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1343, 1328) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1359, 1344)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (84) => (84) @ (2)
					for (int i_0 = 84; i_0 <= 84; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1359, 1344) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1375, 1360)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (85) => (85) @ (2)
					for (int i_0 = 85; i_0 <= 85; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1375, 1360) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1391, 1376)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (86) => (86) @ (2)
					for (int i_0 = 86; i_0 <= 86; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1391, 1376) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1407, 1392)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (87) => (87) @ (2)
					for (int i_0 = 87; i_0 <= 87; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1407, 1392) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1423, 1408)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (88) => (88) @ (2)
					for (int i_0 = 88; i_0 <= 88; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1423, 1408) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1439, 1424)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (89) => (89) @ (2)
					for (int i_0 = 89; i_0 <= 89; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1439, 1424) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1455, 1440)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (90) => (90) @ (2)
					for (int i_0 = 90; i_0 <= 90; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1455, 1440) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1471, 1456)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (91) => (91) @ (2)
					for (int i_0 = 91; i_0 <= 91; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1471, 1456) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1487, 1472)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (92) => (92) @ (2)
					for (int i_0 = 92; i_0 <= 92; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1487, 1472) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1503, 1488)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (93) => (93) @ (2)
					for (int i_0 = 93; i_0 <= 93; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1503, 1488) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1519, 1504)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (94) => (94) @ (2)
					for (int i_0 = 94; i_0 <= 94; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1519, 1504) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1535, 1520)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (95) => (95) @ (2)
					for (int i_0 = 95; i_0 <= 95; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1535, 1520) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1551, 1536)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (96) => (96) @ (2)
					for (int i_0 = 96; i_0 <= 96; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1551, 1536) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1567, 1552)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (97) => (97) @ (2)
					for (int i_0 = 97; i_0 <= 97; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1567, 1552) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1583, 1568)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (98) => (98) @ (2)
					for (int i_0 = 98; i_0 <= 98; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1583, 1568) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1599, 1584)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (99) => (99) @ (2)
					for (int i_0 = 99; i_0 <= 99; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1599, 1584) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1615, 1600)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (100) => (100) @ (2)
					for (int i_0 = 100; i_0 <= 100; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1615, 1600) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1631, 1616)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (101) => (101) @ (2)
					for (int i_0 = 101; i_0 <= 101; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1631, 1616) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1647, 1632)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (102) => (102) @ (2)
					for (int i_0 = 102; i_0 <= 102; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1647, 1632) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1663, 1648)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (103) => (103) @ (2)
					for (int i_0 = 103; i_0 <= 103; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1663, 1648) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1679, 1664)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (104) => (104) @ (2)
					for (int i_0 = 104; i_0 <= 104; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1679, 1664) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1695, 1680)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (105) => (105) @ (2)
					for (int i_0 = 105; i_0 <= 105; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1695, 1680) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1711, 1696)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (106) => (106) @ (2)
					for (int i_0 = 106; i_0 <= 106; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1711, 1696) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1727, 1712)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (107) => (107) @ (2)
					for (int i_0 = 107; i_0 <= 107; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1727, 1712) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1743, 1728)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (108) => (108) @ (2)
					for (int i_0 = 108; i_0 <= 108; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1743, 1728) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1759, 1744)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (109) => (109) @ (2)
					for (int i_0 = 109; i_0 <= 109; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1759, 1744) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1775, 1760)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (110) => (110) @ (2)
					for (int i_0 = 110; i_0 <= 110; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1775, 1760) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1791, 1776)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (111) => (111) @ (2)
					for (int i_0 = 111; i_0 <= 111; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1791, 1776) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1807, 1792)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (112) => (112) @ (2)
					for (int i_0 = 112; i_0 <= 112; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1807, 1792) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1823, 1808)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (113) => (113) @ (2)
					for (int i_0 = 113; i_0 <= 113; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1823, 1808) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1839, 1824)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (114) => (114) @ (2)
					for (int i_0 = 114; i_0 <= 114; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1839, 1824) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1855, 1840)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (115) => (115) @ (2)
					for (int i_0 = 115; i_0 <= 115; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1855, 1840) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1871, 1856)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (116) => (116) @ (2)
					for (int i_0 = 116; i_0 <= 116; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1871, 1856) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1887, 1872)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (117) => (117) @ (2)
					for (int i_0 = 117; i_0 <= 117; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1887, 1872) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1903, 1888)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (118) => (118) @ (2)
					for (int i_0 = 118; i_0 <= 118; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1903, 1888) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1919, 1904)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (119) => (119) @ (2)
					for (int i_0 = 119; i_0 <= 119; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1919, 1904) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1935, 1920)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (120) => (120) @ (2)
					for (int i_0 = 120; i_0 <= 120; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1935, 1920) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1951, 1936)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (121) => (121) @ (2)
					for (int i_0 = 121; i_0 <= 121; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1951, 1936) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1967, 1952)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (122) => (122) @ (2)
					for (int i_0 = 122; i_0 <= 122; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1967, 1952) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1983, 1968)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (123) => (123) @ (2)
					for (int i_0 = 123; i_0 <= 123; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1983, 1968) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(1999, 1984)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (124) => (124) @ (2)
					for (int i_0 = 124; i_0 <= 124; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(1999, 1984) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(2015, 2000)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (125) => (125) @ (2)
					for (int i_0 = 125; i_0 <= 125; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(2015, 2000) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(2031, 2016)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (126) => (126) @ (2)
					for (int i_0 = 126; i_0 <= 126; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(2031, 2016) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(2047, 2032)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (127) => (127) @ (2)
					for (int i_0 = 127; i_0 <= 127; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(2047, 2032) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(2063, 2048)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (128) => (128) @ (2)
					for (int i_0 = 128; i_0 <= 128; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(2063, 2048) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(2079, 2064)
			{
				int hls_map_index = 0;
				// celement: conv1d_input.V(15, 0)
				{
					// carray: (129) => (129) @ (2)
					for (int i_0 = 129; i_0 <= 129; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : conv1d_input[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : conv1d_input[0]
						// regulate_c_name       : conv1d_input_V
						// input_type_conversion : (conv1d_input[i_0]).range().to_string(SC_BIN).c_str()
						if (&(conv1d_input[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> conv1d_input_V_tmp_mem;
							conv1d_input_V_tmp_mem = (conv1d_input[i_0]).range().to_string(SC_BIN).c_str();
							conv1d_input_V_tvin_wrapc_buffer[hls_map_index].range(2079, 2064) = conv1d_input_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_conv1d_input_V, "%s\n", (conv1d_input_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_conv1d_input_V, tvin_conv1d_input_V);
		}

		tcl_file.set_num(1, &tcl_file.conv1d_input_V_depth);
		sprintf(tvin_conv1d_input_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_conv1d_input_V, tvin_conv1d_input_V);

		// release memory allocation
		delete [] conv1d_input_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		myproject(conv1d_input, layer12_out, const_size_in_1, const_size_out_1);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_layer12_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer12_out_0_V, tvout_layer12_out_0_V);

		sc_bv<16>* layer12_out_0_V_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: layer12_out_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer12_out.V(15, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : layer12_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer12_out[0]
						// regulate_c_name       : layer12_out_V
						// input_type_conversion : (layer12_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer12_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer12_out_V_tmp_mem;
							layer12_out_V_tmp_mem = (layer12_out[i_0]).range().to_string(SC_BIN).c_str();
							layer12_out_0_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer12_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_layer12_out_0_V, "%s\n", (layer12_out_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer12_out_0_V, tvout_layer12_out_0_V);
		}

		tcl_file.set_num(1, &tcl_file.layer12_out_0_V_depth);
		sprintf(tvout_layer12_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer12_out_0_V, tvout_layer12_out_0_V);

		// release memory allocation
		delete [] layer12_out_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_in_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		sc_bv<16>* const_size_in_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_1
						// regulate_c_name       : const_size_in_1
						// input_type_conversion : const_size_in_1
						if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_1_tmp_mem;
							const_size_in_1_tmp_mem = const_size_in_1;
							const_size_in_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_1, "%s\n", (const_size_in_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_1_depth);
		sprintf(tvout_const_size_in_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		// release memory allocation
		delete [] const_size_in_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_out_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		sc_bv<16>* const_size_out_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_out_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_out_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_out_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_out_1
						// regulate_c_name       : const_size_out_1
						// input_type_conversion : const_size_out_1
						if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_out_1_tmp_mem;
							const_size_out_1_tmp_mem = const_size_out_1;
							const_size_out_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_out_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_out_1, "%s\n", (const_size_out_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_out_1_depth);
		sprintf(tvout_const_size_out_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		// release memory allocation
		delete [] const_size_out_1_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "conv1d_input_V"
		delete [] tvin_conv1d_input_V;
		// release memory allocation: "layer12_out_0_V"
		delete [] tvout_layer12_out_0_V;
		// release memory allocation: "const_size_in_1"
		delete [] tvout_const_size_in_1;
		// release memory allocation: "const_size_out_1"
		delete [] tvout_const_size_out_1;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

