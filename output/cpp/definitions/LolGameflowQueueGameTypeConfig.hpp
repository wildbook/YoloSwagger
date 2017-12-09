#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowQueueGameTypeConfig_t {
    int32_t postPickTimerDuration;
    bool doNotRemove;
    bool onboardCoopBeginner;
    bool duplicatePick;
    bool deathMatch;
    bool advancedLearningQuests;
    bool teamChampionPool;
    std::string banMode;
    bool reroll;
    bool allowTrades;
    std::string name;
    bool crossTeamChampionPool;
    std::string pickMode;
    int32_t maxAllowableBans;
    bool exclusivePick;
    int64_t id;
    bool battleBoost;
    int32_t mainPickTimerDuration;
    bool learningQuests;
    int32_t banTimerDuration;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameTypeConfig_t& v) {
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["doNotRemove"] = v.doNotRemove;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["duplicatePick"] = v.duplicatePick;
    j["deathMatch"] = v.deathMatch;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["teamChampionPool"] = v.teamChampionPool;
    j["banMode"] = v.banMode;
    j["reroll"] = v.reroll;
    j["allowTrades"] = v.allowTrades;
    j["name"] = v.name;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["pickMode"] = v.pickMode;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["exclusivePick"] = v.exclusivePick;
    j["id"] = v.id;
    j["battleBoost"] = v.battleBoost;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["learningQuests"] = v.learningQuests;
    j["banTimerDuration"] = v.banTimerDuration;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameTypeConfig_t& v) {
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.reroll = j.at("reroll").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
  }
  inline std::string to_string(const LolGameflowQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
