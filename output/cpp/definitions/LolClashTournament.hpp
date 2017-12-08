#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigClient.hpp"
#include "LolClashTournamentPhase.hpp"
namespace leagueapi {
  struct LolClashTournament_t {
    std::vector<LolClashTournamentPhase_t> phases;
    bool allowRosterCreation;
    int32_t rosterSize;
    int64_t scoutingDurationMs;
    int32_t themeId;
    int64_t endTimeMs;
    int64_t id;
    int64_t startTimeMs;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    int32_t entryFee;
    std::string nameLocKey;
    bool allowRosterDisband;
    int32_t maxSubstitutes;
    std::vector<int32_t> buyInOptions;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament_t& v) {
    j["phases"] = v.phases;
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["rosterSize"] = v.rosterSize;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["themeId"] = v.themeId;
    j["endTimeMs"] = v.endTimeMs;
    j["id"] = v.id;
    j["startTimeMs"] = v.startTimeMs;
    j["rewardConfig"] = v.rewardConfig;
    j["entryFee"] = v.entryFee;
    j["nameLocKey"] = v.nameLocKey;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["buyInOptions"] = v.buyInOptions;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournament_t& v) {
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase_t>>();
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>();
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolClashTournament_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
