#ifndef SWAGGER_TYPES_MatchmakingLcdsFailedJoinPlayer_HPP
#define SWAGGER_TYPES_MatchmakingLcdsFailedJoinPlayer_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsFailedJoinPlayer {
    // 
    MatchmakingLcdsSummoner summoner;
    // 
    std::string reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsFailedJoinPlayer& v) {
    j["summoner"] = v.summoner;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsFailedJoinPlayer& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsFailedJoinPlayer_HPP
