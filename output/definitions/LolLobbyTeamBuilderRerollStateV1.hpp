#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderRerollStateV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderRerollStateV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderRerollStateV1 {
    // 
    bool allowRerolling;
    // 
    uint32_t rerollsRemaining;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderRerollStateV1& v) {
    j["allowRerolling"] = v.allowRerolling;
    j["rerollsRemaining"] = v.rerollsRemaining;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderRerollStateV1& v) {
    v.allowRerolling = j.at("allowRerolling").get<bool>;
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderRerollStateV1_HPP
