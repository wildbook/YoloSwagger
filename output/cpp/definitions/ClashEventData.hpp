#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  struct ClashEventData_t {
    int32_t seasonId;
    std::string tournamentName;
    std::string teamLogoName;
    std::string teamName;
    std::string rewardType;
    std::string theme;
    int32_t bracket;
    int64_t tournamentId;
    std::string earnedDate;
    std::string tier;
    std::vector<std::string> playerUUIDs;
    std::string teamLogoChromaId;
    ClashRewardSpec_t rewardSpec;
  };

  inline void to_json(nlohmann::json& j, const ClashEventData_t& v) {
    j["seasonId"] = v.seasonId;
    j["tournamentName"] = v.tournamentName;
    j["teamLogoName"] = v.teamLogoName;
    j["teamName"] = v.teamName;
    j["rewardType"] = v.rewardType;
    j["theme"] = v.theme;
    j["bracket"] = v.bracket;
    j["tournamentId"] = v.tournamentId;
    j["earnedDate"] = v.earnedDate;
    j["tier"] = v.tier;
    j["playerUUIDs"] = v.playerUUIDs;
    j["teamLogoChromaId"] = v.teamLogoChromaId;
    j["rewardSpec"] = v.rewardSpec;
  }

  inline void from_json(const nlohmann::json& j, ClashEventData_t& v) {
    v.seasonId = j.at("seasonId").get<int32_t>();
    v.tournamentName = j.at("tournamentName").get<std::string>();
    v.teamLogoName = j.at("teamLogoName").get<std::string>();
    v.teamName = j.at("teamName").get<std::string>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.theme = j.at("theme").get<std::string>();
    v.bracket = j.at("bracket").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.earnedDate = j.at("earnedDate").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>();
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>();
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
  }
  inline std::string to_string(const ClashEventData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
