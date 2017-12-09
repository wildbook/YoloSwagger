#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
namespace leagueapi {
  struct RosterMemberDTO_t {
    int64_t rosterId;
    int64_t tournamentId;
    int64_t joinTime;
    Position_t position;
    uint64_t playerId;
    int32_t currentBid;
  };

  inline void to_json(nlohmann::json& j, const RosterMemberDTO_t& v) {
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["joinTime"] = v.joinTime;
    j["position"] = v.position;
    j["playerId"] = v.playerId;
    j["currentBid"] = v.currentBid;
  }

  inline void from_json(const nlohmann::json& j, RosterMemberDTO_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.position = j.at("position").get<Position_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.currentBid = j.at("currentBid").get<int32_t>();
  }
  inline std::string to_string(const RosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
