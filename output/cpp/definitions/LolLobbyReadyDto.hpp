#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyReadyDto_t {
    bool ready;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReadyDto_t& v) {
    j["ready"] = v.ready;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReadyDto_t& v) {
    v.ready = j.at("ready").get<bool>();
  }
  inline std::string to_string(const LolLobbyReadyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
