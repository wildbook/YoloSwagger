#ifndef SWAGGER_TYPES_MatchmakingLcdsPlayerParticipant_HPP
#define SWAGGER_TYPES_MatchmakingLcdsPlayerParticipant_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsPlayerParticipant {
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsPlayerParticipant& v) {
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsPlayerParticipant& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsPlayerParticipant_HPP
