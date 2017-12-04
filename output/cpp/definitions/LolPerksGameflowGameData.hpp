#ifndef SWAGGER_TYPES_LolPerksGameflowGameData_HPP
#define SWAGGER_TYPES_LolPerksGameflowGameData_HPP
#include <json.hpp>
#include "LolPerksQueue.hpp"
namespace leagueapi {
  // 
  struct LolPerksGameflowGameData {
    // 
    LolPerksQueue queue;
    // 
    bool isCustomGame;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowGameData& v) {
    j["queue"] = v.queue;
    j["isCustomGame"] = v.isCustomGame;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowGameData& v) {
    v.queue = j.at("queue").get<LolPerksQueue>;
    v.isCustomGame = j.at("isCustomGame").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGameflowGameData_HPP
