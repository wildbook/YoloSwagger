#ifndef SWAGGER_TYPES_LolLootLootGrantNotification_HPP
#define SWAGGER_TYPES_LolLootLootGrantNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootLootGrantNotification {
    // 
    uint64_t accountId;
    // 
    int32_t championId;
    // 
    uint64_t gameId;
    // 
    int64_t id;
    // 
    std::string lootName;
    // 
    std::string messageKey;
    // 
    std::string msgId;
    // 
    std::string playerGrade;
    // 
    uint64_t playerId;
  };

  void to_json(nlohmann::json& j, const LolLootLootGrantNotification& v) {
    j["accountId"] = v.accountId;
    j["championId"] = v.championId;
    j["gameId"] = v.gameId;
    j["id"] = v.id;
    j["lootName"] = v.lootName;
    j["messageKey"] = v.messageKey;
    j["msgId"] = v.msgId;
    j["playerGrade"] = v.playerGrade;
    j["playerId"] = v.playerId;
  }

  void from_json(const nlohmann::json& j, LolLootLootGrantNotification& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.id = j.at("id").get<int64_t>;
    v.lootName = j.at("lootName").get<std::string>;
    v.messageKey = j.at("messageKey").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
    v.playerGrade = j.at("playerGrade").get<std::string>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootLootGrantNotification_HPP
