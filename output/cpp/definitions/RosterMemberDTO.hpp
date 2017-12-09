#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
namespace leagueapi {
  struct RosterMemberDTO_t {
    int32_t currentBid;
    Position_t position;
    int64_t tournamentId;
    int64_t rosterId;
    int64_t joinTime;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const RosterMemberDTO_t& v) {
    j["currentBid"] = v.currentBid;
    j["position"] = v.position;
    j["tournamentId"] = v.tournamentId;
    j["rosterId"] = v.rosterId;
    j["joinTime"] = v.joinTime;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, RosterMemberDTO_t& v) {
    v.currentBid = j.at("currentBid").get<int32_t>();
    v.position = j.at("position").get<Position_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const RosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
