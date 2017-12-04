#ifndef SWAGGER_TYPES_LolLeaguesGameflowGameData_HPP
#define SWAGGER_TYPES_LolLeaguesGameflowGameData_HPP
#include <json.hpp>
#include "LolLeaguesQueue.hpp"
namespace test {
  // 
  struct LolLeaguesGameflowGameData {
'    // 
    LolLeaguesQueue queue;
  };

  void to_json(nlohmann::json& j, const LolLeaguesGameflowGameData& v) {
    j["queue"] = v.queue;
  }

  void from_json(const nlohmann::json& j, LolLeaguesGameflowGameData& v) {
    v.queue = j.at("queue").get<LolLeaguesQueue>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesGameflowGameData_HPP
