#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameMap_t {
    std::string gameMode;
    nlohmann::json properties;
    std::string platformId;
    std::string gameModeShortName;
    std::string name;
    std::string gameMutator;
    int64_t id;
    std::string platformName;
    std::string description;
    std::string gameModeName;
    bool isRGM;
    nlohmann::json assets;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameMap_t& v) {
    j["gameMode"] = v.gameMode;
    j["properties"] = v.properties;
    j["platformId"] = v.platformId;
    j["gameModeShortName"] = v.gameModeShortName;
    j["name"] = v.name;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["platformName"] = v.platformName;
    j["description"] = v.description;
    j["gameModeName"] = v.gameModeName;
    j["isRGM"] = v.isRGM;
    j["assets"] = v.assets;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameMap_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.properties = j.at("properties").get<nlohmann::json>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.platformName = j.at("platformName").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.assets = j.at("assets").get<nlohmann::json>();
  }
  inline std::string to_string(const LolGameflowGameflowGameMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
