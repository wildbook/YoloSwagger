#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BroadcastNotification_t {
    std::vector<nlohmann::json> broadcastMessages;
  };

  inline void to_json(nlohmann::json& j, const BroadcastNotification_t& v) {
    j["broadcastMessages"] = v.broadcastMessages;
  }

  inline void from_json(const nlohmann::json& j, BroadcastNotification_t& v) {
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<nlohmann::json>>();
  }
}
