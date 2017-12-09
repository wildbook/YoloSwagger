#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootInventoryOwnership_t {
    F2P_E = 2,
    OWNED_E = 0,
    RENTED_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLootInventoryOwnership_t& v) {
    switch(v) {
      case LolLootInventoryOwnership_t::F2P_E:
        j = "F2P";
      break;
      case LolLootInventoryOwnership_t::OWNED_E:
        j = "OWNED";
      break;
      case LolLootInventoryOwnership_t::RENTED_E:
        j = "RENTED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootInventoryOwnership_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "F2P"){
      v = LolLootInventoryOwnership_t::F2P_E;
      return;
    }
    if(s == "OWNED"){
      v = LolLootInventoryOwnership_t::OWNED_E;
      return;
    }
    if(s == "RENTED"){
      v = LolLootInventoryOwnership_t::RENTED_E;
      return;
    }
  }
  inline std::string to_string(const LolLootInventoryOwnership_t& v) {
    switch(v) {
      case LolLootInventoryOwnership_t::F2P_E:
        return "F2P";
      case LolLootInventoryOwnership_t::OWNED_E:
        return "OWNED";
      case LolLootInventoryOwnership_t::RENTED_E:
        return "RENTED";
    }
  }

}
