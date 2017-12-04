#ifndef SWAGGER_TYPES_LolChatSettingsResource_HPP
#define SWAGGER_TYPES_LolChatSettingsResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatSettingsResource {
    // 
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const LolChatSettingsResource& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolChatSettingsResource& v) {
    v.data = j.at("data").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolChatSettingsResource_HPP