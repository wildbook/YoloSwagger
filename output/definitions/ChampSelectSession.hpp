#ifndef SWAGGER_TYPES_ChampSelectSession_HPP
#define SWAGGER_TYPES_ChampSelectSession_HPP
#include <json.hpp>
#include "ChampSelectTimer.hpp"
namespace leagueapi {
  // 
  struct ChampSelectSession {
    // 
    ChampSelectTimer timer;
  };

  void to_json(nlohmann::json& j, const ChampSelectSession& v) {
    j["timer"] = v.timer;
  }

  void from_json(const nlohmann::json& j, ChampSelectSession& v) {
    v.timer = j.at("timer").get<ChampSelectTimer>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectSession_HPP
