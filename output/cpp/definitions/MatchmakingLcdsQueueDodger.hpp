#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsQueueDodger_t {
    MatchmakingLcdsSummoner_t summoner;
    uint64_t_t dodgePenaltyRemainingTime;
    std::string_t reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDodger_t& v) {
    j["summoner"] = v.summoner;
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDodger_t& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string_t>();
  }
  inline std::string to_string(const MatchmakingLcdsQueueDodger_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
