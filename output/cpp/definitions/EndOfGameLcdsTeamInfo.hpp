#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsTeamId.hpp"
namespace leagueapi {
  struct EndOfGameLcdsTeamInfo_t {
    EndOfGameLcdsTeamId_t teamId;
    std::string memberStatusString;
    std::string name;
    std::string tag;
    int64_t secondsUntilEligibleForDeletion;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsTeamInfo_t& v) {
    j["teamId"] = v.teamId;
    j["memberStatusString"] = v.memberStatusString;
    j["name"] = v.name;
    j["tag"] = v.tag;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsTeamInfo_t& v) {
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId_t>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>();
  }
}
