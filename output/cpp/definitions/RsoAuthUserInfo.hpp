#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthUserInfo_t {
    std::string userInfo;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthUserInfo_t& v) {
    j["userInfo"] = v.userInfo;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthUserInfo_t& v) {
    v.userInfo = j.at("userInfo").get<std::string>();
  }
}
