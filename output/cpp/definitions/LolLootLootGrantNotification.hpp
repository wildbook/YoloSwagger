#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootGrantNotification_t {
    std::string msgId;
    std::string messageKey;
    int32_t championId;
    uint64_t playerId;
    uint64_t gameId;
    int64_t id;
    uint64_t accountId;
    std::string playerGrade;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootGrantNotification_t& v) {
    j["msgId"] = v.msgId;
    j["messageKey"] = v.messageKey;
    j["championId"] = v.championId;
    j["playerId"] = v.playerId;
    j["gameId"] = v.gameId;
    j["id"] = v.id;
    j["accountId"] = v.accountId;
    j["playerGrade"] = v.playerGrade;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootGrantNotification_t& v) {
    v.msgId = j.at("msgId").get<std::string>();
    v.messageKey = j.at("messageKey").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.id = j.at("id").get<int64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.playerGrade = j.at("playerGrade").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
  }
  inline std::string to_string(const LolLootLootGrantNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
