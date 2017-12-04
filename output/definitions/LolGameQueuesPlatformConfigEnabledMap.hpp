#ifndef SWAGGER_TYPES_LolGameQueuesPlatformConfigEnabledMap_HPP
#define SWAGGER_TYPES_LolGameQueuesPlatformConfigEnabledMap_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolGameQueuesPlatformConfigEnabledMap {
'    // 
    int32_t gameMapId;
    // 
    int32_t minPlayers;
  };

  void to_json(nlohmann::json& j, const LolGameQueuesPlatformConfigEnabledMap& v) {
    j["gameMapId"] = v.gameMapId;
    j["minPlayers"] = v.minPlayers;
  }

  void from_json(const nlohmann::json& j, LolGameQueuesPlatformConfigEnabledMap& v) {
    v.gameMapId = j.at("gameMapId").get<int32_t>;
    v.minPlayers = j.at("minPlayers").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesPlatformConfigEnabledMap_HPP
