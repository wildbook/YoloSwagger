#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyCountdownTimer_t {
    int64_t timer;
    std::string phaseName;
    int32_t counter;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyCountdownTimer_t& v) {
    j["timer"] = v.timer;
    j["phaseName"] = v.phaseName;
    j["counter"] = v.counter;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyCountdownTimer_t& v) {
    v.timer = j.at("timer").get<int64_t>();
    v.phaseName = j.at("phaseName").get<std::string>();
    v.counter = j.at("counter").get<int32_t>();
  }
}
