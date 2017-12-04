#ifndef SWAGGER_TYPES_LolGameQueuesPlatformConfigEnabledMap_HPP
#define SWAGGER_TYPES_LolGameQueuesPlatformConfigEnabledMap_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameQueuesPlatformConfigEnabledMap {
    // 
    int32_t minPlayers;
    // 
    int32_t gameMapId;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesPlatformConfigEnabledMap& v) {
    j["minPlayers"] = v.minPlayers;
    j["gameMapId"] = v.gameMapId;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesPlatformConfigEnabledMap& v) {
    v.minPlayers = j.at("minPlayers").get<int32_t>;
    v.gameMapId = j.at("gameMapId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesPlatformConfigEnabledMap_HPP
