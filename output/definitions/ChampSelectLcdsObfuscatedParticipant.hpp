#ifndef SWAGGER_TYPES_ChampSelectLcdsObfuscatedParticipant_HPP
#define SWAGGER_TYPES_ChampSelectLcdsObfuscatedParticipant_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsObfuscatedParticipant {
    // 
    uint64_t gameUniqueId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsObfuscatedParticipant& v) {
    j["gameUniqueId"] = v.gameUniqueId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsObfuscatedParticipant& v) {
    v.gameUniqueId = j.at("gameUniqueId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsObfuscatedParticipant_HPP
