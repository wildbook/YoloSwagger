#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  struct ClashEventData_t {
    std::string theme;
    ClashRewardSpec_t rewardSpec;
    std::vector<std::string> playerUUIDs;
    std::string teamLogoName;
    std::string rewardType;
    std::string teamName;
    int64_t tournamentId;
    std::string tournamentName;
    std::string earnedDate;
    std::string teamLogoChromaId;
    int32_t bracket;
    std::string tier;
    int32_t seasonId;
  };

  inline void to_json(nlohmann::json& j, const ClashEventData_t& v) {
    j["theme"] = v.theme;
    j["rewardSpec"] = v.rewardSpec;
    j["playerUUIDs"] = v.playerUUIDs;
    j["teamLogoName"] = v.teamLogoName;
    j["rewardType"] = v.rewardType;
    j["teamName"] = v.teamName;
    j["tournamentId"] = v.tournamentId;
    j["tournamentName"] = v.tournamentName;
    j["earnedDate"] = v.earnedDate;
    j["teamLogoChromaId"] = v.teamLogoChromaId;
    j["bracket"] = v.bracket;
    j["tier"] = v.tier;
    j["seasonId"] = v.seasonId;
  }

  inline void from_json(const nlohmann::json& j, ClashEventData_t& v) {
    v.theme = j.at("theme").get<std::string>();
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>();
    v.teamLogoName = j.at("teamLogoName").get<std::string>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.teamName = j.at("teamName").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.tournamentName = j.at("tournamentName").get<std::string>();
    v.earnedDate = j.at("earnedDate").get<std::string>();
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>();
    v.bracket = j.at("bracket").get<int32_t>();
    v.tier = j.at("tier").get<std::string>();
    v.seasonId = j.at("seasonId").get<int32_t>();
  }
  inline std::string to_string(const ClashEventData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
