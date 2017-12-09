#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentPhase.hpp"
#include "ClashRewardConfigClient.hpp"
namespace leagueapi {
  struct LolClashTournament_t {
    int64_t endTimeMs;
    std::string nameLocKey;
    int32_t rosterSize;
    bool allowRosterDisband;
    int32_t entryFee;
    int32_t themeId;
    int64_t scoutingDurationMs;
    std::vector<int32_t> buyInOptions;
    bool allowRosterCreation;
    std::vector<LolClashTournamentPhase_t> phases;
    int64_t id;
    int32_t maxSubstitutes;
    int64_t startTimeMs;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament_t& v) {
    j["endTimeMs"] = v.endTimeMs;
    j["nameLocKey"] = v.nameLocKey;
    j["rosterSize"] = v.rosterSize;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["entryFee"] = v.entryFee;
    j["themeId"] = v.themeId;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["buyInOptions"] = v.buyInOptions;
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["phases"] = v.phases;
    j["id"] = v.id;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["startTimeMs"] = v.startTimeMs;
    j["rewardConfig"] = v.rewardConfig;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournament_t& v) {
    v.endTimeMs = j.at("endTimeMs").get<int64_t>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>();
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase_t>>();
    v.id = j.at("id").get<int64_t>();
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>();
    v.startTimeMs = j.at("startTimeMs").get<int64_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
  }
  inline std::string to_string(const LolClashTournament_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
