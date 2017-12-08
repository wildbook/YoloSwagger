#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaverBusterLcdsMatchmakingNotification_t {
    std::vector<nlohmann::json> playerJoinFailures;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterLcdsMatchmakingNotification_t& v) {
    j["playerJoinFailures"] = v.playerJoinFailures;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterLcdsMatchmakingNotification_t& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<nlohmann::json>>();
  }
  inline std::string to_string(const LeaverBusterLcdsMatchmakingNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
