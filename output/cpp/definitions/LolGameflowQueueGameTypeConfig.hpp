#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowQueueGameTypeConfig_t {
    bool duplicatePick;
    std::string pickMode;
    int32_t postPickTimerDuration;
    bool exclusivePick;
    bool learningQuests;
    int32_t maxAllowableBans;
    bool doNotRemove;
    bool teamChampionPool;
    bool advancedLearningQuests;
    int32_t mainPickTimerDuration;
    bool crossTeamChampionPool;
    int32_t banTimerDuration;
    int64_t id;
    std::string name;
    std::string banMode;
    bool deathMatch;
    bool reroll;
    bool onboardCoopBeginner;
    bool battleBoost;
    bool allowTrades;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameTypeConfig_t& v) {
    j["duplicatePick"] = v.duplicatePick;
    j["pickMode"] = v.pickMode;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["exclusivePick"] = v.exclusivePick;
    j["learningQuests"] = v.learningQuests;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["doNotRemove"] = v.doNotRemove;
    j["teamChampionPool"] = v.teamChampionPool;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["banTimerDuration"] = v.banTimerDuration;
    j["id"] = v.id;
    j["name"] = v.name;
    j["banMode"] = v.banMode;
    j["deathMatch"] = v.deathMatch;
    j["reroll"] = v.reroll;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["battleBoost"] = v.battleBoost;
    j["allowTrades"] = v.allowTrades;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameTypeConfig_t& v) {
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.banMode = j.at("banMode").get<std::string>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.reroll = j.at("reroll").get<bool>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
  }
}
