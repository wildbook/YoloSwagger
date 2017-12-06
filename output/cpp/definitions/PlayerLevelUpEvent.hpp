#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    bool leveledUp;
    bool newMasterySlotUnlocked;
    std::vector<int32_t> newQueues;
    bool newRuneSlotUnlocked;
    std::vector<uint64_t> newSpells;
    uint32_t newSummonerLevel;
    bool nowHasAccessToLoot;
    bool nowHasAccessToMastery;
    bool nowHasAccessToPublicChatRooms;
    int32_t rpEarned;
    bool switchedToStandardFreeToPlayChampRotation;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["leveledUp"] = v.leveledUp;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["newQueues"] = v.newQueues;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["newSpells"] = v.newSpells;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
    j["rpEarned"] = v.rpEarned;
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>();
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>();
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>();
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>();
  }
}
