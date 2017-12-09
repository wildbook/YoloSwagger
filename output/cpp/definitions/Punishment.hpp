#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Punishment_t {
    std::vector<uint64_t> punishedForGameIds;
    uint64_t punishedUntilDateMillis;
    int64_t punishmentLengthGames;
    std::string punishmentType;
    std::string punishmentReason;
    uint64_t punishmentLengthMillis;
    bool permaBan;
    std::string playerFacingMessage;
    std::vector<std::string> punishedForChatLogs;
  };

  inline void to_json(nlohmann::json& j, const Punishment_t& v) {
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentType"] = v.punishmentType;
    j["punishmentReason"] = v.punishmentReason;
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
    j["permaBan"] = v.permaBan;
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishedForChatLogs"] = v.punishedForChatLogs;
  }

  inline void from_json(const nlohmann::json& j, Punishment_t& v) {
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>();
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.punishmentReason = j.at("punishmentReason").get<std::string>();
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>();
    v.permaBan = j.at("permaBan").get<bool>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>();
  }
  inline std::string to_string(const Punishment_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
