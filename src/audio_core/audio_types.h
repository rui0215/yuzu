// Copyright 2017 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <array>
#include <cstddef>
#include <deque>
#include "common/common_types.h"

namespace AudioCore {

/// Samples per second which the Switch's audio hardware natively outputs at
constexpr int native_sample_rate = 48000; // Hz

/// Samples per audio frame at native sample rate
constexpr int samples_per_frame = 800;

/// The final output to the speakers is stereo. Preprocessing output in Source is also stereo.
using StereoFrame16 = std::array<std::array<s16, 2>, samples_per_frame>;

/// The DSP is quadraphonic internally.
using QuadFrame32 = std::array<std::array<s32, 4>, samples_per_frame>;

/// A variable length buffer of signed PCM16 stereo samples.
using StereoBuffer16 = std::deque<std::array<s16, 2>>;

} // namespace AudioCore