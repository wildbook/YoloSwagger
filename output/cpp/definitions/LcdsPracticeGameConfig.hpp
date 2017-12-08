#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    std::string gameMode;
    std::optional<std::string> passbackDataPacket;
    LcdsGameMap_t gameMap;
    std::string allowSpectators;
    std::string region;
    std::optional<std::string> passbackUrl;
    std::vector<std::string> gameMutators;
    int32_t maxNumPlayers;
    int32_t gameTypeConfig;
    std::string gamePassword;
    std::string gameName;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameConfig_t& v) {
    j["gameMode"] = v.gameMode;
    if(v.passbackDataPacket)
      j["passbackDataPacket"] = *v.passbackDataPacket;
    j["gameMap"] = v.gameMap;
    j["allowSpectators"] = v.allowSpectators;
    j["region"] = v.region;
    if(v.passbackUrl)
      j["passbackUrl"] = *v.passbackUrl;
    j["gameMutators"] = v.gameMutators;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["gamePassword"] = v.gamePassword;
    j["gameName"] = v.gameName;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameConfig_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::string>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.region = j.at("region").get<std::string>();
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t>();
    v.gamePassword = j.at("gamePassword").get<std::string>();
    v.gameName = j.at("gameName").get<std::string>();
  }
  inline std::string to_string(const LcdsPracticeGameConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
