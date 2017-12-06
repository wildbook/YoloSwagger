#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootGrantNotification_t {
    uint64_t playerId;
    int32_t championId;
    std::string msgId;
    int64_t id;
    std::string lootName;
    uint64_t accountId;
    std::string messageKey;
    uint64_t gameId;
    std::string playerGrade;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootGrantNotification_t& v) {
    j["playerId"] = v.playerId;
    j["championId"] = v.championId;
    j["msgId"] = v.msgId;
    j["id"] = v.id;
    j["lootName"] = v.lootName;
    j["accountId"] = v.accountId;
    j["messageKey"] = v.messageKey;
    j["gameId"] = v.gameId;
    j["playerGrade"] = v.playerGrade;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootGrantNotification_t& v) {
    v.playerId = j.at("playerId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.messageKey = j.at("messageKey").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.playerGrade = j.at("playerGrade").get<std::string>();
  }
}
