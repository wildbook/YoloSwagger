#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolLobbyEligibility_t {
    bool eligible;
    int32_t queueId;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibility_t& v) {
    j["eligible"] = v.eligible;
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibility_t& v) {
    v.eligible = j.at("eligible").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
  }
  inline std::string to_string(const LolLobbyEligibility_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
