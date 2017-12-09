#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameMap_t {
    nlohmann::json assets;
    std::string description;
    std::string gameMutator;
    bool isRGM;
    std::string gameModeName;
    std::string gameModeShortName;
    nlohmann::json properties;
    std::string platformId;
    std::string platformName;
    int64_t id;
    std::string name;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameMap_t& v) {
    j["assets"] = v.assets;
    j["description"] = v.description;
    j["gameMutator"] = v.gameMutator;
    j["isRGM"] = v.isRGM;
    j["gameModeName"] = v.gameModeName;
    j["gameModeShortName"] = v.gameModeShortName;
    j["properties"] = v.properties;
    j["platformId"] = v.platformId;
    j["platformName"] = v.platformName;
    j["id"] = v.id;
    j["name"] = v.name;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameMap_t& v) {
    v.assets = j.at("assets").get<nlohmann::json>();
    v.description = j.at("description").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
    v.properties = j.at("properties").get<nlohmann::json>();
    v.platformId = j.at("platformId").get<std::string>();
    v.platformName = j.at("platformName").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
  inline std::string to_string(const LolGameflowGameflowGameMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
