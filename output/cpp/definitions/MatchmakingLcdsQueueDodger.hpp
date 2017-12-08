#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueDodger_t {
    uint64_t dodgePenaltyRemainingTime;
    std::string reasonFailed;
    MatchmakingLcdsSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDodger_t& v) {
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime;
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDodger_t& v) {
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueDodger_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
