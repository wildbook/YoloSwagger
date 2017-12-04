#ifndef SWAGGER_TYPES_LcdsPracticeGameConfig_HPP
#define SWAGGER_TYPES_LcdsPracticeGameConfig_HPP
#include <json.hpp>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  // 
  struct LcdsPracticeGameConfig {
    // 
    int32_t maxNumPlayers;
    // 
    std::string gameMode;
    // 
    std::string allowSpectators;
    // 
    std::string gameName;
    // 
    LcdsGameMap gameMap;
    // 
    std::string passbackUrl;
    // 
    std::vector<std::string> gameMutators;
    // 
    std::string passbackDataPacket;
    // 
    std::string gamePassword;
    // 
    int32_t gameTypeConfig;
    // 
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig& v) {
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameMode"] = v.gameMode;
    j["allowSpectators"] = v.allowSpectators;
    j["gameName"] = v.gameName;
    j["gameMap"] = v.gameMap;
    j["passbackUrl"] = v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["gamePassword"] = v.gamePassword;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.allowSpectators = j.at("allowSpectators").get<std::string>;
    v.gameName = j.at("gameName").get<std::string>;
    v.gameMap = j.at("gameMap").get<LcdsGameMap>;
    v.passbackUrl = j.at("passbackUrl").get<std::string>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>;
    v.gamePassword = j.at("gamePassword").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsPracticeGameConfig_HPP
