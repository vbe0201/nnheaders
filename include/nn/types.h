#pragma once

#include <cstddef>
#include <cstdint>

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;
using u128 = __uint128_t;

using s8 = std::int8_t;
using s16 = std::int16_t;
using s32 = std::int32_t;
using s64 = std::int64_t;

using f32 = float;
using f64 = double;

using char16 = char16_t;
using size_t = std::size_t;
using ulong = u64;

namespace nn {

class Result {
public:
    // based on assertions
    bool IsSuccess() const { return raw == 0; }
    u32 GetModule() const { return raw & 0x1FFu; }
    u32 GetDescription() const { return (raw >> 9u) & 0x1FFFu; }

    u32 raw;
};

}  // namespace nn
