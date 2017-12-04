#ifndef SWAGGER_TYPES_LolPlayerBehaviorReformCard_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorReformCard_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPlayerBehaviorReformCard {
    // 
    std::string punishmentType;
    // 
    int64_t restrictedChatGamesRemaining;
    // 
    uint64_t punishmentLengthTime;
    // 
    std::string playerFacingMessage;
    // 
    int64_t punishmentLengthGames;
    // 
    std::string reason;
    // 
    std::vector<std::string> chatLogs;
    // 
    uint64_t timeWhenPunishmentExpires;
    // 
    std::vector<uint64_t> gameIds;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorReformCard& v) {
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

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorReformCard& v) {
    v.punishmentType = j.at("punishmentType").get<std::string>;
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>;
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>;
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>;
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>;
    v.reason = j.at("reason").get<std::string>;
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>;
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>;
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorReformCard_HPP
