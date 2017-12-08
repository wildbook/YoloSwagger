#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigClient.hpp"
#include "LolClashTournamentPhase.hpp"
namespace leagueapi {
  struct LolClashTournament_t {
    int64_t_t startTimeMs;
    std::vector<LolClashTournamentPhase_t> phases;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    std::vector<int32_t> buyInOptions;
    bool_t allowRosterCreation;
    int64_t_t endTimeMs;
    std::string_t nameLocKey;
    int32_t_t maxSubstitutes;
    int64_t_t scoutingDurationMs;
    bool_t allowRosterDisband;
    int32_t_t entryFee;
    int32_t_t themeId;
    int32_t_t rosterSize;
    int64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament_t& v) {
    j["startTimeMs"] = v.startTimeMs;
    j["phases"] = v.phases;
    j["rewardConfig"] = v.rewardConfig;
    j["buyInOptions"] = v.buyInOptions;
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["endTimeMs"] = v.endTimeMs;
    j["nameLocKey"] = v.nameLocKey;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["entryFee"] = v.entryFee;
    j["themeId"] = v.themeId;
    j["rosterSize"] = v.rosterSize;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournament_t& v) {
    v.startTimeMs = j.at("startTimeMs").get<int64_t_t>();
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase_t>>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t_t>();
    v.nameLocKey = j.at("nameLocKey").get<std::string_t>();
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t_t>();
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t_t>();
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool_t>();
    v.entryFee = j.at("entryFee").get<int32_t_t>();
    v.themeId = j.at("themeId").get<int32_t_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t_t>();
    v.id = j.at("id").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashTournament_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
