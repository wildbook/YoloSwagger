#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    int32_t maxNumPlayers;
    std::string gameMode;
    std::string allowSpectators;
    std::string gameName;
    LcdsGameMap_t gameMap;
    std::optional<std::string> passbackUrl;
    std::vector<std::string> gameMutators;
    std::optional<std::string> passbackDataPacket;
    std::string gamePassword;
    int32_t gameTypeConfig;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameMode"] = v.gameMode;
    j["allowSpectators"] = v.allowSpectators;
    j["gameName"] = v.gameName;
    j["gameMap"] = v.gameMap;
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gamePassword"] = v.gamePassword;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.gameName = j.at("gameName").get<std::string>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
    v.region = j.at("region").get<std::string>();
  }
  inline std::string to_string(const LcdsPracticeGameConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
