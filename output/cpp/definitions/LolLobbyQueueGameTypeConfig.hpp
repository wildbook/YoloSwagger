#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyQueueGameTypeConfig_t {
    bool doNotRemove;
    bool duplicatePick;
    bool deathMatch;
    std::string banMode;
    bool reroll;
    std::optional<int32_t> numPlayersPerTeamOverride;
    bool teamChampionPool;
    bool onboardCoopBeginner;
    bool advancedLearningQuests;
    bool battleBoost;
    bool learningQuests;
    int32_t postPickTimerDuration;
    bool allowTrades;
    bool crossTeamChampionPool;
    std::string pickMode;
    int32_t maxAllowableBans;
    std::optional<std::string> gameModeOverride;
    int64_t id;
    std::string name;
    int32_t mainPickTimerDuration;
    bool exclusivePick;
    int32_t banTimerDuration;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameTypeConfig_t& v) {
    j["doNotRemove"] = v.doNotRemove;
    j["duplicatePick"] = v.duplicatePick;
    j["deathMatch"] = v.deathMatch;
    j["banMode"] = v.banMode;
    j["reroll"] = v.reroll;
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["teamChampionPool"] = v.teamChampionPool;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["battleBoost"] = v.battleBoost;
    j["learningQuests"] = v.learningQuests;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["allowTrades"] = v.allowTrades;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["pickMode"] = v.pickMode;
    j["maxAllowableBans"] = v.maxAllowableBans;
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["id"] = v.id;
    j["name"] = v.name;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    j["exclusivePick"] = v.exclusivePick;
    j["banTimerDuration"] = v.banTimerDuration;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameTypeConfig_t& v) {
    v.doNotRemove = j.at("doNotRemove").get<bool>();
    v.duplicatePick = j.at("duplicatePick").get<bool>();
    v.deathMatch = j.at("deathMatch").get<bool>();
    v.banMode = j.at("banMode").get<std::string>();
    v.reroll = j.at("reroll").get<bool>();
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<int32_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool>();
    v.battleBoost = j.at("battleBoost").get<bool>();
    v.learningQuests = j.at("learningQuests").get<bool>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t>();
    v.allowTrades = j.at("allowTrades").get<bool>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool>();
    v.pickMode = j.at("pickMode").get<std::string>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t>();
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
