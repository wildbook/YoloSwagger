#ifndef SWAGGER_TYPES_PlayerLevelUpEvent_HPP
#define SWAGGER_TYPES_PlayerLevelUpEvent_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlayerLevelUpEvent {
'    // 
    bool leveledUp;
    // 
    bool newMasterySlotUnlocked;
    // 
    std::vector<int32_t> newQueues;
    // 
    bool newRuneSlotUnlocked;
    // 
    std::vector<uint64_t> newSpells;
    // 
    uint32_t newSummonerLevel;
    // 
    bool nowHasAccessToLoot;
    // 
    bool nowHasAccessToMastery;
    // 
    bool nowHasAccessToPublicChatRooms;
    // 
    int32_t rpEarned;
    // 
    bool switchedToStandardFreeToPlayChampRotation;
  };

  void to_json(nlohmann::json& j, const PlayerLevelUpEvent& v) {
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

  void from_json(const nlohmann::json& j, PlayerLevelUpEvent& v) {
    v.leveledUp = j.at("leveledUp").get<bool>;
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>;
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>;
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>;
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>;
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>;
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>;
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>;
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>;
    v.rpEarned = j.at("rpEarned").get<int32_t>;
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PlayerLevelUpEvent_HPP
