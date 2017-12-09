#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashQueueGameTypeConfig_t {
    bool allowTrades;
    bool duplicatePick;
    bool advancedLearningQuests;
    std::string pickMode;
    bool crossTeamChampionPool;
    int32_t maxAllowableBans;
    bool onboardCoopBeginner;
    bool teamChampionPool;
    bool reroll;
    bool learningQuests;
    bool battleBoost;
    bool exclusivePick;
    bool doNotRemove;
    int32_t banTimerDuration;
    int64_t id;
    bool deathMatch;
    int32_t mainPickTimerDuration;
    int32_t postPickTimerDuration;
    std::string name;
    std::string banMode;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameTypeConfig_t& v) {
    j["allowTrades"] = v.allowTrades;
    j["duplicatePick"] = v.duplicatePick;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["pickMode"] = v.pickMode;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["teamChampionPool"] = v.teamChampionPool;
    j["reroll"] = v.reroll;
    j["learningQuests"] = v.learningQuests;
    j["battleBoost"] = v.battleBoost;
    j["exclusivePick"] = v.exclusivePick;
    j["doNotRemove"] = v.doNotRemove;
    j["banTimerDuration"] = v.banTimerDuration;
    j["id"] = v.id;
    j["deathMatch"] = v.deathMatch;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["name"] = v.name;
    j["banMode"] = v.banMode;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameTypeConfig_t& v) {
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.reroll = j.at("reroll").get<bool>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.banMode = j.at("banMode").get<std::string>();
  }
  inline std::string to_string(const LolClashQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
