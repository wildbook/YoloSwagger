#ifndef SWAGGER_TYPES_RsoAuthIdToken_HPP
#define SWAGGER_TYPES_RsoAuthIdToken_HPP
#include <json.hpp>
namespace test {
  // 
  struct RsoAuthIdToken {
'    // 
    uint64_t expiry;
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const RsoAuthIdToken& v) {
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, RsoAuthIdToken& v) {
    v.expiry = j.at("expiry").get<uint64_t>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthIdToken_HPP
