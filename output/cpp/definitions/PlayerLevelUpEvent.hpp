#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    bool nowHasAccessToPublicChatRooms;
    std::vector<int32_t> newQueues;
    bool leveledUp;
    uint32_t newSummonerLevel;
    int32_t rpEarned;
    bool newRuneSlotUnlocked;
    bool switchedToStandardFreeToPlayChampRotation;
    bool nowHasAccessToMastery;
    bool newMasterySlotUnlocked;
    bool nowHasAccessToLoot;
    std::vector<uint64_t> newSpells;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
    j["newQueues"] = v.newQueues;
    j["leveledUp"] = v.leveledUp;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["rpEarned"] = v.rpEarned;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["newSpells"] = v.newSpells;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>();
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>();
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>();
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>();
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const PlayerLevelUpEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
