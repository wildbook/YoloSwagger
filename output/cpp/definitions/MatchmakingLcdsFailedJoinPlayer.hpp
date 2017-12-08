#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  struct MatchmakingLcdsFailedJoinPlayer_t {
    MatchmakingLcdsSummoner_t summoner;
    std::string reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsFailedJoinPlayer_t& v) {
    j["summoner"] = v.summoner;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsFailedJoinPlayer_t& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
  }
  inline std::string to_string(const MatchmakingLcdsFailedJoinPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
