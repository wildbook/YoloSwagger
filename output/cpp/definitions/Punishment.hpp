#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Punishment_t {
    std::vector<std::string> punishedForChatLogs;
    std::string punishmentReason;
    std::string punishmentType;
    std::string playerFacingMessage;
    uint64_t punishedUntilDateMillis;
    std::vector<uint64_t> punishedForGameIds;
    int64_t punishmentLengthGames;
    bool permaBan;
    uint64_t punishmentLengthMillis;
  };

  inline void to_json(nlohmann::json& j, const Punishment_t& v) {
    j["punishedForChatLogs"] = v.punishedForChatLogs;
    j["punishmentReason"] = v.punishmentReason;
    j["punishmentType"] = v.punishmentType;
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["permaBan"] = v.permaBan;
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
  }

  inline void from_json(const nlohmann::json& j, Punishment_t& v) {
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>();
    v.punishmentReason = j.at("punishmentReason").get<std::string>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>();
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.permaBan = j.at("permaBan").get<bool>();
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>();
  }
  inline std::string to_string(const Punishment_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
