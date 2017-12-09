#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentPhase.hpp"
#include "ClashRewardConfigClient.hpp"
namespace leagueapi {
  struct LolClashTournament_t {
    bool allowRosterCreation;
    std::vector<LolClashTournamentPhase_t> phases;
    int64_t scoutingDurationMs;
    int32_t rosterSize;
    int64_t endTimeMs;
    int32_t entryFee;
    std::vector<int32_t> buyInOptions;
    std::string nameLocKey;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    int32_t themeId;
    int64_t id;
    int64_t startTimeMs;
    bool allowRosterDisband;
    int32_t maxSubstitutes;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament_t& v) {
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["phases"] = v.phases;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["rosterSize"] = v.rosterSize;
    j["endTimeMs"] = v.endTimeMs;
    j["entryFee"] = v.entryFee;
    j["buyInOptions"] = v.buyInOptions;
    j["nameLocKey"] = v.nameLocKey;
    j["rewardConfig"] = v.rewardConfig;
    j["themeId"] = v.themeId;
    j["id"] = v.id;
    j["startTimeMs"] = v.startTimeMs;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["maxSubstitutes"] = v.maxSubstitutes;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournament_t& v) {
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>();
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase_t>>();
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>();
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>();
  }
  inline std::string to_string(const LolClashTournament_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
