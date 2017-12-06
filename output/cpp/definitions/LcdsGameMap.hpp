#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameMap_t {
    int32_t mapId;
    std::string displayName;
    std::string name;
    int32_t minCustomPlayers;
    std::string description;
    int32_t totalPlayers;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameMap_t& v) {
    j["mapId"] = v.mapId;
    j["displayName"] = v.displayName;
    j["name"] = v.name;
    j["minCustomPlayers"] = v.minCustomPlayers;
    j["description"] = v.description;
    j["totalPlayers"] = v.totalPlayers;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameMap_t& v) {
    v.mapId = j.at("mapId").get<int32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>();
    v.description = j.at("description").get<std::string>();
    v.totalPlayers = j.at("totalPlayers").get<int32_t>();
  }
}
