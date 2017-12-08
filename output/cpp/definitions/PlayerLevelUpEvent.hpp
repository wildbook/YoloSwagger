#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    bool_t newMasterySlotUnlocked;
    uint32_t_t newSummonerLevel;
    int32_t_t rpEarned;
    bool_t leveledUp;
    bool_t nowHasAccessToMastery;
    std::vector<uint64_t> newSpells;
    std::vector<int32_t> newQueues;
    bool_t newRuneSlotUnlocked;
    bool_t nowHasAccessToPublicChatRooms;
    bool_t nowHasAccessToLoot;
    bool_t switchedToStandardFreeToPlayChampRotation;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["rpEarned"] = v.rpEarned;
    j["leveledUp"] = v.leveledUp;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["newSpells"] = v.newSpells;
    j["newQueues"] = v.newQueues;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool_t>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t_t>();
    v.rpEarned = j.at("rpEarned").get<int32_t_t>();
    v.leveledUp = j.at("leveledUp").get<bool_t>();
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool_t>();
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool_t>();
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool_t>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool_t>();
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool_t>();
  }
  inline std::string to_string(const PlayerLevelUpEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
