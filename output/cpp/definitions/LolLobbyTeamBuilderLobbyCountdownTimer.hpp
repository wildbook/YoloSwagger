#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyCountdownTimer_t {
    std::string phaseName;
    int64_t timer;
    int32_t counter;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyCountdownTimer_t& v) {
    j["phaseName"] = v.phaseName;
    j["timer"] = v.timer;
    j["counter"] = v.counter;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyCountdownTimer_t& v) {
    v.phaseName = j.at("phaseName").get<std::string>();
    v.timer = j.at("timer").get<int64_t>();
    v.counter = j.at("counter").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyCountdownTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
