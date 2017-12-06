#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameMap_t {
    nlohmann::json assets;
    bool isRGM;
    std::string description;
    std::string platformName;
    std::string platformId;
    std::string gameMutator;
    int64_t id;
    nlohmann::json properties;
    std::string gameModeName;
    std::string gameModeShortName;
    std::string name;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameMap_t& v) {
    j["assets"] = v.assets;
    j["isRGM"] = v.isRGM;
    j["description"] = v.description;
    j["platformName"] = v.platformName;
    j["platformId"] = v.platformId;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["properties"] = v.properties;
    j["gameModeName"] = v.gameModeName;
    j["gameModeShortName"] = v.gameModeShortName;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameMap_t& v) {
    v.assets = j.at("assets").get<nlohmann::json>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.platformName = j.at("platformName").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.properties = j.at("properties").get<nlohmann::json>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
}
