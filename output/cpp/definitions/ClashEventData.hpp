#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  struct ClashEventData_t {
    std::vector<std::string> playerUUIDs;
    int32_t seasonId;
    std::string teamLogoChromaId;
    std::string teamLogoName;
    std::string tier;
    std::string teamName;
    int64_t tournamentId;
    std::string earnedDate;
    int32_t bracket;
    ClashRewardSpec_t rewardSpec;
    std::string rewardType;
    std::string theme;
    std::string tournamentName;
  };

  inline void to_json(nlohmann::json& j, const ClashEventData_t& v) {
    j["playerUUIDs"] = v.playerUUIDs;
    j["seasonId"] = v.seasonId;
    j["teamLogoChromaId"] = v.teamLogoChromaId;
    j["teamLogoName"] = v.teamLogoName;
    j["tier"] = v.tier;
    j["teamName"] = v.teamName;
    j["tournamentId"] = v.tournamentId;
    j["earnedDate"] = v.earnedDate;
    j["bracket"] = v.bracket;
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
    j["theme"] = v.theme;
    j["tournamentName"] = v.tournamentName;
  }

  inline void from_json(const nlohmann::json& j, ClashEventData_t& v) {
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>();
    v.seasonId = j.at("seasonId").get<int32_t>();
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>();
    v.teamLogoName = j.at("teamLogoName").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.teamName = j.at("teamName").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.earnedDate = j.at("earnedDate").get<std::string>();
    v.bracket = j.at("bracket").get<int32_t>();
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.theme = j.at("theme").get<std::string>();
    v.tournamentName = j.at("tournamentName").get<std::string>();
  }
  inline std::string to_string(const ClashEventData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
