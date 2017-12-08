#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameSettingsgamesettingsgameclient.hpp"
namespace leagueapi {
  struct LolGameSettingsgamesettingsgameflowsession_t {
    LolGameSettingsgamesettingsgameclient_t gameClient;
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsgamesettingsgameflowsession_t& v) {
    j["gameClient"] = v.gameClient;
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsgamesettingsgameflowsession_t& v) {
    v.gameClient = j.at("gameClient").get<LolGameSettingsgamesettingsgameclient_t>();
  }
  inline std::string to_string(const LolGameSettingsgamesettingsgameflowsession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
