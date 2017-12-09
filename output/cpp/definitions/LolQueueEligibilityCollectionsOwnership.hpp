#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsOwnership_t {
    LolQueueEligibilityCollectionsRental_t rental;
    bool freeToPlayReward;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership_t& v) {
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership_t& v) {
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
