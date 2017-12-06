#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    std::string allowSpectators;
    LcdsGameMap_t gameMap;
    std::string gameMode;
    std::vector<std::string> gameMutators;
    std::string gameName;
    std::string gamePassword;
    int32_t gameTypeConfig;
    int32_t maxNumPlayers;
    std::optional<std::string> passbackDataPacket;
    std::optional<std::string> passbackUrl;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    j["allowSpectators"] = v.allowSpectators;
    j["gameMap"] = v.gameMap;
    j["gameMode"] = v.gameMode;
    j["gameMutators"] = v.gameMutators;
    j["gameName"] = v.gameName;
    j["gamePassword"] = v.gamePassword;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["maxNumPlayers"] = v.maxNumPlayers;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameName = j.at("gameName").get<std::string>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
    if(auto it = j.find("passbackUrl"); it != j.end() !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.region = j.at("region").get<std::string>();
  }
}
