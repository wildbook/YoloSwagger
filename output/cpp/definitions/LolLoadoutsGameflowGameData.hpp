#ifndef SWAGGER_TYPES_LolLoadoutsGameflowGameData_HPP
#define SWAGGER_TYPES_LolLoadoutsGameflowGameData_HPP
#include <json.hpp>
#include "LolLoadoutsQueue.hpp"
namespace leagueapi {
  // 
  struct LolLoadoutsGameflowGameData {
    // 
    LolLoadoutsQueue queue;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowGameData& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowGameData& v) {
    v.queue = j.at("queue").get<LolLoadoutsQueue>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsGameflowGameData_HPP
