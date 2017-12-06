#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLcdsGameMetaData_t {
    uint64_t gameId;
    int32_t mapId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLcdsGameMetaData_t& v) {
    j["gameId"] = v.gameId;
    j["mapId"] = v.mapId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLcdsGameMetaData_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.mapId = j.at("mapId").get<int32_t>();
  }
}
