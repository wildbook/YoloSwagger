#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSBroadcastNotification_t {
    std::vector<nlohmann::json> broadcastMessages;
  };

  inline void to_json(nlohmann::json& j, const LCDSBroadcastNotification_t& v) {
    j["broadcastMessages"] = v.broadcastMessages;
  }

  inline void from_json(const nlohmann::json& j, LCDSBroadcastNotification_t& v) {
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<nlohmann::json>>();
  }
}
