#include "relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_s::thread_zext_ln81_fu_1642_p1() {
    zext_ln81_fu_1642_p1 = esl_zext<16,15>(select_ln81_fu_1634_p3.read());
}

}

