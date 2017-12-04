#ifndef SWAGGER_TYPES_LcdsGameMap_HPP
#define SWAGGER_TYPES_LcdsGameMap_HPP
#include <json.hpp>
namespace test {
  // 
  struct LcdsGameMap {
'    // 
    std::string description;
    // 
    std::string displayName;
    // 
    int32_t mapId;
    // 
    int32_t minCustomPlayers;
    // 
    std::string name;
    // 
    int32_t totalPlayers;
  };

  void to_json(nlohmann::json& j, const LcdsGameMap& v) {
    j["description"] = v.description;
    j["displayName"] = v.displayName;
    j["mapId"] = v.mapId;
    j["minCustomPlayers"] = v.minCustomPlayers;
    j["name"] = v.name;
    j["totalPlayers"] = v.totalPlayers;
  }

  void from_json(const nlohmann::json& j, LcdsGameMap& v) {
    v.description = j.at("description").get<std::string>;
    v.displayName = j.at("displayName").get<std::string>;
    v.mapId = j.at("mapId").get<int32_t>;
    v.minCustomPlayers = j.at("minCustomPlayers").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.totalPlayers = j.at("totalPlayers").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LcdsGameMap_HPP
