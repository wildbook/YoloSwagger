#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowQueueGameTypeConfig_t {
    bool battleBoost;
    int32_t banTimerDuration;
    bool deathMatch;
    std::string banMode;
    std::string pickMode;
    bool duplicatePick;
    bool onboardCoopBeginner;
    std::string name;
    bool teamChampionPool;
    bool doNotRemove;
    int32_t postPickTimerDuration;
    bool allowTrades;
    int64_t id;
    int32_t mainPickTimerDuration;
    bool learningQuests;
    bool exclusivePick;
    bool reroll;
    bool advancedLearningQuests;
    int32_t maxAllowableBans;
    bool crossTeamChampionPool;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameTypeConfig_t& v) {
    j["battleBoost"] = v.battleBoost;
    j["banTimerDuration"] = v.banTimerDuration;
    j["deathMatch"] = v.deathMatch;
    j["banMode"] = v.banMode;
    j["pickMode"] = v.pickMode;
    j["duplicatePick"] = v.duplicatePick;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["name"] = v.name;
    j["teamChampionPool"] = v.teamChampionPool;
    j["doNotRemove"] = v.doNotRemove;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["allowTrades"] = v.allowTrades;
    j["id"] = v.id;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["learningQuests"] = v.learningQuests;
    j["exclusivePick"] = v.exclusivePick;
    j["reroll"] = v.reroll;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameTypeConfig_t& v) {
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.reroll = j.at("reroll").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
  }
  inline std::string to_string(const LolGameflowQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
