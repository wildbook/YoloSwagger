#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    std::optional<std::string> passbackUrl;
    std::string gamePassword;
    std::string gameMode;
    std::string gameName;
    std::vector<std::string> gameMutators;
    LcdsGameMap_t gameMap;
    int32_t gameTypeConfig;
    int32_t maxNumPlayers;
    std::optional<std::string> passbackDataPacket;
    std::string region;
    std::string allowSpectators;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gamePassword"] = v.gamePassword;
    j["gameMode"] = v.gameMode;
    j["gameName"] = v.gameName;
    j["gameMutators"] = v.gameMutators;
    j["gameMap"] = v.gameMap;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["maxNumPlayers"] = v.maxNumPlayers;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["region"] = v.region;
    j["allowSpectators"] = v.allowSpectators;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameName = j.at("gameName").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
  }
  inline std::string to_string(const LcdsPracticeGameConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
