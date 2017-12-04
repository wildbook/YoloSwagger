#ifndef SWAGGER_TYPES_RsoAuthAccessToken_HPP
#define SWAGGER_TYPES_RsoAuthAccessToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthAccessToken {
    // 
    std::vector<std::string> scopes;
    // 
    std::string token;
    // 
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAccessToken& v) {
    j["scopes"] = v.scopes;
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAccessToken& v) {
    v.scopes = j.at("scopes").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
    v.expiry = j.at("expiry").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthAccessToken_HPP
