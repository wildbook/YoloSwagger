#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReformCard_t {
    std::string playerFacingMessage;
    uint64_t id;
    std::string reason;
    std::string punishmentType;
    uint64_t timeWhenPunishmentExpires;
    int64_t restrictedChatGamesRemaining;
    std::vector<std::string> chatLogs;
    std::vector<uint64_t> gameIds;
    int64_t punishmentLengthGames;
    uint64_t punishmentLengthTime;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard_t& v) {
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["id"] = v.id;
    j["reason"] = v.reason;
    j["punishmentType"] = v.punishmentType;
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires;
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining;
    j["chatLogs"] = v.chatLogs;
    j["gameIds"] = v.gameIds;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentLengthTime"] = v.punishmentLengthTime;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard_t& v) {
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>();
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>();
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorReformCard_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
