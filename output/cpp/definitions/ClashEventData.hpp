#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  struct ClashEventData_t {
    std::string rewardType;
    std::string teamLogoChromaId;
    int64_t tournamentId;
    std::string tournamentName;
    std::string earnedDate;
    ClashRewardSpec_t rewardSpec;
    std::string teamLogoName;
    std::vector<std::string> playerUUIDs;
    std::string tier;
    int32_t seasonId;
    std::string theme;
    int32_t bracket;
    std::string teamName;
  };

  inline void to_json(nlohmann::json& j, const ClashEventData_t& v) {
    j["rewardType"] = v.rewardType;
    j["teamLogoChromaId"] = v.teamLogoChromaId;
    j["tournamentId"] = v.tournamentId;
    j["tournamentName"] = v.tournamentName;
    j["earnedDate"] = v.earnedDate;
    j["rewardSpec"] = v.rewardSpec;
    j["teamLogoName"] = v.teamLogoName;
    j["playerUUIDs"] = v.playerUUIDs;
    j["tier"] = v.tier;
    j["seasonId"] = v.seasonId;
    j["theme"] = v.theme;
    j["bracket"] = v.bracket;
    j["teamName"] = v.teamName;
  }

  inline void from_json(const nlohmann::json& j, ClashEventData_t& v) {
    v.rewardType = j.at("rewardType").get<std::string>();
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.tournamentName = j.at("tournamentName").get<std::string>();
    v.earnedDate = j.at("earnedDate").get<std::string>();
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
    v.teamLogoName = j.at("teamLogoName").get<std::string>();
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>();
    v.tier = j.at("tier").get<std::string>();
    v.seasonId = j.at("seasonId").get<int32_t>();
    v.theme = j.at("theme").get<std::string>();
    v.bracket = j.at("bracket").get<int32_t>();
    v.teamName = j.at("teamName").get<std::string>();
  }
  inline std::string to_string(const ClashEventData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
