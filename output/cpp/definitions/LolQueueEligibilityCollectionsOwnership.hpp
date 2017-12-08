#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsOwnership_t {
    bool_t freeToPlayReward;
    LolQueueEligibilityCollectionsRental_t rental;
    bool_t owned;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool_t>();
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental_t>();
    v.owned = j.at("owned").get<bool_t>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
