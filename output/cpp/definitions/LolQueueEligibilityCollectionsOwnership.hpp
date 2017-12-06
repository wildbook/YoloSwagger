#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsOwnership_t {
    bool freeToPlayReward;
    LolQueueEligibilityCollectionsRental_t rental;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental_t>();
    v.owned = j.at("owned").get<bool>();
  }
}
