#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsBustedLeaver_t {
    std::string reasonFailed;
    std::string accessToken;
    MatchmakingLcdsSummoner_t summoner;
    uint64_t leaverPenaltyMillisRemaining;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsBustedLeaver_t& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["accessToken"] = v.accessToken;
    j["summoner"] = v.summoner;
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsBustedLeaver_t& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>();
  }
}
