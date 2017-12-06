#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashQueueGameTypeConfig_t {
    bool advancedLearningQuests;
    bool allowTrades;
    std::string banMode;
    int32_t banTimerDuration;
    bool battleBoost;
    bool crossTeamChampionPool;
    bool deathMatch;
    bool doNotRemove;
    bool duplicatePick;
    bool exclusivePick;
    int64_t id;
    bool learningQuests;
    int32_t mainPickTimerDuration;
    int32_t maxAllowableBans;
    std::string name;
    bool onboardCoopBeginner;
    std::string pickMode;
    int32_t postPickTimerDuration;
    bool reroll;
    bool teamChampionPool;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameTypeConfig_t& v) {
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["allowTrades"] = v.allowTrades;
    j["banMode"] = v.banMode;
    j["banTimerDuration"] = v.banTimerDuration;
    j["battleBoost"] = v.battleBoost;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["deathMatch"] = v.deathMatch;
    j["doNotRemove"] = v.doNotRemove;
    j["duplicatePick"] = v.duplicatePick;
    j["exclusivePick"] = v.exclusivePick;
    j["id"] = v.id;
    j["learningQuests"] = v.learningQuests;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["name"] = v.name;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["pickMode"] = v.pickMode;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["reroll"] = v.reroll;
    j["teamChampionPool"] = v.teamChampionPool;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameTypeConfig_t& v) {
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.reroll = j.at("reroll").get<bool>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
  }
}
