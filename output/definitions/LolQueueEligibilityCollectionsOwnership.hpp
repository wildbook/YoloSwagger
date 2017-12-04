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
    bool owned;
    // 
    LolQueueEligibilityCollectionsRental rental;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityCollectionsOwnership_HPP
