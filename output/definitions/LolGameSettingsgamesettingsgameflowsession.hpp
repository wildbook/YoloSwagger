#ifndef SWAGGER_TYPES_LolGameSettingsgamesettingsgameflowsession_HPP
#define SWAGGER_TYPES_LolGameSettingsgamesettingsgameflowsession_HPP
#include <json.hpp>
#include "LolGameSettingsgamesettingsgameclient.hpp"
namespace leagueapi {
  // 
  struct LolGameSettingsgamesettingsgameflowsession {
    // 
    LolGameSettingsgamesettingsgameclient gameClient;
  };

  void to_json(nlohmann::json& j, const LolGameSettingsgamesettingsgameflowsession& v) {
    j["gameClient"] = v.gameClient;
  }

  void from_json(const nlohmann::json& j, LolGameSettingsgamesettingsgameflowsession& v) {
    v.gameClient = j.at("gameClient").get<LolGameSettingsgamesettingsgameclient>;
  }

}
#endif // SWAGGER_TYPES_LolGameSettingsgamesettingsgameflowsession_HPP
