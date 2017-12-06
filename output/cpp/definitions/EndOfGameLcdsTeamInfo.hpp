#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsTeamId.hpp"
namespace leagueapi {
  struct EndOfGameLcdsTeamInfo_t {
    std::string memberStatusString;
    std::string name;
    int64_t secondsUntilEligibleForDeletion;
    std::string tag;
    EndOfGameLcdsTeamId_t teamId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsTeamInfo_t& v) {
    j["memberStatusString"] = v.memberStatusString;
    j["name"] = v.name;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
    j["tag"] = v.tag;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsTeamInfo_t& v) {
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>();
    v.tag = j.at("tag").get<std::string>();
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId_t>();
  }
}
