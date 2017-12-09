#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueGameTypeConfig_t {
    bool duplicatePick;
    std::optional<int32_t> numPlayersPerTeamOverride;
    int32_t postPickTimerDuration;
    int32_t maxAllowableBans;
    bool teamChampionPool;
    int64_t id;
    int32_t mainPickTimerDuration;
    bool battleBoost;
    std::string banMode;
    bool advancedLearningQuests;
    bool reroll;
    bool deathMatch;
    bool learningQuests;
    std::string pickMode;
    int32_t banTimerDuration;
    std::optional<std::string> gameModeOverride;
    bool onboardCoopBeginner;
    std::string name;
    bool doNotRemove;
    bool crossTeamChampionPool;
    bool exclusivePick;
    bool allowTrades;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueGameTypeConfig_t& v) {
    j["duplicatePick"] = v.duplicatePick;
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["teamChampionPool"] = v.teamChampionPool;
    j["id"] = v.id;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["battleBoost"] = v.battleBoost;
    j["banMode"] = v.banMode;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["reroll"] = v.reroll;
    j["deathMatch"] = v.deathMatch;
    j["learningQuests"] = v.learningQuests;
    j["pickMode"] = v.pickMode;
    j["banTimerDuration"] = v.banTimerDuration;
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["name"] = v.name;
    j["doNotRemove"] = v.doNotRemove;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["exclusivePick"] = v.exclusivePick;
    j["allowTrades"] = v.allowTrades;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueGameTypeConfig_t& v) {
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<int32_t>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.reroll = j.at("reroll").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::string>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
  }
  inline std::string to_string(const LolGameQueuesQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
