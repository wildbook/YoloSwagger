#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameClient_t {
    bool running;
    bool visible;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameClient_t& v) {
    j["running"] = v.running;
    j["visible"] = v.visible;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameClient_t& v) {
    v.running = j.at("running").get<bool>();
    v.visible = j.at("visible").get<bool>();
  }
}
