#ifndef SWAGGER_TYPES_LcdsPracticeGameConfig_HPP
#define SWAGGER_TYPES_LcdsPracticeGameConfig_HPP
#include <json.hpp>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  // 
  struct LcdsPracticeGameConfig {
    // 
    std::string allowSpectators;
    // 
    LcdsGameMap gameMap;
    // 
    std::string gameMode;
    // 
    std::vector<std::string> gameMutators;
    // 
    std::string gameName;
    // 
    std::string gamePassword;
    // 
    int32_t gameTypeConfig;
    // 
    int32_t maxNumPlayers;
    // 
    std::string passbackDataPacket;
    // 
    std::string passbackUrl;
    // 
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig& v) {
    j["allowSpectators"] = v.allowSpectators;
    j["gameMap"] = v.gameMap;
    j["gameMode"] = v.gameMode;
    j["gameMutators"] = v.gameMutators;
    j["gameName"] = v.gameName;
    j["gamePassword"] = v.gamePassword;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["passbackUrl"] = v.passbackUrl;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig& v) {
    v.allowSpectators = j.at("allowSpectators").get<std::string>;
    v.gameMap = j.at("gameMap").get<LcdsGameMap>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.gameName = j.at("gameName").get<std::string>;
    v.gamePassword = j.at("gamePassword").get<std::string>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>;
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>;
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>;
    v.passbackUrl = j.at("passbackUrl").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsPracticeGameConfig_HPP
