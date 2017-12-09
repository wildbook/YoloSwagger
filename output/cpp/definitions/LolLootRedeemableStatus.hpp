#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootRedeemableStatus_t {
    ALREADY_RENTED_E = 6,
    REDEEMABLE_E = 1,
    UNKNOWN_E = 0,
    NOT_REDEEMABLE_E = 3,
    SKIN_NOT_OWNED_E = 8,
    ALREADY_OWNED_E = 5,
    CHAMPION_NOT_OWNED_E = 7,
    REDEEMABLE_RENTAL_E = 2,
    NOT_REDEEMABLE_RENTAL_E = 4,
  };

  inline void to_json(nlohmann::json& j, const LolLootRedeemableStatus_t& v) {
    switch(v) {
      case LolLootRedeemableStatus_t::ALREADY_RENTED_E:
        j = "ALREADY_RENTED";
      break;
      case LolLootRedeemableStatus_t::REDEEMABLE_E:
        j = "REDEEMABLE";
      break;
      case LolLootRedeemableStatus_t::UNKNOWN_E:
        j = "UNKNOWN";
      break;
      case LolLootRedeemableStatus_t::NOT_REDEEMABLE_E:
        j = "NOT_REDEEMABLE";
      break;
      case LolLootRedeemableStatus_t::SKIN_NOT_OWNED_E:
        j = "SKIN_NOT_OWNED";
      break;
      case LolLootRedeemableStatus_t::ALREADY_OWNED_E:
        j = "ALREADY_OWNED";
      break;
      case LolLootRedeemableStatus_t::CHAMPION_NOT_OWNED_E:
        j = "CHAMPION_NOT_OWNED";
      break;
      case LolLootRedeemableStatus_t::REDEEMABLE_RENTAL_E:
        j = "REDEEMABLE_RENTAL";
      break;
      case LolLootRedeemableStatus_t::NOT_REDEEMABLE_RENTAL_E:
        j = "NOT_REDEEMABLE_RENTAL";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootRedeemableStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ALREADY_RENTED"){
      v = LolLootRedeemableStatus_t::ALREADY_RENTED_E;
      return;
    }
    if(s == "REDEEMABLE"){
      v = LolLootRedeemableStatus_t::REDEEMABLE_E;
      return;
    }
    if(s == "UNKNOWN"){
      v = LolLootRedeemableStatus_t::UNKNOWN_E;
      return;
    }
    if(s == "NOT_REDEEMABLE"){
      v = LolLootRedeemableStatus_t::NOT_REDEEMABLE_E;
      return;
    }
    if(s == "SKIN_NOT_OWNED"){
      v = LolLootRedeemableStatus_t::SKIN_NOT_OWNED_E;
      return;
    }
    if(s == "ALREADY_OWNED"){
      v = LolLootRedeemableStatus_t::ALREADY_OWNED_E;
      return;
    }
    if(s == "CHAMPION_NOT_OWNED"){
      v = LolLootRedeemableStatus_t::CHAMPION_NOT_OWNED_E;
      return;
    }
    if(s == "REDEEMABLE_RENTAL"){
      v = LolLootRedeemableStatus_t::REDEEMABLE_RENTAL_E;
      return;
    }
    if(s == "NOT_REDEEMABLE_RENTAL"){
      v = LolLootRedeemableStatus_t::NOT_REDEEMABLE_RENTAL_E;
      return;
    }
  }
  inline std::string to_string(const LolLootRedeemableStatus_t& v) {
    switch(v) {
      case LolLootRedeemableStatus_t::ALREADY_RENTED_E:
        return "ALREADY_RENTED";
      case LolLootRedeemableStatus_t::REDEEMABLE_E:
        return "REDEEMABLE";
      case LolLootRedeemableStatus_t::UNKNOWN_E:
        return "UNKNOWN";
      case LolLootRedeemableStatus_t::NOT_REDEEMABLE_E:
        return "NOT_REDEEMABLE";
      case LolLootRedeemableStatus_t::SKIN_NOT_OWNED_E:
        return "SKIN_NOT_OWNED";
      case LolLootRedeemableStatus_t::ALREADY_OWNED_E:
        return "ALREADY_OWNED";
      case LolLootRedeemableStatus_t::CHAMPION_NOT_OWNED_E:
        return "CHAMPION_NOT_OWNED";
      case LolLootRedeemableStatus_t::REDEEMABLE_RENTAL_E:
        return "REDEEMABLE_RENTAL";
      case LolLootRedeemableStatus_t::NOT_REDEEMABLE_RENTAL_E:
        return "NOT_REDEEMABLE_RENTAL";
    }
  }

}
