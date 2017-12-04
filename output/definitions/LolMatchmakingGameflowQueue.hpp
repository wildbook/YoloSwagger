#ifndef SWAGGER_TYPES_LolMatchmakingGameflowQueue_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowQueue_HPP
#include <json.hpp>
#include "LolMatchmakingGameflowGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingGameflowQueue {
    // 
    LolMatchmakingGameflowGameTypeConfig gameTypeConfig;
  };

  void to_json(nlohmann::json& j, const LolMatchmakingGameflowQueue& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  void from_json(const nlohmann::json& j, LolMatchmakingGameflowQueue& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolMatchmakingGameflowGameTypeConfig>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowQueue_HPP
