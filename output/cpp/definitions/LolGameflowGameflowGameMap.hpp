#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameMap_t {
    std::string description;
    std::string platformId;
    int64_t id;
    std::string platformName;
    bool isRGM;
    std::string gameMode;
    std::string name;
    nlohmann::json properties;
    std::string gameModeName;
    nlohmann::json assets;
    std::string gameMutator;
    std::string gameModeShortName;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameMap_t& v) {
    j["description"] = v.description;
    j["platformId"] = v.platformId;
    j["id"] = v.id;
    j["platformName"] = v.platformName;
    j["isRGM"] = v.isRGM;
    j["gameMode"] = v.gameMode;
    j["name"] = v.name;
    j["properties"] = v.properties;
    j["gameModeName"] = v.gameModeName;
    j["assets"] = v.assets;
    j["gameMutator"] = v.gameMutator;
    j["gameModeShortName"] = v.gameModeShortName;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameMap_t& v) {
    v.description = j.at("description").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.platformName = j.at("platformName").get<std::string>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.properties = j.at("properties").get<nlohmann::json>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.assets = j.at("assets").get<nlohmann::json>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
  }
  inline std::string to_string(const LolGameflowGameflowGameMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
