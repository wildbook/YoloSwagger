#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigClient.hpp"
#include "LolClashTournamentPhase.hpp"
namespace leagueapi {
  struct LolClashTournament_t {
    int64_t scoutingDurationMs;
    int64_t endTimeMs;
    std::vector<LolClashTournamentPhase_t> phases;
    int32_t entryFee;
    int32_t rosterSize;
    std::vector<int32_t> buyInOptions;
    std::string nameLocKey;
    bool allowRosterDisband;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    int64_t id;
    int64_t startTimeMs;
    int32_t themeId;
    int32_t maxSubstitutes;
    bool allowRosterCreation;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament_t& v) {
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["endTimeMs"] = v.endTimeMs;
    j["phases"] = v.phases;
    j["entryFee"] = v.entryFee;
    j["rosterSize"] = v.rosterSize;
    j["buyInOptions"] = v.buyInOptions;
    j["nameLocKey"] = v.nameLocKey;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["rewardConfig"] = v.rewardConfig;
    j["id"] = v.id;
    j["startTimeMs"] = v.startTimeMs;
    j["themeId"] = v.themeId;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["allowRosterCreation"] = v.allowRosterCreation;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournament_t& v) {
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase_t>>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.id = j.at("id").get<int64_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>();
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>();
  }
}
