#ifndef SWAGGER_TYPES_LolMapsMaps_HPP
#define SWAGGER_TYPES_LolMapsMaps_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMapsMaps {
    // 
    nlohmann::json properties;
    // 
    bool isRGM;
    // 
    std::map<std::string, std::string> assets;
    // 
    std::string platformId;
    // 
    std::string platformName;
    // 
    std::string description;
    // 
    std::string gameMode;
    // 
    std::string name;
    // 
    std::string gameMutator;
    // 
    std::string gameModeName;
    // 
    std::string gameModeDescription;
    // 
    int64_t id;
    // 
    bool isDefault;
    // 
    std::string gameModeShortName;
  };

  inline void to_json(nlohmann::json& j, const LolMapsMaps& v) {
    j["properties"] = v.properties;
    j["isRGM"] = v.isRGM;
    j["assets"] = v.assets;
    j["platformId"] = v.platformId;
    j["platformName"] = v.platformName;
    j["description"] = v.description;
    j["gameMode"] = v.gameMode;
    j["name"] = v.name;
    j["gameMutator"] = v.gameMutator;
    j["gameModeName"] = v.gameModeName;
    j["gameModeDescription"] = v.gameModeDescription;
    j["id"] = v.id;
    j["isDefault"] = v.isDefault;
    j["gameModeShortName"] = v.gameModeShortName;
  }

  inline void from_json(const nlohmann::json& j, LolMapsMaps& v) {
    v.properties = j.at("properties").get<nlohmann::json>;
    v.isRGM = j.at("isRGM").get<bool>;
    v.assets = j.at("assets").get<std::map<std::string, std::string>>;
    v.platformId = j.at("platformId").get<std::string>;
    v.platformName = j.at("platformName").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.gameModeName = j.at("gameModeName").get<std::string>;
    v.gameModeDescription = j.at("gameModeDescription").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.isDefault = j.at("isDefault").get<bool>;
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMapsMaps_HPP
