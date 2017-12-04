#ifndef SWAGGER_TYPES_LolLobbyQueueGameTypeConfig_HPP
#define SWAGGER_TYPES_LolLobbyQueueGameTypeConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyQueueGameTypeConfig {
    // 
    bool duplicatePick;
    // 
    int64_t id;
    // 
    bool advancedLearningQuests;
    // 
    bool deathMatch;
    // 
    bool onboardCoopBeginner;
    // 
    int32_t numPlayersPerTeamOverride;
    // 
    bool battleBoost;
    // 
    int32_t mainPickTimerDuration;
    // 
    std::string gameModeOverride;
    // 
    int32_t postPickTimerDuration;
    // 
    int32_t banTimerDuration;
    // 
    int32_t maxAllowableBans;
    // 
    bool reroll;
    // 
    std::string name;
    // 
    bool allowTrades;
    // 
    bool learningQuests;
    // 
    bool crossTeamChampionPool;
    // 
    bool teamChampionPool;
    // 
    bool doNotRemove;
    // 
    bool exclusivePick;
    // 
    std::string pickMode;
    // 
    std::string banMode;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameTypeConfig& v) {
    j["duplicatePick"] = v.duplicatePick;
    j["id"] = v.id;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["deathMatch"] = v.deathMatch;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["numPlayersPerTeamOverride"] = v.numPlayersPerTeamOverride;
    j["battleBoost"] = v.battleBoost;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["gameModeOverride"] = v.gameModeOverride;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["banTimerDuration"] = v.banTimerDuration;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["reroll"] = v.reroll;
    j["name"] = v.name;
    j["allowTrades"] = v.allowTrades;
    j["learningQuests"] = v.learningQuests;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["teamChampionPool"] = v.teamChampionPool;
    j["doNotRemove"] = v.doNotRemove;
    j["exclusivePick"] = v.exclusivePick;
    j["pickMode"] = v.pickMode;
    j["banMode"] = v.banMode;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameTypeConfig& v) {
    v.duplicatePick = j.at("duplicatePick").get<bool>;
    v.id = j.at("id").get<int64_t>;
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>;
    v.deathMatch = j.at("deathMatch").get<bool>;
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>;
    v.numPlayersPerTeamOverride = j.at("numPlayersPerTeamOverride").get<int32_t>;
    v.battleBoost = j.at("battleBoost").get<bool>;
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>;
    v.gameModeOverride = j.at("gameModeOverride").get<std::string>;
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>;
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>;
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>;
    v.reroll = j.at("reroll").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.allowTrades = j.at("allowTrades").get<bool>;
    v.learningQuests = j.at("learningQuests").get<bool>;
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>;
    v.teamChampionPool = j.at("teamChampionPool").get<bool>;
    v.doNotRemove = j.at("doNotRemove").get<bool>;
    v.exclusivePick = j.at("exclusivePick").get<bool>;
    v.pickMode = j.at("pickMode").get<std::string>;
    v.banMode = j.at("banMode").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueGameTypeConfig_HPP