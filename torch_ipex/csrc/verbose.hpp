#include "cpu/mkldnn/MKLDNNCommon.h"

namespace torch_ipex {

namespace verbose {

int _mkldnn_set_verbose(int level) {
  return torch_ipex::cpu::mkldnn_set_verbose(level);
}

} // namespace verbose
} // namespace torch_ipex