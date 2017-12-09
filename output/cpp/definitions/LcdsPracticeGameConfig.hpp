#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    std::optional<std::string> passbackUrl;
    std::string gameMode;
    std::optional<std::string> passbackDataPacket;
    LcdsGameMap_t gameMap;
    std::string region;
    std::string gameName;
    std::vector<std::string> gameMutators;
    std::string gamePassword;
    int32_t maxNumPlayers;
    std::string allowSpectators;
    int32_t gameTypeConfig;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gameMode"] = v.gameMode;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gameMap"] = v.gameMap;
    j["region"] = v.region;
    j["gameName"] = v.gameName;
    j["gameMutators"] = v.gameMutators;
    j["gamePassword"] = v.gamePassword;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["allowSpectators"] = v.allowSpectators;
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.region = j.at("region").get<std::string>();
    v.gameName = j.at("gameName").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
  }
  inline std::string to_string(const LcdsPracticeGameConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
