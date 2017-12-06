#pragma once
#include <json.hpp>
#include <optional>
#include "LeaverBusterNotificationType.hpp"
namespace leagueapi {
  struct LeaverBusterNotificationResource_t {
    uint32_t id;
    std::string msgId;
    int32_t punishedGamesRemaining;
    LeaverBusterNotificationType_t type;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterNotificationResource_t& v) {
    j["id"] = v.id;
    j["msgId"] = v.msgId;
    j["punishedGamesRemaining"] = v.punishedGamesRemaining;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterNotificationResource_t& v) {
    v.id = j.at("id").get<uint32_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.punishedGamesRemaining = j.at("punishedGamesRemaining").get<int32_t>();
    v.type = j.at("type").get<LeaverBusterNotificationType_t>();
  }
}
