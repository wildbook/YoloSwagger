#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyQueueGameTypeConfig_t {
    bool battleBoost;
    bool deathMatch;
    std::string banMode;
    bool doNotRemove;
    std::string name;
    std::optional<std::string> gameModeOverride;
    int32_t banTimerDuration;
    int64_t id;
    bool exclusivePick;
    bool learningQuests;
    int32_t maxAllowableBans;
    bool crossTeamChampionPool;
    std::optional<int32_t> numPlayersPerTeamOverride;
    bool reroll;
    std::string pickMode;
    bool duplicatePick;
    int32_t postPickTimerDuration;
    bool onboardCoopBeginner;
    bool allowTrades;
    int32_t mainPickTimerDuration;
    bool teamChampionPool;
    bool advancedLearningQuests;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameTypeConfig_t& v) {
    j["battleBoost"] = v.battleBoost;
    j["deathMatch"] = v.deathMatch;
    j["banMode"] = v.banMode;
    j["doNotRemove"] = v.doNotRemove;
    j["name"] = v.name;
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["banTimerDuration"] = v.banTimerDuration;
    j["id"] = v.id;
    j["exclusivePick"] = v.exclusivePick;
    j["learningQuests"] = v.learningQuests;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["reroll"] = v.reroll;
    j["pickMode"] = v.pickMode;
    j["duplicatePick"] = v.duplicatePick;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["allowTrades"] = v.allowTrades;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["teamChampionPool"] = v.teamChampionPool;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameTypeConfig_t& v) {
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::string>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<int32_t>();
    v.reroll = j.at("reroll").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
  }
  inline std::string to_string(const LolLobbyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
