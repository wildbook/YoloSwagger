#ifndef SWAGGER_TYPES_LolLobbyLobbyTimer_HPP
#define SWAGGER_TYPES_LolLobbyLobbyTimer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLobbyTimer {
    // 
    int64_t countdown;
    // 
    bool enabled;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyTimer& v) {
    j["countdown"] = v.countdown;
    j["enabled"] = v.enabled;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyTimer& v) {
    v.countdown = j.at("countdown").get<int64_t>;
    v.enabled = j.at("enabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyTimer_HPP
