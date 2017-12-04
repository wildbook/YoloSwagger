#ifndef SWAGGER_TYPES_MatchmakingLcdsMatchMakerParams_HPP
#define SWAGGER_TYPES_MatchmakingLcdsMatchMakerParams_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsMatchMakerParams {
    // 
    std::string botDifficulty;
    // 
    std::string invitationId;
    // 
    std::string languages;
    // 
    std::string lastMaestroMessage;
    // 
    std::vector<int32_t> queueIds;
    // 
    std::vector<uint64_t> team;
    // 
    uint64_t teamId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams& v) {
    j["botDifficulty"] = v.botDifficulty;
    j["invitationId"] = v.invitationId;
    j["languages"] = v.languages;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["queueIds"] = v.queueIds;
    j["team"] = v.team;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams& v) {
    v.botDifficulty = j.at("botDifficulty").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.languages = j.at("languages").get<std::string>;
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>;
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>;
    v.team = j.at("team").get<std::vector<uint64_t>>;
    v.teamId = j.at("teamId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsMatchMakerParams_HPP
