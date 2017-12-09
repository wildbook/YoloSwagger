#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  struct ClashEventData_t {
    std::vector<std::string> playerUUIDs;
    std::string teamName;
    int64_t tournamentId;
    int32_t bracket;
    std::string rewardType;
    std::string tournamentName;
    std::string teamLogoName;
    int32_t seasonId;
    ClashRewardSpec_t rewardSpec;
    std::string earnedDate;
    std::string teamLogoChromaId;
    std::string tier;
    std::string theme;
  };

  inline void to_json(nlohmann::json& j, const ClashEventData_t& v) {
    j["playerUUIDs"] = v.playerUUIDs;
    j["teamName"] = v.teamName;
    j["tournamentId"] = v.tournamentId;
    j["bracket"] = v.bracket;
    j["rewardType"] = v.rewardType;
    j["tournamentName"] = v.tournamentName;
    j["teamLogoName"] = v.teamLogoName;
    j["seasonId"] = v.seasonId;
    j["rewardSpec"] = v.rewardSpec;
    j["earnedDate"] = v.earnedDate;
    j["teamLogoChromaId"] = v.teamLogoChromaId;
    j["tier"] = v.tier;
    j["theme"] = v.theme;
  }

  inline void from_json(const nlohmann::json& j, ClashEventData_t& v) {
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>();
    v.teamName = j.at("teamName").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.bracket = j.at("bracket").get<int32_t>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.tournamentName = j.at("tournamentName").get<std::string>();
    v.teamLogoName = j.at("teamLogoName").get<std::string>();
    v.seasonId = j.at("seasonId").get<int32_t>();
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
    v.earnedDate = j.at("earnedDate").get<std::string>();
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.theme = j.at("theme").get<std::string>();
  }
  inline std::string to_string(const ClashEventData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
