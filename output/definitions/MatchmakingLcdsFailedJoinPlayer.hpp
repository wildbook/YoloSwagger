#ifndef SWAGGER_TYPES_MatchmakingLcdsFailedJoinPlayer_HPP
#define SWAGGER_TYPES_MatchmakingLcdsFailedJoinPlayer_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsFailedJoinPlayer {
    // 
    std::string reasonFailed;
    // 
    MatchmakingLcdsSummoner summoner;
  };

  void to_json(nlohmann::json& j, const MatchmakingLcdsFailedJoinPlayer& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  void from_json(const nlohmann::json& j, MatchmakingLcdsFailedJoinPlayer& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsFailedJoinPlayer_HPP
