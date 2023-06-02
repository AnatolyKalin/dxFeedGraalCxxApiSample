// Copyright (c) 2023 Devexperts LLC.
// SPDX-License-Identifier: MPL-2.0

#include <dxfg_api.h>

#include <dxfeed_graal_c_api/api.h>
#include <dxfeed_graal_cpp_api/api.hpp>

#include <memory>

namespace dxfcpp {

template <typename SymbolIt> void *SymbolMapper::toNativeList(SymbolIt /*begin*/, SymbolIt /*end*/) noexcept {

    return nullptr;
}

} // namespace dxfcpp