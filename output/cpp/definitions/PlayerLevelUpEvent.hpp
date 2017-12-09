#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    bool switchedToStandardFreeToPlayChampRotation;
    std::vector<int32_t> newQueues;
    bool newRuneSlotUnlocked;
    bool newMasterySlotUnlocked;
    bool nowHasAccessToMastery;
    bool nowHasAccessToPublicChatRooms;
    int32_t rpEarned;
    std::vector<uint64_t> newSpells;
    bool leveledUp;
    uint32_t newSummonerLevel;
    bool nowHasAccessToLoot;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
    j["newQueues"] = v.newQueues;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
    j["rpEarned"] = v.rpEarned;
    j["newSpells"] = v.newSpells;
    j["leveledUp"] = v.leveledUp;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>();
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>();
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>();
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>();
  }
  inline std::string to_string(const PlayerLevelUpEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
