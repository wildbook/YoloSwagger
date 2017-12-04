#ifndef SWAGGER_TYPES_MatchmakingLcdsBustedLeaver_HPP
#define SWAGGER_TYPES_MatchmakingLcdsBustedLeaver_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsBustedLeaver {
    // 
    MatchmakingLcdsSummoner summoner;
    // 
    uint64_t leaverPenaltyMillisRemaining;
    // 
    std::string accessToken;
    // 
    std::string reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsBustedLeaver& v) {
    j["summoner"] = v.summoner;
    j["leaverPenaltyMillisRemaining"] = v.leaverPenaltyMillisRemaining;
    j["accessToken"] = v.accessToken;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsBustedLeaver& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
    v.leaverPenaltyMillisRemaining = j.at("leaverPenaltyMillisRemaining").get<uint64_t>;
    v.accessToken = j.at("accessToken").get<std::string>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsBustedLeaver_HPP
