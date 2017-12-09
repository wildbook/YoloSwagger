#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReformCard_t {
    std::string playerFacingMessage;
    uint64_t punishmentLengthTime;
    std::vector<uint64_t> gameIds;
    std::string reason;
    int64_t restrictedChatGamesRemaining;
    std::string punishmentType;
    std::vector<std::string> chatLogs;
    int64_t punishmentLengthGames;
    uint64_t timeWhenPunishmentExpires;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard_t& v) {
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishmentLengthTime"] = v.punishmentLengthTime;
    j["gameIds"] = v.gameIds;
    j["reason"] = v.reason;
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining;
    j["punishmentType"] = v.punishmentType;
    j["chatLogs"] = v.chatLogs;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard_t& v) {
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.reason = j.at("reason").get<std::string>();
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorReformCard_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
