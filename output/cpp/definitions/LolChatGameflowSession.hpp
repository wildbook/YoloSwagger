#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatGameflowGameData.hpp"
#include "LolChatGameflowPhase.hpp"
#include "LolChatGameflowGameMap.hpp"
namespace leagueapi {
  struct LolChatGameflowSession_t {
    LolChatGameflowPhase_t phase;
    LolChatGameflowGameMap_t map;
    LolChatGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["map"] = v.map;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolChatGameflowPhase_t>();
    v.map = j.at("map").get<LolChatGameflowGameMap_t>();
    v.gameData = j.at("gameData").get<LolChatGameflowGameData_t>();
  }
  inline std::string to_string(const LolChatGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
