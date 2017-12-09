#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueGameTypeConfig_t {
    bool allowTrades;
    std::optional<std::string> gameModeOverride;
    int32_t maxAllowableBans;
    bool onboardCoopBeginner;
    bool exclusivePick;
    bool deathMatch;
    bool learningQuests;
    bool battleBoost;
    std::optional<int32_t> numPlayersPerTeamOverride;
    bool doNotRemove;
    int64_t id;
    bool duplicatePick;
    int32_t postPickTimerDuration;
    std::string banMode;
    bool advancedLearningQuests;
    bool crossTeamChampionPool;
    bool teamChampionPool;
    bool reroll;
    std::string pickMode;
    int32_t banTimerDuration;
    int32_t mainPickTimerDuration;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueGameTypeConfig_t& v) {
    j["allowTrades"] = v.allowTrades;
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["exclusivePick"] = v.exclusivePick;
    j["deathMatch"] = v.deathMatch;
    j["learningQuests"] = v.learningQuests;
    j["battleBoost"] = v.battleBoost;
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["doNotRemove"] = v.doNotRemove;
    j["id"] = v.id;
    j["duplicatePick"] = v.duplicatePick;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["banMode"] = v.banMode;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["teamChampionPool"] = v.teamChampionPool;
    j["reroll"] = v.reroll;
    j["pickMode"] = v.pickMode;
    j["banTimerDuration"] = v.banTimerDuration;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueGameTypeConfig_t& v) {
    v.allowTrades = j.at("allowTrades").get<bool>();
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::string>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<int32_t>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.banMode = j.at("banMode").get<std::string>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.reroll = j.at("reroll").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolGameQueuesQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
