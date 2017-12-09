#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatGameflowGameMap.hpp"
#include "LolChatGameflowGameData.hpp"
#include "LolChatGameflowPhase.hpp"
namespace leagueapi {
  struct LolChatGameflowSession_t {
    LolChatGameflowGameData_t gameData;
    LolChatGameflowGameMap_t map;
    LolChatGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["map"] = v.map;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolChatGameflowGameData_t>();
    v.map = j.at("map").get<LolChatGameflowGameMap_t>();
    v.phase = j.at("phase").get<LolChatGameflowPhase_t>();
  }
  inline std::string to_string(const LolChatGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
