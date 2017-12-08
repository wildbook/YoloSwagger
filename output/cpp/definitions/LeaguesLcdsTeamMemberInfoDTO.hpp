#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsTeamMemberInfoDTO_t {
    std::string playerName;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamMemberInfoDTO_t& v) {
    j["playerName"] = v.playerName;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamMemberInfoDTO_t& v) {
    v.playerName = j.at("playerName").get<std::string>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const LeaguesLcdsTeamMemberInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
