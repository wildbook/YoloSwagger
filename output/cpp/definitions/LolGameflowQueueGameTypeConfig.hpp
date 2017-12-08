#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowQueueGameTypeConfig_t {
    bool_t advancedLearningQuests;
    bool_t allowTrades;
    bool_t battleBoost;
    bool_t learningQuests;
    bool_t deathMatch;
    bool_t crossTeamChampionPool;
    bool_t exclusivePick;
    int64_t_t id;
    bool_t teamChampionPool;
    bool_t duplicatePick;
    bool_t doNotRemove;
    int32_t_t banTimerDuration;
    int32_t_t maxAllowableBans;
    bool_t reroll;
    std::string_t pickMode;
    bool_t onboardCoopBeginner;
    int32_t_t mainPickTimerDuration;
    std::string_t banMode;
    int32_t_t postPickTimerDuration;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameTypeConfig_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameTypeConfig_t& v) {
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool_t>();
    v.allowTrades = j.at("allowTrades").get<bool_t>();
    v.battleBoost = j.at("battleBoost").get<bool_t>();
    v.learningQuests = j.at("learningQuests").get<bool_t>();
    v.deathMatch = j.at("deathMatch").get<bool_t>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool_t>();
    v.duplicatePick = j.at("duplicatePick").get<bool_t>();
    v.doNotRemove = j.at("doNotRemove").get<bool_t>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t_t>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t_t>();
    v.reroll = j.at("reroll").get<bool_t>();
    v.pickMode = j.at("pickMode").get<std::string_t>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool_t>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t_t>();
    v.banMode = j.at("banMode").get<std::string_t>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolGameflowQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
