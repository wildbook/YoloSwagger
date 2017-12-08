#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyQueueGameTypeConfig_t {
    bool_t duplicatePick;
    int64_t_t id;
    bool_t advancedLearningQuests;
    bool_t deathMatch;
    bool_t onboardCoopBeginner;
    std::optional<int32_t_t> numPlayersPerTeamOverride;
    bool_t battleBoost;
    int32_t_t mainPickTimerDuration;
    std::optional<std::string_t> gameModeOverride;
    int32_t_t postPickTimerDuration;
    int32_t_t banTimerDuration;
    int32_t_t maxAllowableBans;
    bool_t reroll;
    std::string_t name;
    bool_t allowTrades;
    bool_t learningQuests;
    bool_t crossTeamChampionPool;
    bool_t teamChampionPool;
    bool_t doNotRemove;
    bool_t exclusivePick;
    std::string_t pickMode;
    std::string_t banMode;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueGameTypeConfig_t& v) {
    j["duplicatePick"] = v.duplicatePick;
    j["id"] = v.id;
    j["advancedLearningQuests"] = v.advancedLearningQuests;
    j["deathMatch"] = v.deathMatch;
    j["onboardCoopBeginner"] = v.onboardCoopBeginner;
    if(v.numPlayersPerTeamOverride)
      j["numPlayersPerTeamOverride"] = *v.numPlayersPerTeamOverride;
    j["battleBoost"] = v.battleBoost;
    j["mainPickTimerDuration"] = v.mainPickTimerDuration;
    if(v.gameModeOverride)
      j["gameModeOverride"] = *v.gameModeOverride;
    j["postPickTimerDuration"] = v.postPickTimerDuration;
    j["banTimerDuration"] = v.banTimerDuration;
    j["maxAllowableBans"] = v.maxAllowableBans;
    j["reroll"] = v.reroll;
    j["name"] = v.name;
    j["allowTrades"] = v.allowTrades;
    j["learningQuests"] = v.learningQuests;
    j["crossTeamChampionPool"] = v.crossTeamChampionPool;
    j["teamChampionPool"] = v.teamChampionPool;
    j["doNotRemove"] = v.doNotRemove;
    j["exclusivePick"] = v.exclusivePick;
    j["pickMode"] = v.pickMode;
    j["banMode"] = v.banMode;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueGameTypeConfig_t& v) {
    v.duplicatePick = j.at("duplicatePick").get<bool_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.advancedLearningQuests = j.at("advancedLearningQuests").get<bool_t>();
    v.deathMatch = j.at("deathMatch").get<bool_t>();
    v.onboardCoopBeginner = j.at("onboardCoopBeginner").get<bool_t>();
    if(auto it = j.find("numPlayersPerTeamOverride"); it != j.end() && !it->is_null())
      v.numPlayersPerTeamOverride = it->get<int32_t_t>();
    v.battleBoost = j.at("battleBoost").get<bool_t>();
    v.mainPickTimerDuration = j.at("mainPickTimerDuration").get<int32_t_t>();
    if(auto it = j.find("gameModeOverride"); it != j.end() && !it->is_null())
      v.gameModeOverride = it->get<std::string_t>();
    v.postPickTimerDuration = j.at("postPickTimerDuration").get<int32_t_t>();
    v.banTimerDuration = j.at("banTimerDuration").get<int32_t_t>();
    v.maxAllowableBans = j.at("maxAllowableBans").get<int32_t_t>();
    v.reroll = j.at("reroll").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
    v.allowTrades = j.at("allowTrades").get<bool_t>();
    v.learningQuests = j.at("learningQuests").get<bool_t>();
    v.crossTeamChampionPool = j.at("crossTeamChampionPool").get<bool_t>();
    v.teamChampionPool = j.at("teamChampionPool").get<bool_t>();
    v.doNotRemove = j.at("doNotRemove").get<bool_t>();
    v.exclusivePick = j.at("exclusivePick").get<bool_t>();
    v.pickMode = j.at("pickMode").get<std::string_t>();
    v.banMode = j.at("banMode").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyQueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
