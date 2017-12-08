#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsBustedLeaver_t {
    MatchmakingLcdsSummoner_t summoner;
    uint64_t_t leaverPenaltyMillisRemaining;
    std::string_t accessToken;
    std::string_t reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsBustedLeaver_t& v) {
    j["summoner"] = v.summoner;
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining;
    j["accessToken"] = v.accessToken;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsBustedLeaver_t& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t_t>();
    v.accessToken = j.at("accessToken").get<std::string_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string_t>();
  }
  inline std::string to_string(const MatchmakingLcdsBustedLeaver_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
