#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsBustedLeaver_t {
    uint64_t leaverPenaltyMillisRemaining;
    std::string reasonFailed;
    std::string accessToken;
    MatchmakingLcdsSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsBustedLeaver_t& v) {
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining;
    j["reasonFailed"] = v.reasonFailed;
    j["accessToken"] = v.accessToken;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsBustedLeaver_t& v) {
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
  }
  inline std::string to_string(const MatchmakingLcdsBustedLeaver_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
