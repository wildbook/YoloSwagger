#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
namespace leagueapi {
  struct LcdsPracticeGameConfig_t {
    int32_t_t maxNumPlayers;
    std::string_t gameMode;
    std::string_t allowSpectators;
    std::string_t gameName;
    LcdsGameMap_t gameMap;
    std::optional<std::string_t> passbackUrl;
    std::vector<std::string> gameMutators;
    std::optional<std::string_t> passbackDataPacket;
    std::string_t gamePassword;
    int32_t_t gameTypeConfig;
    std::string_t region;
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
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.allowSpectators = j.at("allowSpectators").get<std::string_t>();
    v.gameName = j.at("gameName").get<std::string_t>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    if(auto it = j.find("passbackUrl"); it != j.end() && !it->is_null())
      v.passbackUrl = it->get<std::string_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    if(auto it = j.find("passbackDataPacket"); it != j.end() && !it->is_null())
      v.passbackDataPacket = it->get<std::string_t>();
    v.gamePassword = j.at("gamePassword").get<std::string_t>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<int32_t_t>();
    v.region = j.at("region").get<std::string_t>();
  }
  inline std::string to_string(const LcdsPracticeGameConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
