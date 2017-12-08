#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsConfig_t {
    int32_t clubTagRequirementMinMembers;
    int32_t clubDescriptionMaxLength;
    int32_t clubTagRequirementMinGames;
    int32_t maxActiveClubs;
    int32_t clubNominationsMaxPending;
    int32_t maxClubTagLength;
    int32_t clubMotdMaxLength;
    int32_t minClubTagLength;
    int32_t clubTagRequirementsMinMemberLevel;
    int32_t minClubNameLength;
    int32_t maxClubNameLength;
    bool clubNominationsEnabled;
  };

  inline void to_json(nlohmann::json& j, const ClubsConfig_t& v) {
    j["clubTagRequirementMinMembers"] = v.clubTagRequirementMinMembers;
    j["clubDescriptionMaxLength"] = v.clubDescriptionMaxLength;
    j["clubTagRequirementMinGames"] = v.clubTagRequirementMinGames;
    j["maxActiveClubs"] = v.maxActiveClubs;
    j["clubNominationsMaxPending"] = v.clubNominationsMaxPending;
    j["maxClubTagLength"] = v.maxClubTagLength;
    j["clubMotdMaxLength"] = v.clubMotdMaxLength;
    j["minClubTagLength"] = v.minClubTagLength;
    j["clubTagRequirementsMinMemberLevel"] = v.clubTagRequirementsMinMemberLevel;
    j["minClubNameLength"] = v.minClubNameLength;
    j["maxClubNameLength"] = v.maxClubNameLength;
    j["clubNominationsEnabled"] = v.clubNominationsEnabled;
  }

  inline void from_json(const nlohmann::json& j, ClubsConfig_t& v) {
    v.clubTagRequirementMinMembers = j.at("clubTagRequirementMinMembers").get<int32_t>();
    v.clubDescriptionMaxLength = j.at("clubDescriptionMaxLength").get<int32_t>();
    v.clubTagRequirementMinGames = j.at("clubTagRequirementMinGames").get<int32_t>();
    v.maxActiveClubs = j.at("maxActiveClubs").get<int32_t>();
    v.clubNominationsMaxPending = j.at("clubNominationsMaxPending").get<int32_t>();
    v.maxClubTagLength = j.at("maxClubTagLength").get<int32_t>();
    v.clubMotdMaxLength = j.at("clubMotdMaxLength").get<int32_t>();
    v.minClubTagLength = j.at("minClubTagLength").get<int32_t>();
    v.clubTagRequirementsMinMemberLevel = j.at("clubTagRequirementsMinMemberLevel").get<int32_t>();
    v.minClubNameLength = j.at("minClubNameLength").get<int32_t>();
    v.maxClubNameLength = j.at("maxClubNameLength").get<int32_t>();
    v.clubNominationsEnabled = j.at("clubNominationsEnabled").get<bool>();
  }
  inline std::string to_string(const ClubsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
