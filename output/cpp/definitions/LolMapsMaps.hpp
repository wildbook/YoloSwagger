#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMapsMaps_t {
    std::map<std::string, std::string> assets;
    std::string description;
    std::string gameMode;
    std::string gameModeDescription;
    std::string gameModeName;
    std::string gameModeShortName;
    std::string gameMutator;
    int64_t id;
    bool isDefault;
    bool isRGM;
    std::string name;
    std::string platformId;
    std::string platformName;
    nlohmann::json properties;
  };

  inline void to_json(nlohmann::json& j, const LolMapsMaps_t& v) {
    j["assets"] = v.assets;
    j["description"] = v.description;
    j["gameMode"] = v.gameMode;
    j["gameModeDescription"] = v.gameModeDescription;
    j["gameModeName"] = v.gameModeName;
    j["gameModeShortName"] = v.gameModeShortName;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["isDefault"] = v.isDefault;
    j["isRGM"] = v.isRGM;
    j["name"] = v.name;
    j["platformId"] = v.platformId;
    j["platformName"] = v.platformName;
    j["properties"] = v.properties;
  }

  inline void from_json(const nlohmann::json& j, LolMapsMaps_t& v) {
    v.assets = j.at("assets").get<std::map<std::string, std::string>>();
    v.description = j.at("description").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.isDefault = j.at("isDefault").get<bool>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.platformName = j.at("platformName").get<std::string>();
    v.properties = j.at("properties").get<nlohmann::json>();
  }
}
