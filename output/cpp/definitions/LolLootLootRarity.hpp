#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootLootRarity_t {
    Default_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLootLootRarity_t& v) {
    switch(v) {
      case LolLootLootRarity_t::Default_E:
        j = "Default";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootLootRarity_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Default"){
      v = LolLootLootRarity_t::Default_E;
      return;
    }
  }
}
