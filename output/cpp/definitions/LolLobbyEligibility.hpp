#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolLobbyEligibility_t {
    bool eligible;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibility_t& v) {
    j["eligible"] = v.eligible;
    j["restrictions"] = v.restrictions;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibility_t& v) {
    v.eligible = j.at("eligible").get<bool>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
