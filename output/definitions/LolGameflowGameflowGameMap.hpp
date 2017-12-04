#ifndef SWAGGER_TYPES_LolGameflowGameflowGameMap_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameMap_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolGameflowGameflowGameMap {
'    // 
    nlohmann::json assets;
    // 
    std::string description;
    // 
    std::string gameMode;
    // 
    std::string gameModeName;
    // 
    std::string gameModeShortName;
    // 
    std::string gameMutator;
    // 
    int64_t id;
    // 
    bool isRGM;
    // 
    std::string name;
    // 
    std::string platformId;
    // 
    std::string platformName;
    // 
    nlohmann::json properties;
  };

  void to_json(nlohmann::json& j, const LolGameflowGameflowGameMap& v) {
    j["assets"] = v.assets;
    j["description"] = v.description;
    j["gameMode"] = v.gameMode;
    j["gameModeName"] = v.gameModeName;
    j["gameModeShortName"] = v.gameModeShortName;
    j["gameMutator"] = v.gameMutator;
    j["id"] = v.id;
    j["isRGM"] = v.isRGM;
    j["name"] = v.name;
    j["platformId"] = v.platformId;
    j["platformName"] = v.platformName;
    j["properties"] = v.properties;
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowGameMap& v) {
    v.assets = j.at("assets").get<nlohmann::json>;
    v.description = j.at("description").get<std::string>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameModeName = j.at("gameModeName").get<std::string>;
    v.gameModeShortName = j.at("gameModeShortName").get<std::string>;
    v.gameMutator = j.at("gameMutator").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.isRGM = j.at("isRGM").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
    v.platformName = j.at("platformName").get<std::string>;
    v.properties = j.at("properties").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameMap_HPP
