#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesPlatformConfigEnabledMap_t {
    int32_t gameMapId;
    int32_t minPlayers;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesPlatformConfigEnabledMap_t& v) {
    j["gameMapId"] = v.gameMapId;
    j["minPlayers"] = v.minPlayers;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesPlatformConfigEnabledMap_t& v) {
    v.gameMapId = j.at("gameMapId").get<int32_t>();
    v.minPlayers = j.at("minPlayers").get<int32_t>();
  }
}
