#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameMap_t {
    nlohmann::json properties;
    std::string gameMode;
    std::string description;
    bool isRGM;
    nlohmann::json assets;
    std::string gameModeShortName;
    std::string platformId;
    std::string gameMutator;
    std::string name;
    std::string platformName;
    int64_t id;
    std::string gameModeName;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameMap_t& v) {
    j["properties"] = v.properties;
    j["gameMode"] = v.gameMode;
    j["description"] = v.description;
    j["isRGM"] = v.isRGM;
    j["assets"] = v.assets;
    j["gameModeShortName"] = v.gameModeShortName;
    j["platformId"] = v.platformId;
    j["gameMutator"] = v.gameMutator;
    j["name"] = v.name;
    j["platformName"] = v.platformName;
    j["id"] = v.id;
    j["gameModeName"] = v.gameModeName;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameMap_t& v) {
    v.properties = j.at("properties").get<nlohmann::json>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.assets = j.at("assets").get<nlohmann::json>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.platformName = j.at("platformName").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
  }
  inline std::string to_string(const LolGameflowGameflowGameMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
