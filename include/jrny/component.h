#pragma once

#include <bitset>
#include <cstdint>

namespace jrny
{

using ComponentType = std::uint8_t;
const std::uint8_t MAX_COMPONENT = 32;
using Signature = std::bitset<MAX_COMPONENT>;

}
