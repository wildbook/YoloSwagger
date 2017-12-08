#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameClient_t {
    bool visible;
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameClient_t& v) {
    j["visible"] = v.visible;
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameClient_t& v) {
    v.visible = j.at("visible").get<bool>();
    v.running = j.at("running").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
