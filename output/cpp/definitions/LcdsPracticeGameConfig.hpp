#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    LcdsGameMap_t gameMap;
    int32_t maxNumPlayers;
    std::string gameName;
    std::string region;
    std::optional<std::string> passbackUrl;
    std::vector<std::string> gameMutators;
    std::string gameMode;
    std::string allowSpectators;
    int32_t gameTypeConfig;
    std::string gamePassword;
    std::optional<std::string> passbackDataPacket;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    j["gameMap"] = v.gameMap;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameName"] = v.gameName;
    j["region"] = v.region;
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    j["gameMode"] = v.gameMode;
    j["allowSpectators"] = v.allowSpectators;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["gamePassword"] = v.gamePassword;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.gameName = j.at("gameName").get<std::string>();
    v.region = j.at("region").get<std::string>();
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
  }
  inline std::string to_string(const LcdsPracticeGameConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
