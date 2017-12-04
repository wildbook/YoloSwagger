#ifndef SWAGGER_TYPES_ClashEventData_HPP
#define SWAGGER_TYPES_ClashEventData_HPP
#include <json.hpp>
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  // 
  struct ClashEventData {
    // 
    int32_t bracket;
    // 
    std::string earnedDate;
    // 
    std::vector<std::string> playerUUIDs;
    // 
    ClashRewardSpec rewardSpec;
    // 
    std::string rewardType;
    // 
    int32_t seasonId;
    // 
    std::string teamLogoChromaId;
    // 
    std::string teamLogoName;
    // 
    std::string teamName;
    // 
    std::string theme;
    // 
    std::string tier;
    // 
    int64_t tournamentId;
    // 
    std::string tournamentName;
  };

  void to_json(nlohmann::json& j, const ClashEventData& v) {
    j["bracket"] = v.bracket;
    j["earnedDate"] = v.earnedDate;
    j["playerUUIDs"] = v.playerUUIDs;
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
    j["seasonId"] = v.seasonId;
    j["teamLogoChromaId"] = v.teamLogoChromaId;
    j["teamLogoName"] = v.teamLogoName;
    j["teamName"] = v.teamName;
    j["theme"] = v.theme;
    j["tier"] = v.tier;
    j["tournamentId"] = v.tournamentId;
    j["tournamentName"] = v.tournamentName;
  }

  void from_json(const nlohmann::json& j, ClashEventData& v) {
    v.bracket = j.at("bracket").get<int32_t>;
    v.earnedDate = j.at("earnedDate").get<std::string>;
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>;
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>;
    v.rewardType = j.at("rewardType").get<std::string>;
    v.seasonId = j.at("seasonId").get<int32_t>;
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>;
    v.teamLogoName = j.at("teamLogoName").get<std::string>;
    v.teamName = j.at("teamName").get<std::string>;
    v.theme = j.at("theme").get<std::string>;
    v.tier = j.at("tier").get<std::string>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.tournamentName = j.at("tournamentName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClashEventData_HPP
