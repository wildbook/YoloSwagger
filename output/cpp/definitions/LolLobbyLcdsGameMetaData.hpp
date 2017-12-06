#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLcdsGameMetaData_t {
    int32_t mapId;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLcdsGameMetaData_t& v) {
    j["mapId"] = v.mapId;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLcdsGameMetaData_t& v) {
    v.mapId = j.at("mapId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
}
