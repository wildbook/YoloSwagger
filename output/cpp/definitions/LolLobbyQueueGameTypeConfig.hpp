#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyQueueGameTypeConfig_t {
    bool duplicatePick;
    int32_t postPickTimerDuration;
    bool exclusivePick;
    bool advancedLearningQuests;
    bool doNotRemove;
    int64_t id;
    bool deathMatch;
    std::optional<std::string> gameModeOverride;
    std::string banMode;
    bool reroll;
    int32_t mainPickTimerDuration;
    std::string pickMode;
    int32_t maxAllowableBans;
    bool teamChampionPool;
    bool crossTeamChampionPool;
    int32_t banTimerDuration;
    std::string name;
    std::optional<int32_t> numPlayersPerTeamOverride;
    bool learningQuests;
    bool allowTrades;
    bool onboardCoopBeginner;
    bool battleBoost;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameTypeConfig_t& v) {
    j["duplicatePick"] = v.duplicatePick;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["exclusivePick"] = v.exclusivePick;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["doNotRemove"] = v.doNotRemove;
    j["id"] = v.id;
    j["deathMatch"] = v.deathMatch;
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["banMode"] = v.banMode;
    j["reroll"] = v.reroll;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["pickMode"] = v.pickMode;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["teamChampionPool"] = v.teamChampionPool;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["banTimerDuration"] = v.banTimerDuration;
    j["name"] = v.name;
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["learningQuests"] = v.learningQuests;
    j["allowTrades"] = v.allowTrades;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["battleBoost"] = v.battleBoost;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameTypeConfig_t& v) {
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    if(auto it = j.find("gameModeOverride"); it != j.end() !it->is_null())
      v.gameModeOverride = it->get<std::string>();
    v.banMode = j.at("banMode").get<std::string>();
    v.reroll = j.at("reroll").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() !it->is_null())
      v.numPlayersPerTeamOverride = it->get<int32_t>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
  }
}
