#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyQueueAvailability.hpp"
namespace leagueapi {
  struct LolLobbyQueueCustomGame_t {
    LolLobbyQueueAvailability_t queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueCustomGame_t& v) {
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueCustomGame_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability_t>();
  }
  inline std::string to_string(const LolLobbyQueueCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
