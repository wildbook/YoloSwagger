#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsMatchMakerParams_t {
    std::vector<int32_t> queueIds;
    std::string botDifficulty;
    std::string lastMaestroMessage;
    std::vector<uint64_t> team;
    std::optional<std::string> invitationId;
    std::optional<std::string> languages;
    uint64_t teamId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams_t& v) {
    j["queueIds"] = v.queueIds;
    j["botDifficulty"] = v.botDifficulty;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["team"] = v.team;
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    if(v.languages)
      j["languages"] = *v.languages;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams_t& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.botDifficulty = j.at("botDifficulty").get<std::string>();
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>();
    v.team = j.at("team").get<std::vector<uint64_t>>();
    if(auto it = j.find("invitationId"); it != j.end() !it->is_null())
      v.invitationId = it->get<std::string>();
    if(auto it = j.find("languages"); it != j.end() !it->is_null())
      v.languages = it->get<std::string>();
    v.teamId = j.at("teamId").get<uint64_t>();
  }
}
