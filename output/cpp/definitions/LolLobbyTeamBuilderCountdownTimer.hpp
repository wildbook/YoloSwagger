#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCountdownTimer_t {
    int32_t counter;
    std::string phaseName;
    int64_t timer;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCountdownTimer_t& v) {
    j["counter"] = v.counter;
    j["phaseName"] = v.phaseName;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCountdownTimer_t& v) {
    v.counter = j.at("counter").get<int32_t>();
    v.phaseName = j.at("phaseName").get<std::string>();
    v.timer = j.at("timer").get<int64_t>();
  }
}
