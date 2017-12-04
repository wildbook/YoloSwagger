#ifndef SWAGGER_TYPES_Punishment_HPP
#define SWAGGER_TYPES_Punishment_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct Punishment {
    // 
    bool permaBan;
    // 
    std::string playerFacingMessage;
    // 
    std::vector<std::string> punishedForChatLogs;
    // 
    std::vector<uint64_t> punishedForGameIds;
    // 
    uint64_t punishedUntilDateMillis;
    // 
    int64_t punishmentLengthGames;
    // 
    uint64_t punishmentLengthMillis;
    // 
    std::string punishmentReason;
    // 
    std::string punishmentType;
  };

  inline void to_json(nlohmann::json& j, const Punishment& v) {
    j["permaBan"] = v.permaBan;
    j["playerFacingMessage"] = v.playerFacingMessage;
    j["punishedForChatLogs"] = v.punishedForChatLogs;
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
    j["punishmentReason"] = v.punishmentReason;
    j["punishmentType"] = v.punishmentType;
  }

  inline void from_json(const nlohmann::json& j, Punishment& v) {
    v.permaBan = j.at("permaBan").get<bool>;
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>;
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>;
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>;
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>;
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>;
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>;
    v.punishmentReason = j.at("punishmentReason").get<std::string>;
    v.punishmentType = j.at("punishmentType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_Punishment_HPP
