#ifndef SWAGGER_TYPES_RsoAuthUserInfo_HPP
#define SWAGGER_TYPES_RsoAuthUserInfo_HPP
#include <json.hpp>
namespace test {
  // 
  struct RsoAuthUserInfo {
'    // 
    std::string userInfo;
  };

  void to_json(nlohmann::json& j, const RsoAuthUserInfo& v) {
    j["userInfo"] = v.userInfo;
  }

  void from_json(const nlohmann::json& j, RsoAuthUserInfo& v) {
    v.userInfo = j.at("userInfo").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthUserInfo_HPP
