#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueDodger_t {
    std::string reasonFailed;
    MatchmakingLcdsSummoner_t summoner;
    uint64_t dodgePenaltyRemainingTime;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDodger_t& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDodger_t& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>();
  }
}
