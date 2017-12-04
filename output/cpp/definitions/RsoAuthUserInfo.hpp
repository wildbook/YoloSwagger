#ifndef SWAGGER_TYPES_RsoAuthUserInfo_HPP
#define SWAGGER_TYPES_RsoAuthUserInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthUserInfo {
    // 
    std::string userInfo;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthUserInfo& v) {
    j["userInfo"] = v.userInfo;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthUserInfo& v) {
    v.userInfo = j.at("userInfo").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthUserInfo_HPP
