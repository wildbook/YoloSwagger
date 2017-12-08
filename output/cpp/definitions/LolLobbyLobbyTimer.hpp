#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyTimer_t {
    int64_t_t countdown;
    bool_t enabled;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyTimer_t& v) {
    j["countdown"] = v.countdown;
    j["enabled"] = v.enabled;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyTimer_t& v) {
    v.countdown = j.at("countdown").get<int64_t_t>();
    v.enabled = j.at("enabled").get<bool_t>();
  }
  inline std::string to_string(const LolLobbyLobbyTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
