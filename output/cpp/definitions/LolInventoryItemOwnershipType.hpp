#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolInventoryItemOwnershipType_t {
    RENTED_E = 1,
    F2P_E = 2,
    OWNED_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolInventoryItemOwnershipType_t& v) {
    switch(v) {
      case LolInventoryItemOwnershipType_t::RENTED_E:
        j = "RENTED";
      break;
      case LolInventoryItemOwnershipType_t::F2P_E:
        j = "F2P";
      break;
      case LolInventoryItemOwnershipType_t::OWNED_E:
        j = "OWNED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolInventoryItemOwnershipType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RENTED"){
      v = LolInventoryItemOwnershipType_t::RENTED_E;
      return;
    }
    if(s == "F2P"){
      v = LolInventoryItemOwnershipType_t::F2P_E;
      return;
    }
    if(s == "OWNED"){
      v = LolInventoryItemOwnershipType_t::OWNED_E;
      return;
    }
  }
  inline std::string to_string(const LolInventoryItemOwnershipType_t& v) {
    switch(v) {
      case LolInventoryItemOwnershipType_t::RENTED_E:
        return "RENTED";
      case LolInventoryItemOwnershipType_t::F2P_E:
        return "F2P";
      case LolInventoryItemOwnershipType_t::OWNED_E:
        return "OWNED";
    }
  }

}
