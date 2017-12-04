#ifndef SWAGGER_TYPES_LcdsFailedJoinPlayer_HPP
#define SWAGGER_TYPES_LcdsFailedJoinPlayer_HPP
#include <json.hpp>
#include "LcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct LcdsFailedJoinPlayer {
    // 
    std::string reasonFailed;
    // 
    LcdsSummoner summoner;
  };

  void to_json(nlohmann::json& j, const LcdsFailedJoinPlayer& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  void from_json(const nlohmann::json& j, LcdsFailedJoinPlayer& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
    v.summoner = j.at("summoner").get<LcdsSummoner>;
  }

}
#endif // SWAGGER_TYPES_LcdsFailedJoinPlayer_HPP
