#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyTimer_t {
    bool enabled;
    int64_t countdown;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyTimer_t& v) {
    j["enabled"] = v.enabled;
    j["countdown"] = v.countdown;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyTimer_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.countdown = j.at("countdown").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyLobbyTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
