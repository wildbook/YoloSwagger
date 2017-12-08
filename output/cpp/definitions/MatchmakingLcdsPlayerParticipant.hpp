#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsPlayerParticipant_t {
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsPlayerParticipant_t& v) {
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsPlayerParticipant_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const MatchmakingLcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
