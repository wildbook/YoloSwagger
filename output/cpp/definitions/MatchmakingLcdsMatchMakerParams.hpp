#ifndef SWAGGER_TYPES_MatchmakingLcdsMatchMakerParams_HPP
#define SWAGGER_TYPES_MatchmakingLcdsMatchMakerParams_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsMatchMakerParams {
    // 
    std::vector<int32_t> queueIds;
    // 
    uint64_t teamId;
    // 
    std::string languages;
    // 
    std::string invitationId;
    // 
    std::string botDifficulty;
    // 
    std::string lastMaestroMessage;
    // 
    std::vector<uint64_t> team;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams& v) {
    j["queueIds"] = v.queueIds;
    j["teamId"] = v.teamId;
    j["languages"] = v.languages;
    j["invitationId"] = v.invitationId;
    j["botDifficulty"] = v.botDifficulty;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["team"] = v.team;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>;
    v.teamId = j.at("teamId").get<uint64_t>;
    v.languages = j.at("languages").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.botDifficulty = j.at("botDifficulty").get<std::string>;
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>;
    v.team = j.at("team").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsMatchMakerParams_HPP
