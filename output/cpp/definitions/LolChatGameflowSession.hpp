#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatGameflowGameMap.hpp"
#include "LolChatGameflowPhase.hpp"
#include "LolChatGameflowGameData.hpp"
namespace leagueapi {
  struct LolChatGameflowSession_t {
    LolChatGameflowPhase_t phase;
    LolChatGameflowGameData_t gameData;
    LolChatGameflowGameMap_t map;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolChatGameflowPhase_t>();
    v.gameData = j.at("gameData").get<LolChatGameflowGameData_t>();
    v.map = j.at("map").get<LolChatGameflowGameMap_t>();
  }
  inline std::string to_string(const LolChatGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
