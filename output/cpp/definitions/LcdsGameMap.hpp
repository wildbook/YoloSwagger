#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameMap_t {
    std::string displayName;
    std::string description;
    int32_t mapId;
    int32_t minCustomPlayers;
    int32_t totalPlayers;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameMap_t& v) {
    j["displayName"] = v.displayName;
    j["description"] = v.description;
    j["mapId"] = v.mapId;
    j["minCustomPlayers"] = v.minCustomPlayers;
    j["totalPlayers"] = v.totalPlayers;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameMap_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>();
    v.totalPlayers = j.at("totalPlayers").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LcdsGameMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
