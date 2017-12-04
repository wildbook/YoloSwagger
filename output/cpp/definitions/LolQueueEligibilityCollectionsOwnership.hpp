#ifndef SWAGGER_TYPES_LolQueueEligibilityCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolQueueEligibilityCollectionsOwnership_HPP
#include <json.hpp>
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    LolQueueEligibilityCollectionsRental rental;
    // 
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>;
    v.owned = j.at("owned").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityCollectionsOwnership_HPP
