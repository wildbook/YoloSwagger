#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Punishment_t {
    std::string playerFacingMessage;
    std::vector<uint64_t> punishedForGameIds;
    std::string punishmentType;
    int64_t punishmentLengthGames;
    std::vector<std::string> punishedForChatLogs;
    uint64_t punishmentLengthMillis;
    std::string punishmentReason;
    uint64_t punishedUntilDateMillis;
    bool permaBan;
  };

  inline void to_json(nlohmann::json& j, const Punishment_t& v) {
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["punishmentType"] = v.punishmentType;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishedForChatLogs"] = v.punishedForChatLogs;
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
    j["punishmentReason"] = v.punishmentReason;
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["permaBan"] = v.permaBan;
  }

  inline void from_json(const nlohmann::json& j, Punishment_t& v) {
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>();
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>();
    v.punishmentReason = j.at("punishmentReason").get<std::string>();
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>();
    v.permaBan = j.at("permaBan").get<bool>();
  }
  inline std::string to_string(const Punishment_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
