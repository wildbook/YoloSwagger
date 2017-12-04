#ifndef SWAGGER_TYPES_RsoAuthIdToken_HPP
#define SWAGGER_TYPES_RsoAuthIdToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthIdToken {
    // 
    std::string token;
    // 
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthIdToken& v) {
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthIdToken& v) {
    v.token = j.at("token").get<std::string>;
    v.expiry = j.at("expiry").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthIdToken_HPP
