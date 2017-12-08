#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameSettingsgamesettingsgameclient_t {
    bool_t running;
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsgamesettingsgameclient_t& v) {
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsgamesettingsgameclient_t& v) {
    v.running = j.at("running").get<bool_t>();
  }
  inline std::string to_string(const LolGameSettingsgamesettingsgameclient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
