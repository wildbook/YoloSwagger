#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
namespace leagueapi {
  struct RosterMemberDTO_t {
    uint64_t playerId;
    int64_t rosterId;
    int64_t tournamentId;
    Position_t position;
    int32_t currentBid;
    int64_t joinTime;
  };

  inline void to_json(nlohmann::json& j, const RosterMemberDTO_t& v) {
    j["playerId"] = v.playerId;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["position"] = v.position;
    j["currentBid"] = v.currentBid;
    j["joinTime"] = v.joinTime;
  }

  inline void from_json(const nlohmann::json& j, RosterMemberDTO_t& v) {
    v.playerId = j.at("playerId").get<uint64_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.position = j.at("position").get<Position_t>();
    v.currentBid = j.at("currentBid").get<int32_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
  }
  inline std::string to_string(const RosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
