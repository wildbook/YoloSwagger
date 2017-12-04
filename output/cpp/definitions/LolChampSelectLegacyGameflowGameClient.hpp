#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameClient_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameClient_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyGameflowGameClient {
    // 
    bool visible;
    // 
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameClient& v) {
    j["visible"] = v.visible;
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameClient& v) {
    v.visible = j.at("visible").get<bool>;
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameClient_HPP
