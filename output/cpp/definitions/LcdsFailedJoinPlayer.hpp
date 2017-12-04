#ifndef SWAGGER_TYPES_LcdsFailedJoinPlayer_HPP
#define SWAGGER_TYPES_LcdsFailedJoinPlayer_HPP
#include <json.hpp>
#include "LcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct LcdsFailedJoinPlayer {
    // 
    LcdsSummoner summoner;
    // 
    std::string reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const LcdsFailedJoinPlayer& v) {
    j["summoner"] = v.summoner;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, LcdsFailedJoinPlayer& v) {
    v.summoner = j.at("summoner").get<LcdsSummoner>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsFailedJoinPlayer_HPP
