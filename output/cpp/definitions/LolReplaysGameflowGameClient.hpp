#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysGameflowGameClient_t {
    bool_t running;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowGameClient_t& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowGameClient_t& v) {
    v.running = j.at("running").get<bool_t>();
  }
  inline std::string to_string(const LolReplaysGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
