#ifndef SWAGGER_TYPES_LolLootRedeemableStatus_HPP
#define SWAGGER_TYPES_LolLootRedeemableStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootRedeemableStatus {
    // 
    ALREADY_OWNED = 5,
    // 
    ALREADY_RENTED = 6,
    // 
    CHAMPION_NOT_OWNED = 7,
    // 
    NOT_REDEEMABLE = 3,
    // 
    NOT_REDEEMABLE_RENTAL = 4,
    // 
    REDEEMABLE = 1,
    // 
    REDEEMABLE_RENTAL = 2,
    // 
    SKIN_NOT_OWNED = 8,
    // 
    UNKNOWN = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLootRedeemableStatus& v) {
    switch(v) {
      case LolLootRedeemableStatus::ALREADY_OWNED:
        j = "ALREADY_OWNED";
      break;
      case LolLootRedeemableStatus::ALREADY_RENTED:
        j = "ALREADY_RENTED";
      break;
      case LolLootRedeemableStatus::CHAMPION_NOT_OWNED:
        j = "CHAMPION_NOT_OWNED";
      break;
      case LolLootRedeemableStatus::NOT_REDEEMABLE:
        j = "NOT_REDEEMABLE";
      break;
      case LolLootRedeemableStatus::NOT_REDEEMABLE_RENTAL:
        j = "NOT_REDEEMABLE_RENTAL";
      break;
      case LolLootRedeemableStatus::REDEEMABLE:
        j = "REDEEMABLE";
      break;
      case LolLootRedeemableStatus::REDEEMABLE_RENTAL:
        j = "REDEEMABLE_RENTAL";
      break;
      case LolLootRedeemableStatus::SKIN_NOT_OWNED:
        j = "SKIN_NOT_OWNED";
      break;
      case LolLootRedeemableStatus::UNKNOWN:
        j = "UNKNOWN";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootRedeemableStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "ALREADY_OWNED"){
      v = LolLootRedeemableStatus::ALREADY_OWNED;
      return;
    }
    if(s == "ALREADY_RENTED"){
      v = LolLootRedeemableStatus::ALREADY_RENTED;
      return;
    }
    if(s == "CHAMPION_NOT_OWNED"){
      v = LolLootRedeemableStatus::CHAMPION_NOT_OWNED;
      return;
    }
    if(s == "NOT_REDEEMABLE"){
      v = LolLootRedeemableStatus::NOT_REDEEMABLE;
      return;
    }
    if(s == "NOT_REDEEMABLE_RENTAL"){
      v = LolLootRedeemableStatus::NOT_REDEEMABLE_RENTAL;
      return;
    }
    if(s == "REDEEMABLE"){
      v = LolLootRedeemableStatus::REDEEMABLE;
      return;
    }
    if(s == "REDEEMABLE_RENTAL"){
      v = LolLootRedeemableStatus::REDEEMABLE_RENTAL;
      return;
    }
    if(s == "SKIN_NOT_OWNED"){
      v = LolLootRedeemableStatus::SKIN_NOT_OWNED;
      return;
    }
    if(s == "UNKNOWN"){
      v = LolLootRedeemableStatus::UNKNOWN;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootRedeemableStatus_HPP
