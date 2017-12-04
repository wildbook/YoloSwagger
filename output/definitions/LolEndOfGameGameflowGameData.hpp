#ifndef SWAGGER_TYPES_LolEndOfGameGameflowGameData_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowGameData_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameGameflowGameData {
'    // 
    uint64_t gameId;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameGameflowGameData& v) {
    j["gameId"] = v.gameId;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameGameflowGameData& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowGameData_HPP
