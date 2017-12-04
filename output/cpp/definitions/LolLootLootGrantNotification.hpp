#ifndef SWAGGER_TYPES_LolLootLootGrantNotification_HPP
#define SWAGGER_TYPES_LolLootLootGrantNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootLootGrantNotification {
    // 
    std::string messageKey;
    // 
    std::string lootName;
    // 
    int32_t championId;
    // 
    uint64_t playerId;
    // 
    std::string msgId;
    // 
    uint64_t gameId;
    // 
    std::string playerGrade;
    // 
    int64_t id;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootGrantNotification& v) {
    j["messageKey"] = v.messageKey;
    j["lootName"] = v.lootName;
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
    j["msgId"] = v.msgId;
    j["gameId"] = v.gameId;
    j["playerGrade"] = v.playerGrade;
    j["id"] = v.id;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootGrantNotification& v) {
    v.messageKey = j.at("messageKey").get<std::string>;
    v.lootName = j.at("lootName").get<std::string>;
    v.championId = j.at("championId").get<int32_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.msgId = j.at("msgId").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.playerGrade = j.at("playerGrade").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootGrantNotification_HPP
