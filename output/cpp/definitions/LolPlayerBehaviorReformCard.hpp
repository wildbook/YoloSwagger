#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReformCard_t {
    std::vector<std::string> chatLogs;
    std::vector<uint64_t> gameIds;
    uint64_t id;
    std::string playerFacingMessage;
    int64_t punishmentLengthGames;
    uint64_t punishmentLengthTime;
    std::string punishmentType;
    std::string reason;
    int64_t restrictedChatGamesRemaining;
    uint64_t timeWhenPunishmentExpires;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard_t& v) {
    j["chatLogs"] = v.chatLogs;
    j["gameIds"] = v.gameIds;
    j["id"] = v.id;
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentLengthTime"] = v.punishmentLengthTime;
    j["punishmentType"] = v.punishmentType;
    j["reason"] = v.reason;
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining;
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard_t& v) {
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.id = j.at("id").get<uint64_t>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>();
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>();
  }
}
