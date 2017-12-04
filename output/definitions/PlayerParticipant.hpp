#ifndef SWAGGER_TYPES_PlayerParticipant_HPP
#define SWAGGER_TYPES_PlayerParticipant_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlayerParticipant {
'    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const PlayerParticipant& v) {
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, PlayerParticipant& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerParticipant_HPP
