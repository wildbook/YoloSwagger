#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    int32_t gameTypeConfig;
    LcdsGameMap_t gameMap;
    int32_t maxNumPlayers;
    std::string allowSpectators;
    std::string region;
    std::string gameName;
    std::optional<std::string> passbackUrl;
    std::string gameMode;
    std::vector<std::string> gameMutators;
    std::optional<std::string> passbackDataPacket;
    std::string gamePassword;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["gameMap"] = v.gameMap;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["allowSpectators"] = v.allowSpectators;
    j["region"] = v.region;
    j["gameName"] = v.gameName;
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gameMode"] = v.gameMode;
    j["gameMutators"] = v.gameMutators;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gamePassword"] = v.gamePassword;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.gameName = j.at("gameName").get<std::string>();
    if(auto it = j.find("passbackUrl"); it != j.end() !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
  }
}
