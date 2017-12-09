#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootGrantNotification_t {
    uint64_t gameId;
    uint64_t accountId;
    uint64_t playerId;
    std::string msgId;
    std::string playerGrade;
    int64_t id;
    std::string lootName;
    std::string messageKey;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootGrantNotification_t& v) {
    j["gameId"] = v.gameId;
    j["accountId"] = v.accountId;
    j["playerId"] = v.playerId;
    j["msgId"] = v.msgId;
    j["playerGrade"] = v.playerGrade;
    j["id"] = v.id;
    j["lootName"] = v.lootName;
    j["messageKey"] = v.messageKey;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootGrantNotification_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.playerGrade = j.at("playerGrade").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.messageKey = j.at("messageKey").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLootLootGrantNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
