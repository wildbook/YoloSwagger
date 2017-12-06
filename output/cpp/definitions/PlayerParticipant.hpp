#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerParticipant_t {
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PlayerParticipant_t& v) {
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PlayerParticipant_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
