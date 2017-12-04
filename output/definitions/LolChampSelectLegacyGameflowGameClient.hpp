#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameClient_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameClient_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyGameflowGameClient {
    // 
    bool running;
    // 
    bool visible;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameClient& v) {
    j["running"] = v.running;
    j["visible"] = v.visible;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameClient& v) {
    v.running = j.at("running").get<bool>;
    v.visible = j.at("visible").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameClient_HPP
