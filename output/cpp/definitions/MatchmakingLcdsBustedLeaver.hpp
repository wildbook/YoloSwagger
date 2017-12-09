#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsBustedLeaver_t {
    MatchmakingLcdsSummoner_t summoner;
    std::string reasonFailed;
    std::string accessToken;
    uint64_t leaverPenaltyMillisRemaining;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsBustedLeaver_t& v) {
    j["summoner"] = v.summoner;
    j["reasonFailed"] = v.reasonFailed;
    j["accessToken"] = v.accessToken;
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsBustedLeaver_t& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>();
  }
  inline std::string to_string(const MatchmakingLcdsBustedLeaver_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
