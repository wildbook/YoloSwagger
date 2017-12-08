#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorReformCard_t {
    std::string_t punishmentType;
    int64_t_t restrictedChatGamesRemaining;
    uint64_t_t punishmentLengthTime;
    std::string_t playerFacingMessage;
    int64_t_t punishmentLengthGames;
    std::string_t reason;
    std::vector<std::string> chatLogs;
    uint64_t_t timeWhenPunishmentExpires;
    std::vector<uint64_t> gameIds;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard_t& v) {
    j["punishmentType"] = v.punishmentType;
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining;
    j["punishmentLengthTime"] = v.punishmentLengthTime;
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["reason"] = v.reason;
    j["chatLogs"] = v.chatLogs;
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires;
    j["gameIds"] = v.gameIds;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard_t& v) {
    v.punishmentType = j.at("punishmentType").get<std::string_t>();
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t_t>();
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t_t>();
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string_t>();
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t_t>();
    v.reason = j.at("reason").get<std::string_t>();
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>();
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t_t>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorReformCard_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
