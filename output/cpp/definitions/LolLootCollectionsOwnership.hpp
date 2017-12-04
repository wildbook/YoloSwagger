#ifndef SWAGGER_TYPES_LolLootCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolLootCollectionsOwnership_HPP
#include <json.hpp>
#include "LolLootCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolLootCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    LolLootCollectionsRental rental;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.rental = j.at("rental").get<LolLootCollectionsRental>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsOwnership_HPP
