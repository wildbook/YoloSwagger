#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsMatchMakerParams_t {
    std::string botDifficulty;
    std::vector<uint64_t> team;
    std::string lastMaestroMessage;
    std::vector<int32_t> queueIds;
    std::optional<std::string> languages;
    std::optional<std::string> invitationId;
    uint64_t teamId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams_t& v) {
    j["botDifficulty"] = v.botDifficulty;
    j["team"] = v.team;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["queueIds"] = v.queueIds;
    if(v.languages)
      j["languages"] = *v.languages;
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams_t& v) {
    v.botDifficulty = j.at("botDifficulty").get<std::string>();
    v.team = j.at("team").get<std::vector<uint64_t>>();
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>();
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::string>();
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::string>();
    v.teamId = j.at("teamId").get<uint64_t>();
  }
  inline std::string to_string(const MatchmakingLcdsMatchMakerParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
