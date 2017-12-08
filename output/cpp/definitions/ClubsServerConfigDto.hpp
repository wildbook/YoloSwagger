#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsServerConfigDto_t {
    int32_t_t clubTagRequirementsMinMemberLevel;
    int32_t_t maxClubTagLength;
    int32_t_t maxClubNameLength;
    int32_t_t maxActiveClubs;
    int32_t_t minClubNameLength;
    int32_t_t clubDescriptionMaxLength;
    int32_t_t clubTagRequirementMinGames;
    int32_t_t clubTagRequirementMinMembers;
    bool_t clubNominationsEnabled;
    int32_t_t clubMotdMaxLength;
    int32_t_t minClubTagLength;
    int32_t_t clubNominationsMaxPending;
  };

  inline void to_json(nlohmann::json& j, const ClubsServerConfigDto_t& v) {
    j["clubTagRequirementsMinMemberLevel"] = v.clubTagRequirementsMinMemberLevel;
    j["maxClubTagLength"] = v.maxClubTagLength;
    j["maxClubNameLength"] = v.maxClubNameLength;
    j["maxActiveClubs"] = v.maxActiveClubs;
    j["minClubNameLength"] = v.minClubNameLength;
    j["clubDescriptionMaxLength"] = v.clubDescriptionMaxLength;
    j["clubTagRequirementMinGames"] = v.clubTagRequirementMinGames;
    j["clubTagRequirementMinMembers"] = v.clubTagRequirementMinMembers;
    j["clubNominationsEnabled"] = v.clubNominationsEnabled;
    j["clubMotdMaxLength"] = v.clubMotdMaxLength;
    j["minClubTagLength"] = v.minClubTagLength;
    j["clubNominationsMaxPending"] = v.clubNominationsMaxPending;
  }

  inline void from_json(const nlohmann::json& j, ClubsServerConfigDto_t& v) {
    v.clubTagRequirementsMinMemberLevel = j.at("clubTagRequirementsMinMemberLevel").get<int32_t_t>();
    v.maxClubTagLength = j.at("maxClubTagLength").get<int32_t_t>();
    v.maxClubNameLength = j.at("maxClubNameLength").get<int32_t_t>();
    v.maxActiveClubs = j.at("maxActiveClubs").get<int32_t_t>();
    v.minClubNameLength = j.at("minClubNameLength").get<int32_t_t>();
    v.clubDescriptionMaxLength = j.at("clubDescriptionMaxLength").get<int32_t_t>();
    v.clubTagRequirementMinGames = j.at("clubTagRequirementMinGames").get<int32_t_t>();
    v.clubTagRequirementMinMembers = j.at("clubTagRequirementMinMembers").get<int32_t_t>();
    v.clubNominationsEnabled = j.at("clubNominationsEnabled").get<bool_t>();
    v.clubMotdMaxLength = j.at("clubMotdMaxLength").get<int32_t_t>();
    v.minClubTagLength = j.at("minClubTagLength").get<int32_t_t>();
    v.clubNominationsMaxPending = j.at("clubNominationsMaxPending").get<int32_t_t>();
  }
  inline std::string to_string(const ClubsServerConfigDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
