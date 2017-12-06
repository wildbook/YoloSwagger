#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    uint32_t newSummonerLevel;
    bool nowHasAccessToPublicChatRooms;
    bool newMasterySlotUnlocked;
    bool leveledUp;
    bool switchedToStandardFreeToPlayChampRotation;
    bool nowHasAccessToMastery;
    bool nowHasAccessToLoot;
    std::vector<uint64_t> newSpells;
    bool newRuneSlotUnlocked;
    int32_t rpEarned;
    std::vector<int32_t> newQueues;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["leveledUp"] = v.leveledUp;
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["newSpells"] = v.newSpells;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["rpEarned"] = v.rpEarned;
    j["newQueues"] = v.newQueues;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>();
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>();
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>();
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
  }
}
