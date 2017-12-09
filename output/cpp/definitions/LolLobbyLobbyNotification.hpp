#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyNotification_t {
    uint64_t timestamp;
    std::string notificationReason;
    std::vector<uint64_t> summonerIds;
    std::string notificationId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["notificationReason"] = v.notificationReason;
    j["summonerIds"] = v.summonerIds;
    j["notificationId"] = v.notificationId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification_t& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.notificationReason = j.at("notificationReason").get<std::string>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.notificationId = j.at("notificationId").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
