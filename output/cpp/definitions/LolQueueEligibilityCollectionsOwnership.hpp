#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsOwnership_t {
    bool owned;
    bool freeToPlayReward;
    LolQueueEligibilityCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental_t>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
