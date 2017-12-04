#ifndef SWAGGER_TYPES_LolClashTournament_HPP
#define SWAGGER_TYPES_LolClashTournament_HPP
#include <json.hpp>
#include "ClashRewardConfigClient.hpp"
#include "LolClashTournamentPhase.hpp"
namespace test {
  // 
  struct LolClashTournament {
'    // 
    bool allowRosterCreation;
    // 
    bool allowRosterDisband;
    // 
    std::vector<int32_t> buyInOptions;
    // 
    int64_t endTimeMs;
    // 
    int32_t entryFee;
    // 
    int64_t id;
    // 
    int32_t maxSubstitutes;
    // 
    std::string nameLocKey;
    // 
    std::vector<LolClashTournamentPhase> phases;
    // 
    std::vector<ClashRewardConfigClient> rewardConfig;
    // 
    int32_t rosterSize;
    // 
    int64_t scoutingDurationMs;
    // 
    int64_t startTimeMs;
    // 
    int32_t themeId;
  };

  void to_json(nlohmann::json& j, const LolClashTournament& v) {
    j["allowRosterCreation"] = v.allowRosterCreation;
    j["allowRosterDisband"] = v.allowRosterDisband;
    j["buyInOptions"] = v.buyInOptions;
    j["endTimeMs"] = v.endTimeMs;
    j["entryFee"] = v.entryFee;
    j["id"] = v.id;
    j["maxSubstitutes"] = v.maxSubstitutes;
    j["nameLocKey"] = v.nameLocKey;
    j["phases"] = v.phases;
    j["rewardConfig"] = v.rewardConfig;
    j["rosterSize"] = v.rosterSize;
    j["scoutingDurationMs"] = v.scoutingDurationMs;
    j["startTimeMs"] = v.startTimeMs;
    j["themeId"] = v.themeId;
  }

  void from_json(const nlohmann::json& j, LolClashTournament& v) {
    v.allowRosterCreation = j.at("allowRosterCreation").get<bool>;
    v.allowRosterDisband = j.at("allowRosterDisband").get<bool>;
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>;
    v.endTimeMs = j.at("endTimeMs").get<int64_t>;
    v.entryFee = j.at("entryFee").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.maxSubstitutes = j.at("maxSubstitutes").get<int32_t>;
    v.nameLocKey = j.at("nameLocKey").get<std::string>;
    v.phases = j.at("phases").get<std::vector<LolClashTournamentPhase>>;
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>;
    v.rosterSize = j.at("rosterSize").get<int32_t>;
    v.scoutingDurationMs = j.at("scoutingDurationMs").get<int64_t>;
    v.startTimeMs = j.at("startTimeMs").get<int64_t>;
    v.themeId = j.at("themeId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournament_HPP
