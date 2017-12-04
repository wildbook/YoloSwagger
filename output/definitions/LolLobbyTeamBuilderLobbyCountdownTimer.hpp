#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyCountdownTimer_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyCountdownTimer_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyTeamBuilderLobbyCountdownTimer {
'    // 
    int32_t counter;
    // 
    std::string phaseName;
    // 
    int64_t timer;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyCountdownTimer& v) {
    j["counter"] = v.counter;
    j["phaseName"] = v.phaseName;
    j["timer"] = v.timer;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyCountdownTimer& v) {
    v.counter = j.at("counter").get<int32_t>;
    v.phaseName = j.at("phaseName").get<std::string>;
    v.timer = j.at("timer").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyCountdownTimer_HPP
