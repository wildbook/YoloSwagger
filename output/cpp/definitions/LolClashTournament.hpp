#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigClient.hpp"
#include "LolClashTournamentPhase.hpp"
namespace leagueapi {
  struct LolClashTournament_t {
    std::string nameLocKey;
    int32_t themeId;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    std::vector<int32_t> buyInOptions;
    int64_t scoutingDurationMs;
    int64_t id;
    int64_t startTimeMs;
    std::vector<LolClashTournamentPhase_t> phases;
    int32_t maxSubstitutes;
    int64_t endTimeMs;
    int32_t rosterSize;
    bool allowRosterDisband;
    bool allowRosterCreation;
    int32_t entryFee;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament_t& v) {
    j["nameLocKey"] = v.nameLocKey;
    j["themeId"] = v.themeId;
    j["rewardConfig"] = v.rewardConfig;
    j["buyInOptions"] = v.buyInOptions;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["id"] = v.id;
    j["startTimeMs"] = v.startTimeMs;
    j["phases"] = v.phases;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["endTimeMs"] = v.endTimeMs;
    j["rosterSize"] = v.rosterSize;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["entryFee"] = v.entryFee;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournament_t& v) {
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase_t>>();
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>();
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>();
    v.entryFee = j.at("entryFee").get<int32_t>();
  }
  inline std::string to_string(const LolClashTournament_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
