#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootGrantNotification_t {
    std::string_t messageKey;
    std::string_t lootName;
    int32_t_t championId;
    uint64_t_t playerId;
    std::string_t msgId;
    uint64_t_t gameId;
    std::string_t playerGrade;
    int64_t_t id;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootGrantNotification_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolLootLootGrantNotification_t& v) {
    v.messageKey = j.at("messageKey").get<std::string_t>();
    v.lootName = j.at("lootName").get<std::string_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.msgId = j.at("msgId").get<std::string_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.playerGrade = j.at("playerGrade").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLootLootGrantNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
