#ifndef SWAGGER_TYPES_LolChatAuthResourceRsoAccessToken_HPP
#define SWAGGER_TYPES_LolChatAuthResourceRsoAccessToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatAuthResourceRsoAccessToken {
    // 
    std::vector<std::string> scopes;
    // 
    std::string token;
    // 
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthResourceRsoAccessToken& v) {
    j["scopes"] = v.scopes;
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthResourceRsoAccessToken& v) {
    v.scopes = j.at("scopes").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
    v.expiry = j.at("expiry").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatAuthResourceRsoAccessToken_HPP
