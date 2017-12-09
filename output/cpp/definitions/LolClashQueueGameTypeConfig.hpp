#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashQueueGameTypeConfig_t {
    bool duplicatePick;
    bool deathMatch;
    int32_t postPickTimerDuration;
    int32_t maxAllowableBans;
    bool learningQuests;
    bool onboardCoopBeginner;
    int64_t id;
    bool teamChampionPool;
    int32_t banTimerDuration;
    bool reroll;
    int32_t mainPickTimerDuration;
    std::string name;
    bool battleBoost;
    bool doNotRemove;
    std::string banMode;
    bool crossTeamChampionPool;
    bool advancedLearningQuests;
    bool exclusivePick;
    std::string pickMode;
    bool allowTrades;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameTypeConfig_t& v) {
    j["duplicatePick"] = v.duplicatePick;
    j["deathMatch"] = v.deathMatch;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["learningQuests"] = v.learningQuests;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["id"] = v.id;
    j["teamChampionPool"] = v.teamChampionPool;
    j["banTimerDuration"] = v.banTimerDuration;
    j["reroll"] = v.reroll;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["name"] = v.name;
    j["battleBoost"] = v.battleBoost;
    j["doNotRemove"] = v.doNotRemove;
    j["banMode"] = v.banMode;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["exclusivePick"] = v.exclusivePick;
    j["pickMode"] = v.pickMode;
    j["allowTrades"] = v.allowTrades;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameTypeConfig_t& v) {
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.reroll = j.at("reroll").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.allowTrades = j.at("allowTrades").get<bool>();
  }
  inline std::string to_string(const LolClashQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
