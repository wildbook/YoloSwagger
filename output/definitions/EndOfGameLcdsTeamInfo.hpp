#ifndef SWAGGER_TYPES_EndOfGameLcdsTeamInfo_HPP
#define SWAGGER_TYPES_EndOfGameLcdsTeamInfo_HPP
#include <json.hpp>
#include "EndOfGameLcdsTeamId.hpp"
namespace leagueapi {
  // 
  struct EndOfGameLcdsTeamInfo {
    // 
    std::string memberStatusString;
    // 
    std::string name;
    // 
    int64_t secondsUntilEligibleForDeletion;
    // 
    std::string tag;
    // 
    EndOfGameLcdsTeamId teamId;
  };

  void to_json(nlohmann::json& j, const EndOfGameLcdsTeamInfo& v) {
    j["memberStatusString"] = v.memberStatusString;
    j["name"] = v.name;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
    j["tag"] = v.tag;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, EndOfGameLcdsTeamInfo& v) {
    v.memberStatusString = j.at("memberStatusString").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>;
    v.tag = j.at("tag").get<std::string>;
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsTeamInfo_HPP
