#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Punishment_t {
    uint64_t punishmentLengthMillis;
    std::vector<uint64_t> punishedForGameIds;
    std::vector<std::string> punishedForChatLogs;
    uint64_t punishedUntilDateMillis;
    std::string playerFacingMessage;
    bool permaBan;
    int64_t punishmentLengthGames;
    std::string punishmentReason;
    std::string punishmentType;
  };

  inline void to_json(nlohmann::json& j, const Punishment_t& v) {
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["punishedForChatLogs"] = v.punishedForChatLogs;
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["permaBan"] = v.permaBan;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentReason"] = v.punishmentReason;
    j["punishmentType"] = v.punishmentType;
  }

  inline void from_json(const nlohmann::json& j, Punishment_t& v) {
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>();
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>();
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>();
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.permaBan = j.at("permaBan").get<bool>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishmentReason = j.at("punishmentReason").get<std::string>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
  }
  inline std::string to_string(const Punishment_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
