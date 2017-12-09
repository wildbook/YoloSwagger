#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReformCard_t {
    std::string reason;
    std::vector<std::string> chatLogs;
    int64_t punishmentLengthGames;
    std::string punishmentType;
    uint64_t timeWhenPunishmentExpires;
    uint64_t id;
    std::vector<uint64_t> gameIds;
    int64_t restrictedChatGamesRemaining;
    uint64_t punishmentLengthTime;
    std::string playerFacingMessage;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard_t& v) {
    j["reason"] = v.reason;
    j["chatLogs"] = v.chatLogs;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentType"] = v.punishmentType;
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires;
    j["id"] = v.id;
    j["gameIds"] = v.gameIds;
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining;
    j["punishmentLengthTime"] = v.punishmentLengthTime;
    j["playerFacingMessage"] = v.playerFacingMessage;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>();
    v.punishmentType = j.at("punishmentType").get<std::string>();
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>();
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>();
  }
  inline std::string to_string(const LolPlayerBehaviorReformCard_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
