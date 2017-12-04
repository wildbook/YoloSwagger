#ifndef SWAGGER_TYPES_LolLobbyReadyDto_HPP
#define SWAGGER_TYPES_LolLobbyReadyDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyReadyDto {
    // 
    bool ready;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReadyDto& v) {
    j["ready"] = v.ready;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReadyDto& v) {
    v.ready = j.at("ready").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyReadyDto_HPP
