#ifndef SWAGGER_TYPES_LolClashQueueGameTypeConfig_HPP
#define SWAGGER_TYPES_LolClashQueueGameTypeConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashQueueGameTypeConfig {
    // 
    bool advancedLearningQuests;
    // 
    bool allowTrades;
    // 
    bool battleBoost;
    // 
    bool learningQuests;
    // 
    bool deathMatch;
    // 
    bool crossTeamChampionPool;
    // 
    bool exclusivePick;
    // 
    int64_t id;
    // 
    bool teamChampionPool;
    // 
    bool duplicatePick;
    // 
    bool doNotRemove;
    // 
    int32_t banTimerDuration;
    // 
    int32_t maxAllowableBans;
    // 
    bool reroll;
    // 
    std::string pickMode;
    // 
    bool onboardCoopBeginner;
    // 
    int32_t mainPickTimerDuration;
    // 
    std::string banMode;
    // 
    int32_t postPickTimerDuration;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameTypeConfig& v) {
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["allowTrades"] = v.allowTrades;
    j["battleBoost"] = v.battleBoost;
    j["learningQuests"] = v.learningQuests;
    j["deathMatch"] = v.deathMatch;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["exclusivePick"] = v.exclusivePick;
    j["id"] = v.id;
    j["teamChampionPool"] = v.teamChampionPool;
    j["duplicatePick"] = v.duplicatePick;
    j["doNotRemove"] = v.doNotRemove;
    j["banTimerDuration"] = v.banTimerDuration;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["reroll"] = v.reroll;
    j["pickMode"] = v.pickMode;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["banMode"] = v.banMode;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameTypeConfig& v) {
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>;
    v.allowTrades = j.at("allowTrades").get<bool>;
    v.battleBoost = j.at("battleBoost").get<bool>;
    v.learningQuests = j.at("learningQuests").get<bool>;
    v.deathMatch = j.at("deathMatch").get<bool>;
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>;
    v.exclusivePick = j.at("exclusivePick").get<bool>;
    v.id = j.at("id").get<int64_t>;
    v.teamChampionPool = j.at("teamChampionPool").get<bool>;
    v.duplicatePick = j.at("duplicatePick").get<bool>;
    v.doNotRemove = j.at("doNotRemove").get<bool>;
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>;
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>;
    v.reroll = j.at("reroll").get<bool>;
    v.pickMode = j.at("pickMode").get<std::string>;
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>;
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>;
    v.banMode = j.at("banMode").get<std::string>;
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashQueueGameTypeConfig_HPP
