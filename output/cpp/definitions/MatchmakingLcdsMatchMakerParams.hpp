#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsMatchMakerParams_t {
    std::vector<int32_t> queueIds;
    uint64_t_t teamId;
    std::optional<std::string_t> languages;
    std::optional<std::string_t> invitationId;
    std::string_t botDifficulty;
    std::string_t lastMaestroMessage;
    std::vector<uint64_t> team;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerParams_t& v) {
    j["queueIds"] = v.queueIds;
    j["teamId"] = v.teamId;
    if(v.languages)
      j["languages"] = *v.languages;
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    j["botDifficulty"] = v.botDifficulty;
    j["lastMaestroMessage"] = v.lastMaestroMessage;
    j["team"] = v.team;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerParams_t& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.teamId = j.at("teamId").get<uint64_t_t>();
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::string_t>();
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::string_t>();
    v.botDifficulty = j.at("botDifficulty").get<std::string_t>();
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string_t>();
    v.team = j.at("team").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const MatchmakingLcdsMatchMakerParams_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
