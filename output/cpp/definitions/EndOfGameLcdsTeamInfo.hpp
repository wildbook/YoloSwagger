#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsTeamId.hpp"
namespace leagueapi {
  struct EndOfGameLcdsTeamInfo_t {
    std::string name;
    EndOfGameLcdsTeamId_t teamId;
    int64_t secondsUntilEligibleForDeletion;
    std::string memberStatusString;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsTeamInfo_t& v) {
    j["name"] = v.name;
    j["teamId"] = v.teamId;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
    j["memberStatusString"] = v.memberStatusString;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsTeamInfo_t& v) {
    v.name = j.at("name").get<std::string>();
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId_t>();
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
  }
  inline std::string to_string(const EndOfGameLcdsTeamInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
