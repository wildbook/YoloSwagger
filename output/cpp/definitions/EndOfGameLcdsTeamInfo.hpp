#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsTeamId.hpp"
namespace leagueapi {
  struct EndOfGameLcdsTeamInfo_t {
    EndOfGameLcdsTeamId_t teamId;
    std::string_t tag;
    std::string_t memberStatusString;
    int64_t_t secondsUntilEligibleForDeletion;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsTeamInfo_t& v) {
    j["teamId"] = v.teamId;
    j["tag"] = v.tag;
    j["memberStatusString"] = v.memberStatusString;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsTeamInfo_t& v) {
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId_t>();
    v.tag = j.at("tag").get<std::string_t>();
    v.memberStatusString = j.at("memberStatusString").get<std::string_t>();
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const EndOfGameLcdsTeamInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
