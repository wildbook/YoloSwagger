#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEvent_t {
    bool nowHasAccessToMastery;
    std::vector<uint64_t> newSpells;
    int32_t rpEarned;
    bool leveledUp;
    bool newMasterySlotUnlocked;
    uint32_t newSummonerLevel;
    bool newRuneSlotUnlocked;
    std::vector<int32_t> newQueues;
    bool switchedToStandardFreeToPlayChampRotation;
    bool nowHasAccessToLoot;
    bool nowHasAccessToPublicChatRooms;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent_t& v) {
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["newSpells"] = v.newSpells;
    j["rpEarned"] = v.rpEarned;
    j["leveledUp"] = v.leveledUp;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["newQueues"] = v.newQueues;
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent_t& v) {
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>();
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>();
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>();
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>();
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>();
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>();
  }
  inline std::string to_string(const PlayerLevelUpEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
