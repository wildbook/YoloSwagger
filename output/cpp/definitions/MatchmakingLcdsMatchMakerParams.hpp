#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsMatchMakerParams_t {
    uint64_t teamId;
    std::optional<std::string> languages;
    std::vector<uint64_t> team;
    std::string lastMaestroMessage;
    std::vector<int32_t> queueIds;
    std::string botDifficulty;
    std::optional<std::string> invitationId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams_t& v) {
    j["teamId"] = v.teamId;
    if(v.languages)
      j["languages"] = *v.languages;
    j["team"] = v.team;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["queueIds"] = v.queueIds;
    j["botDifficulty"] = v.botDifficulty;
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams_t& v) {
    v.teamId = j.at("teamId").get<uint64_t>();
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::string>();
    v.team = j.at("team").get<std::vector<uint64_t>>();
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>();
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.botDifficulty = j.at("botDifficulty").get<std::string>();
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::string>();
  }
  inline std::string to_string(const MatchmakingLcdsMatchMakerParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
