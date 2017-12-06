#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsMatchMakerParams_t {
    std::string botDifficulty;
    std::optional<std::string> invitationId;
    std::optional<std::string> languages;
    std::string lastMaestroMessage;
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> team;
    uint64_t teamId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams_t& v) {
    j["botDifficulty"] = v.botDifficulty;
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    if(v.languages)
      j["languages"] = *v.languages;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["queueIds"] = v.queueIds;
    j["team"] = v.team;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams_t& v) {
    v.botDifficulty = j.at("botDifficulty").get<std::string>();
    if(auto it = j.find("invitationId"); it != j.end() !it->is_null())
      v.invitationId = it->get<std::string>();
    if(auto it = j.find("languages"); it != j.end() !it->is_null())
      v.languages = it->get<std::string>();
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>();
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.team = j.at("team").get<std::vector<uint64_t>>();
    v.teamId = j.at("teamId").get<uint64_t>();
  }
}
