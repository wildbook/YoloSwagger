#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReformCard_t {
    int64_t punishmentLengthGames;
    uint64_t punishmentLengthTime;
    uint64_t id;
    int64_t restrictedChatGamesRemaining;
    std::string reason;
    uint64_t timeWhenPunishmentExpires;
    std::vector<uint64_t> gameIds;
    std::vector<std::string> chatLogs;
    std::string punishmentType;
    std::string playerFacingMessage;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard_t& v) {
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentLengthTime"] = v.punishmentLengthTime;
    j["id"] = v.id;
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining;
    j["reason"] = v.reason;
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires;
    j["gameIds"] = v.gameIds;
    j["chatLogs"] = v.chatLogs;
    j["punishmentType"] = v.punishmentType;
    j["playerFacingMessage"] = v.playerFacingMessage;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard_t& v) {
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
  }
}
