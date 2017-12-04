#ifndef SWAGGER_TYPES_MatchmakingLcdsBustedLeaver_HPP
#define SWAGGER_TYPES_MatchmakingLcdsBustedLeaver_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsBustedLeaver {
    // 
    std::string accessToken;
    // 
    uint64_t leaverPenaltyMillisRemaining;
    // 
    std::string reasonFailed;
    // 
    MatchmakingLcdsSummoner summoner;
  };

  void to_json(nlohmann::json& j, const MatchmakingLcdsBustedLeaver& v) {
    j["accessToken"] = v.accessToken;
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining;
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  void from_json(const nlohmann::json& j, MatchmakingLcdsBustedLeaver& v) {
    v.accessToken = j.at("accessToken").get<std::string>;
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsBustedLeaver_HPP
