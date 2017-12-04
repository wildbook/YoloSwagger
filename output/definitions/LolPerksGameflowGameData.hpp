#ifndef SWAGGER_TYPES_LolPerksGameflowGameData_HPP
#define SWAGGER_TYPES_LolPerksGameflowGameData_HPP
#include <json.hpp>
#include "LolPerksQueue.hpp"
namespace leagueapi {
  // 
  struct LolPerksGameflowGameData {
    // 
    bool isCustomGame;
    // 
    LolPerksQueue queue;
  };

  void to_json(nlohmann::json& j, const LolPerksGameflowGameData& v) {
    j["isCustomGame"] = v.isCustomGame;
    j["queue"] = v.queue;
  }

  void from_json(const nlohmann::json& j, LolPerksGameflowGameData& v) {
    v.isCustomGame = j.at("isCustomGame").get<bool>;
    v.queue = j.at("queue").get<LolPerksQueue>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGameflowGameData_HPP
