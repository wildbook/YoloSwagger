#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Punishment_t {
    uint64_t punishmentLengthMillis;
    int64_t punishmentLengthGames;
    std::vector<uint64_t> punishedForGameIds;
    bool permaBan;
    std::vector<std::string> punishedForChatLogs;
    std::string punishmentReason;
    uint64_t punishedUntilDateMillis;
    std::string punishmentType;
    std::string playerFacingMessage;
  };

  inline void to_json(nlohmann::json& j, const Punishment_t& v) {
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["permaBan"] = v.permaBan;
    j["punishedForChatLogs"] = v.punishedForChatLogs;
    j["punishmentReason"] = v.punishmentReason;
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["punishmentType"] = v.punishmentType;
    j["playerFacingMessage"] = v.playerFacingMessage;
  }

  inline void from_json(const nlohmann::json& j, Punishment_t& v) {
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>();
    v.permaBan = j.at("permaBan").get<bool>();
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>();
    v.punishmentReason = j.at("punishmentReason").get<std::string>();
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
  }
}
