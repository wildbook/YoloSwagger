#ifndef SWAGGER_TYPES_EndOfGameLcdsTeamInfo_HPP
#define SWAGGER_TYPES_EndOfGameLcdsTeamInfo_HPP
#include <json.hpp>
#include "EndOfGameLcdsTeamId.hpp"
namespace leagueapi {
  // 
  struct EndOfGameLcdsTeamInfo {
    // 
    EndOfGameLcdsTeamId teamId;
    // 
    std::string tag;
    // 
    std::string memberStatusString;
    // 
    int64_t secondsUntilEligibleForDeletion;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsTeamInfo& v) {
    j["teamId"] = v.teamId;
    j["tag"] = v.tag;
    j["memberStatusString"] = v.memberStatusString;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsTeamInfo& v) {
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId>;
    v.tag = j.at("tag").get<std::string>;
    v.memberStatusString = j.at("memberStatusString").get<std::string>;
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsTeamInfo_HPP
