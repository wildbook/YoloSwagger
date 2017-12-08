#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    std::vector<uint64_t> newSpells;
    uint32_t newSummonerLevel;
    bool nowHasAccessToMastery;
    bool newRuneSlotUnlocked;
    int32_t rpEarned;
    std::vector<int32_t> newQueues;
    bool nowHasAccessToLoot;
    bool switchedToStandardFreeToPlayChampRotation;
    bool leveledUp;
    bool newMasterySlotUnlocked;
    bool nowHasAccessToPublicChatRooms;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["newSpells"] = v.newSpells;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["rpEarned"] = v.rpEarned;
    j["newQueues"] = v.newQueues;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
    j["leveledUp"] = v.leveledUp;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>();
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>();
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>();
  }
  inline std::string to_string(const PlayerLevelUpEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
