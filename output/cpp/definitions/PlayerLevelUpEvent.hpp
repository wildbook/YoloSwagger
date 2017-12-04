#ifndef SWAGGER_TYPES_PlayerLevelUpEvent_HPP
#define SWAGGER_TYPES_PlayerLevelUpEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerLevelUpEvent {
    // 
    bool newMasterySlotUnlocked;
    // 
    uint32_t newSummonerLevel;
    // 
    int32_t rpEarned;
    // 
    bool leveledUp;
    // 
    bool nowHasAccessToMastery;
    // 
    std::vector<uint64_t> newSpells;
    // 
    std::vector<int32_t> newQueues;
    // 
    bool newRuneSlotUnlocked;
    // 
    bool nowHasAccessToPublicChatRooms;
    // 
    bool nowHasAccessToLoot;
    // 
    bool switchedToStandardFreeToPlayChampRotation;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEvent& v) {
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

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEvent& v) {
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>;
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>;
    v.rpEarned = j.at("rpEarned").get<int32_t>;
    v.leveledUp = j.at("leveledUp").get<bool>;
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>;
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>;
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>;
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>;
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>;
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>;
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PlayerLevelUpEvent_HPP
