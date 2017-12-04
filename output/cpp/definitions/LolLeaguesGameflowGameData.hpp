#ifndef SWAGGER_TYPES_LolLeaguesGameflowGameData_HPP
#define SWAGGER_TYPES_LolLeaguesGameflowGameData_HPP
#include <json.hpp>
#include "LolLeaguesQueue.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesGameflowGameData {
    // 
    LolLeaguesQueue queue;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowGameData& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowGameData& v) {
    v.queue = j.at("queue").get<LolLeaguesQueue>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesGameflowGameData_HPP
