#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMapsMaps_t {
    std::string gameMode;
    nlohmann::json properties;
    std::string platformId;
    std::string gameModeShortName;
    bool isDefault;
    std::string name;
    bool isRGM;
    std::string gameMutator;
    int64_t id;
    std::string platformName;
    std::string description;
    std::string gameModeName;
    std::string gameModeDescription;
    std::map<std::string, std::string> assets;
  };

  inline void to_json(nlohmann::json& j, const LolMapsMaps_t& v) {
    j["gameMode"] = v.gameMode;
    j["properties"] = v.properties;
    j["platformId"] = v.platformId;
    j["gameModeShortName"] = v.gameModeShortName;
    j["isDefault"] = v.isDefault;
    j["name"] = v.name;
    j["isRGM"] = v.isRGM;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["platformName"] = v.platformName;
    j["description"] = v.description;
    j["gameModeName"] = v.gameModeName;
    j["gameModeDescription"] = v.gameModeDescription;
    j["assets"] = v.assets;
  }

  inline void from_json(const nlohmann::json& j, LolMapsMaps_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.properties = j.at("properties").get<nlohmann::json>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>();
    v.isDefault = j.at("isDefault").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.platformName = j.at("platformName").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>();
    v.assets = j.at("assets").get<std::map<std::string, std::string>>();
  }
  inline std::string to_string(const LolMapsMaps_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
