// Copyright (C) 2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <ngraph/op/floor_mod.hpp>

#include "elementwise_binary.hpp"
#include "kernels/floor_mod.hpp"

namespace CUDAPlugin {

using FloorModOp = ElementwiseBinaryOp<ngraph::op::v1::FloorMod, kernel::FloorMod>;

}  // namespace CUDAPlugin