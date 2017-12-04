#ifndef SWAGGER_TYPES_RsoAuthAccessToken_HPP
#define SWAGGER_TYPES_RsoAuthAccessToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthAccessToken {
    // 
    uint64_t expiry;
    // 
    std::vector<std::string> scopes;
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const RsoAuthAccessToken& v) {
    j["expiry"] = v.expiry;
    j["scopes"] = v.scopes;
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, RsoAuthAccessToken& v) {
    v.expiry = j.at("expiry").get<uint64_t>;
    v.scopes = j.at("scopes").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthAccessToken_HPP