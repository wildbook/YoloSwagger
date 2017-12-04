#ifndef SWAGGER_TYPES_LolMatchmakingGameflowGameData_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowGameData_HPP
#include <json.hpp>
#include "LolMatchmakingGameflowQueue.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingGameflowGameData {
    // 
    LolMatchmakingGameflowQueue queue;
  };

  void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameData& v) {
    j["queue"] = v.queue;
  }

  void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameData& v) {
    v.queue = j.at("queue").get<LolMatchmakingGameflowQueue>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowGameData_HPP
