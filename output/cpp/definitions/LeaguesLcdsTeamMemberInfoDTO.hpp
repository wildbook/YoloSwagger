#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsTeamMemberInfoDTO_t {
    uint64_t playerId;
    std::string playerName;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamMemberInfoDTO_t& v) {
    j["playerId"] = v.playerId;
    j["playerName"] = v.playerName;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamMemberInfoDTO_t& v) {
    v.playerId = j.at("playerId").get<uint64_t>();
    v.playerName = j.at("playerName").get<std::string>();
  }
  inline std::string to_string(const LeaguesLcdsTeamMemberInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
