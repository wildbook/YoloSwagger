#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesPlatformConfigEnabledMap_t {
    int32_t minPlayers;
    int32_t gameMapId;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesPlatformConfigEnabledMap_t& v) {
    j["minPlayers"] = v.minPlayers;
    j["gameMapId"] = v.gameMapId;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesPlatformConfigEnabledMap_t& v) {
    v.minPlayers = j.at("minPlayers").get<int32_t>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
  }
  inline std::string to_string(const LolGameQueuesPlatformConfigEnabledMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
