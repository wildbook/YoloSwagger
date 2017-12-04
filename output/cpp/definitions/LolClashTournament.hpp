#ifndef SWAGGER_TYPES_LolClashTournament_HPP
#define SWAGGER_TYPES_LolClashTournament_HPP
#include <json.hpp>
#include "ClashRewardConfigClient.hpp"
#include "LolClashTournamentPhase.hpp"
namespace leagueapi {
  // 
  struct LolClashTournament {
    // 
    int64_t startTimeMs;
    // 
    std::vector<LolClashTournamentPhase> phases;
    // 
    std::vector<ClashRewardConfigClient> rewardConfig;
    // 
    std::vector<int32_t> buyInOptions;
    // 
    bool allowRosterCreation;
    // 
    int64_t endTimeMs;
    // 
    std::string nameLocKey;
    // 
    int32_t maxSubstitutes;
    // 
    int64_t scoutingDurationMs;
    // 
    bool allowRosterDisband;
    // 
    int32_t entryFee;
    // 
    int32_t themeId;
    // 
    int32_t rosterSize;
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournament& v) {
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

  inline void from_json(const nlohmann::json& j, LolClashTournament& v) {
    v.startTimeMs = j.at("startTimeMs").get<int64_t>;
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>;
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>;
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>;
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>;
    v.endTimeMs = j.at("endTimeMs").get<int64_t>;
    v.nameLocKey = j.at("nameLocKey").get<std::string>;
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>;
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>;
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>;
    v.entryFee = j.at("entryFee").get<int32_t>;
    v.themeId = j.at("themeId").get<int32_t>;
    v.rosterSize = j.at("rosterSize").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournament_HPP