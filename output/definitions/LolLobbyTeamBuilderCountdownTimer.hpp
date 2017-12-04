#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderCountdownTimer_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderCountdownTimer_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyTeamBuilderCountdownTimer {
'    // 
    int32_t counter;
    // 
    std::string phaseName;
    // 
    int64_t timer;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCountdownTimer& v) {
    j["counter"] = v.counter;
    j["phaseName"] = v.phaseName;
    j["timer"] = v.timer;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCountdownTimer& v) {
    v.counter = j.at("counter").get<int32_t>;
    v.phaseName = j.at("phaseName").get<std::string>;
    v.timer = j.at("timer").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderCountdownTimer_HPP
