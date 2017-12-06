#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootItemOwnershipStatus_t {
    FREE_E = 1,
    NONE_E = 0,
    OWNED_E = 3,
    RENTAL_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLootItemOwnershipStatus_t& v) {
    switch(v) {
      case LolLootItemOwnershipStatus_t::FREE_E:
        j = "FREE";
      break;
      case LolLootItemOwnershipStatus_t::NONE_E:
        j = "NONE";
      break;
      case LolLootItemOwnershipStatus_t::OWNED_E:
        j = "OWNED";
      break;
      case LolLootItemOwnershipStatus_t::RENTAL_E:
        j = "RENTAL";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootItemOwnershipStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "FREE"){
      v = LolLootItemOwnershipStatus_t::FREE_E;
      return;
    }
    if(s == "NONE"){
      v = LolLootItemOwnershipStatus_t::NONE_E;
      return;
    }
    if(s == "OWNED"){
      v = LolLootItemOwnershipStatus_t::OWNED_E;
      return;
    }
    if(s == "RENTAL"){
      v = LolLootItemOwnershipStatus_t::RENTAL_E;
      return;
    }
  }
}
